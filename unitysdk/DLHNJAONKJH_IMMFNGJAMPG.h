#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class DLHNJAONKJH;
namespace MoleMole::Config { class ConfigLogicRotationRegistry; }

#define DLHNJAONKJH_IMMFNGJAMPG_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x1208B2A0)
#define DLHNJAONKJH_IMMFNGJAMPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1208B290)

inline static constexpr unsigned int DLHNJAONKJH_IMMFNGJAMPG_TypeDefinitionIndex = 70433;

class DLHNJAONKJH_IMMFNGJAMPG : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::DLHNJAONKJH* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLHNJAONKJH_IMMFNGJAMPG__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigLogicRotationRegistry* PJGIPHEPLDN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigLogicRotationRegistry*))((::PBYTE)hIl2Cpp + DLHNJAONKJH_IMMFNGJAMPG_BHEKKKNPHAM_OFFSET))(this, PJGIPHEPLDN);
	}
};
