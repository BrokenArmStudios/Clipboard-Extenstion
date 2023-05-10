// Copyright 2022, BrokenArm Studios, All rights reserved

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "BAS_Clipboard_EBPLibrary.generated.h"

UCLASS()
class UBAS_Clipboard_EBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Copy To Clipboard", Keywords = "BAS Clipboard Extension Copy", ToolTip = "Copies the text to the computer's clipboard"), Category = "Clipboard Extension")
		static void BAS_CopyClipboard(FString Text);

	UFUNCTION(BlueprintPure, meta = (DisplayName = "Get Clipboard", Keywords = "BAS Clipboard Extension Get Paste", ToolTip = "Fetches the computers clipboard and returns it"), Category = "Clipboard Extension")
		static FString BAS_GetClipboard();
};
