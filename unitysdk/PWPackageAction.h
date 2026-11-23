#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PWPackageAction_TypeDefinitionIndex = 15936;

enum class PWPackageAction : ::System::Int32
{
	Nothing = 0,
	Install = 1,
	Uninstall = 2,
	DeleteSourcePackage = 3,
	UpdateAndDelete = 4,
};
