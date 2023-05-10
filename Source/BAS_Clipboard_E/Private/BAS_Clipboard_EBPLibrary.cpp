// Copyright 2022, BrokenArm Studios, All rights reserved

#include "BAS_Clipboard_EBPLibrary.h"
#include "BAS_Clipboard_E.h"

void UBAS_Clipboard_EBPLibrary::BAS_CopyClipboard(FString Text)
{
	FPlatformMisc::ClipboardCopy(*Text);
}

FString UBAS_Clipboard_EBPLibrary::BAS_GetClipboard()
{
	FString ClipboardContent;
	FPlatformMisc::ClipboardPaste(ClipboardContent);
	return ClipboardContent;
}