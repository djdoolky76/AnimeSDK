#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NEMGKNGCNPA;
namespace MoleMole::Config { class ConfigSlideRopeCamera; }

#define NEMGKNGCNPA_IAEJEJKKKIA_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x12FE11C0)
#define NEMGKNGCNPA_IAEJEJKKKIA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE11B0)

inline static constexpr unsigned int NEMGKNGCNPA_IAEJEJKKKIA_TypeDefinitionIndex = 72229;

class NEMGKNGCNPA_IAEJEJKKKIA : public ::System::Object
{
public:
	::NEMGKNGCNPA* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_IAEJEJKKKIA__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigSlideRopeCamera* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSlideRopeCamera*))((::PBYTE)hIl2Cpp + NEMGKNGCNPA_IAEJEJKKKIA_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
