#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class KJAOLPHIHIC;
namespace MoleMole::Config { class ConfigTriggerCaches; }

#define KJAOLPHIHIC_GJNCAOLOPMC_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x19956B70)
#define KJAOLPHIHIC_GJNCAOLOPMC__CTOR_OFFSET UNITYSDK_OFFSET(0x19956B60)

inline static constexpr unsigned int KJAOLPHIHIC_GJNCAOLOPMC_TypeDefinitionIndex = 88545;

class KJAOLPHIHIC_GJNCAOLOPMC : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::KJAOLPHIHIC* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_GJNCAOLOPMC__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigTriggerCaches* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigTriggerCaches*))((::PBYTE)hIl2Cpp + KJAOLPHIHIC_GJNCAOLOPMC_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
