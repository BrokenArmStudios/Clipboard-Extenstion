// Copyright 2022, BrokenArm Studios, All rights reserved

#pragma once

#include "Modules/ModuleManager.h"

class FBAS_Clipboard_EModule : public IModuleInterface
{
public:

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};
