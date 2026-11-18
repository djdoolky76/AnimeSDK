#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class JEEHNDLBEKG;
namespace MoleMole::Config { class ConfigInteractEntry; }

#define JEEHNDLBEKG_EEOCBJHFKHG_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x14FA9F20)
#define JEEHNDLBEKG_EEOCBJHFKHG__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA9F10)

inline static constexpr unsigned int JEEHNDLBEKG_EEOCBJHFKHG_TypeDefinitionIndex = 92170;

class JEEHNDLBEKG_EEOCBJHFKHG : public ::System::Object
{
public:
	::JEEHNDLBEKG* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_EEOCBJHFKHG__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigInteractEntry* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigInteractEntry*))((::PBYTE)hIl2Cpp + JEEHNDLBEKG_EEOCBJHFKHG_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
