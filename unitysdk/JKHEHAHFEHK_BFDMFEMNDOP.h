#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class JKHEHAHFEHK;
namespace MoleMole::Config { class ConfigOverShoulderCamera; }

#define JKHEHAHFEHK_BFDMFEMNDOP_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x14A85340)
#define JKHEHAHFEHK_BFDMFEMNDOP__CTOR_OFFSET UNITYSDK_OFFSET(0x14A85330)

inline static constexpr unsigned int JKHEHAHFEHK_BFDMFEMNDOP_TypeDefinitionIndex = 78875;

class JKHEHAHFEHK_BFDMFEMNDOP : public ::System::Object
{
public:
	::JKHEHAHFEHK* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHEHAHFEHK_BFDMFEMNDOP__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigOverShoulderCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigOverShoulderCamera*))((::PBYTE)hIl2Cpp + JKHEHAHFEHK_BFDMFEMNDOP_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
