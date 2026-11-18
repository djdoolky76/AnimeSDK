#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class OCLKPPOGDMO;
namespace MoleMole::Config { class ConfigOverShoulderCamera; }

#define OCLKPPOGDMO_LMDAMOFDIIF_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0xE0E7060)
#define OCLKPPOGDMO_LMDAMOFDIIF__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E7050)

inline static constexpr unsigned int OCLKPPOGDMO_LMDAMOFDIIF_TypeDefinitionIndex = 79428;

class OCLKPPOGDMO_LMDAMOFDIIF : public ::System::Object
{
public:
	::OCLKPPOGDMO* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCLKPPOGDMO_LMDAMOFDIIF__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigOverShoulderCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*))((::PBYTE)hIl2Cpp + OCLKPPOGDMO_LMDAMOFDIIF_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
