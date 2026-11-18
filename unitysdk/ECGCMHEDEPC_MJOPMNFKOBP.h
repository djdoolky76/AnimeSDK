#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ECGCMHEDEPC;
namespace MoleMole { class UIInLevelNPCNameWidgetController; }

#define ECGCMHEDEPC_MJOPMNFKOBP_DMEEOMBMIAF_OFFSET UNITYSDK_OFFSET(0x1062C300)
#define ECGCMHEDEPC_MJOPMNFKOBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1062C2F0)

inline static constexpr unsigned int ECGCMHEDEPC_MJOPMNFKOBP_TypeDefinitionIndex = 55294;

class ECGCMHEDEPC_MJOPMNFKOBP : public ::System::Object
{
public:
	::ECGCMHEDEPC* KLHPEBKNIFB; // 0x10
	::UnityEngine::Vector3 ADDCBFJBHNC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MJOPMNFKOBP__CTOR_OFFSET))(this);
	}

	::System::Void DMEEOMBMIAF(::System::UInt32 PIIPCLCCOIG, ::MoleMole::UIInLevelNPCNameWidgetController* MNOMCCLBJAO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::UIInLevelNPCNameWidgetController*))((::PBYTE)hIl2Cpp + ECGCMHEDEPC_MJOPMNFKOBP_DMEEOMBMIAF_OFFSET))(this, PIIPCLCCOIG, MNOMCCLBJAO);
	}
};
