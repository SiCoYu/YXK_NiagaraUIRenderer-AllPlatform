// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MyProject_NiagaraUI : ModuleRules
{
	public MyProject_NiagaraUI(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
