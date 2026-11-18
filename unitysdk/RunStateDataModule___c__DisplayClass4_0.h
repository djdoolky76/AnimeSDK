#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class RunStateDataModule;
namespace MoleMole::Config { class ConfigEntityRunStates; }

#define RUNSTATEDATAMODULE___C__DISPLAYCLASS4_0__CREATEITEMLOADOP_B__0_OFFSET UNITYSDK_OFFSET(0x1C2C9F40)
#define RUNSTATEDATAMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2C9F30)

inline static constexpr unsigned int RunStateDataModule___c__DisplayClass4_0_TypeDefinitionIndex = 66024;

class RunStateDataModule___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RunStateDataModule* __4__this; // 0x10
	::Foundation::AssetPath path; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _CreateItemLoadOp_b__0(::MoleMole::Config::ConfigEntityRunStates* config)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityRunStates*))((::PBYTE)hIl2Cpp + RUNSTATEDATAMODULE___C__DISPLAYCLASS4_0__CREATEITEMLOADOP_B__0_OFFSET))(this, config);
	}
};
