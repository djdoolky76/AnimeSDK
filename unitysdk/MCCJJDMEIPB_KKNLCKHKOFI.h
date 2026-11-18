#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class MCCJJDMEIPB;
namespace MoleMole::Config { class ConfigHitDatas; }

#define MCCJJDMEIPB_KKNLCKHKOFI_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x18525600)
#define MCCJJDMEIPB_KKNLCKHKOFI__CTOR_OFFSET UNITYSDK_OFFSET(0x185255F0)

inline static constexpr unsigned int MCCJJDMEIPB_KKNLCKHKOFI_TypeDefinitionIndex = 89970;

class MCCJJDMEIPB_KKNLCKHKOFI : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::MCCJJDMEIPB* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_KKNLCKHKOFI__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigHitDatas* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitDatas*))((::PBYTE)hIl2Cpp + MCCJJDMEIPB_KKNLCKHKOFI_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
