#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ECGCMHEDEPC;
namespace MoleMole { class UIInLevelMonsterPortableHudBaseChildWindowController; }

#define ECGCMHEDEPC_FKIFIKKJFGH_LLHBMGEDDFE_OFFSET UNITYSDK_OFFSET(0xFDD4DE0)
#define ECGCMHEDEPC_FKIFIKKJFGH__CTOR_OFFSET UNITYSDK_OFFSET(0xFDD4DD0)

inline static constexpr unsigned int ECGCMHEDEPC_FKIFIKKJFGH_TypeDefinitionIndex = 55296;

class ECGCMHEDEPC_FKIFIKKJFGH : public ::System::Object
{
public:
	::ECGCMHEDEPC* KLHPEBKNIFB; // 0x10
	::UnityEngine::Vector3 ADDCBFJBHNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FKIFIKKJFGH__CTOR_OFFSET))(this);
	}

	::System::Void LLHBMGEDDFE(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterPortableHudBaseChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_FKIFIKKJFGH_LLHBMGEDDFE_OFFSET))(this, PIIPCLCCOIG, JOLDOMEIKEF);
	}
};
