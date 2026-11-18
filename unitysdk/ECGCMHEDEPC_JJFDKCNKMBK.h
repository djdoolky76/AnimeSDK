#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ECGCMHEDEPC;
namespace MoleMole { class UIInLevelMonsterHudLevelChildWindowController; }

#define ECGCMHEDEPC_JJFDKCNKMBK_BFMGAOJLDFE_OFFSET UNITYSDK_OFFSET(0x15890050)
#define ECGCMHEDEPC_JJFDKCNKMBK__CTOR_OFFSET UNITYSDK_OFFSET(0x15890040)

inline static constexpr unsigned int ECGCMHEDEPC_JJFDKCNKMBK_TypeDefinitionIndex = 55308;

class ECGCMHEDEPC_JJFDKCNKMBK : public ::System::Object
{
public:
	::ECGCMHEDEPC* KLHPEBKNIFB; // 0x10
	::UnityEngine::Vector3 ADDCBFJBHNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JJFDKCNKMBK__CTOR_OFFSET))(this);
	}

	::System::Void BFMGAOJLDFE(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController* JOLDOMEIKEF)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelMonsterHudLevelChildWindowController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_JJFDKCNKMBK_BFMGAOJLDFE_OFFSET))(this, PIIPCLCCOIG, JOLDOMEIKEF);
	}
};
