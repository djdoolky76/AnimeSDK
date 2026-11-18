#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class HFFIKHIMLDG;
namespace MoleMole::Config { class ConfigAbilityTargetData; }

#define HFFIKHIMLDG_IDDJKIMCNML_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15B45AA0)
#define HFFIKHIMLDG_IDDJKIMCNML__CTOR_OFFSET UNITYSDK_OFFSET(0x15B45A90)

inline static constexpr unsigned int HFFIKHIMLDG_IDDJKIMCNML_TypeDefinitionIndex = 74670;

class HFFIKHIMLDG_IDDJKIMCNML : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::HFFIKHIMLDG* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_IDDJKIMCNML__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigAbilityTargetData* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAbilityTargetData*))((::PBYTE)hIl2Cpp + HFFIKHIMLDG_IDDJKIMCNML_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
