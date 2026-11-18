#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NHLFKFJPKPP;
namespace MoleMole::Config { class ConfigCameraZooms; }

#define NHLFKFJPKPP_DDNBOLIOALC_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x12FEA9E0)
#define NHLFKFJPKPP_DDNBOLIOALC__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEA9D0)

inline static constexpr unsigned int NHLFKFJPKPP_DDNBOLIOALC_TypeDefinitionIndex = 91817;

class NHLFKFJPKPP_DDNBOLIOALC : public ::System::Object
{
public:
	::NHLFKFJPKPP* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLFKFJPKPP_DDNBOLIOALC__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraZooms* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraZooms*))((::PBYTE)hIl2Cpp + NHLFKFJPKPP_DDNBOLIOALC_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
