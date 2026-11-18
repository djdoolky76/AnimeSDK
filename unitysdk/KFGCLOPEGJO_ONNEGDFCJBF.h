#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralBtn03WidgetController; }
namespace UnityEngine::Events { class UnityAction; }

#define KFGCLOPEGJO_ONNEGDFCJBF_JILHPCEPGLA_OFFSET UNITYSDK_OFFSET(0x1994D430)
#define KFGCLOPEGJO_ONNEGDFCJBF_JPHBJNMCBJH_OFFSET UNITYSDK_OFFSET(0x1994D460)
#define KFGCLOPEGJO_ONNEGDFCJBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1994D420)

inline static constexpr unsigned int KFGCLOPEGJO_ONNEGDFCJBF_TypeDefinitionIndex = 78951;

class KFGCLOPEGJO_ONNEGDFCJBF : public ::System::Object
{
public:
	::MoleMole::UIGeneralBtn03WidgetController* KEHCNDLFKGA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_ONNEGDFCJBF__CTOR_OFFSET))(this);
	}

	::System::Void JILHPCEPGLA(::MoleMole::UIGeneralBtn03WidgetController* MNOMCCLBJAO, ::UnityEngine::Events::UnityAction* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralBtn03WidgetController*, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_ONNEGDFCJBF_JILHPCEPGLA_OFFSET))(this, MNOMCCLBJAO, EGEGIMGMJHN);
	}

	::System::Void JPHBJNMCBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_ONNEGDFCJBF_JPHBJNMCBJH_OFFSET))(this);
	}
};
