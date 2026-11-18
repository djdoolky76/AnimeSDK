#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LLKHKDHOIOE;
namespace MoleMole::Config { class ConfigLogicMovementRegistry; }

#define LLKHKDHOIOE_NBHIIGNGLNM_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x13D06EE0)
#define LLKHKDHOIOE_NBHIIGNGLNM__CTOR_OFFSET UNITYSDK_OFFSET(0x13D06ED0)

inline static constexpr unsigned int LLKHKDHOIOE_NBHIIGNGLNM_TypeDefinitionIndex = 77542;

class LLKHKDHOIOE_NBHIIGNGLNM : public ::System::Object
{
public:
	::LLKHKDHOIOE* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_NBHIIGNGLNM__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigLogicMovementRegistry* PJGIPHEPLDN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicMovementRegistry*))((::PBYTE)hIl2Cpp + LLKHKDHOIOE_NBHIIGNGLNM_BHEKKKNPHAM_OFFSET))(this, PJGIPHEPLDN);
	}
};
