#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/Extension/UITimeWidgetParam.h"

namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define KFGCLOPEGJO_AJPDHKKLFHK_EMPNMFPMEHK_OFFSET UNITYSDK_OFFSET(0x15B878B0)
#define KFGCLOPEGJO_AJPDHKKLFHK__CTOR_OFFSET UNITYSDK_OFFSET(0x15B878A0)

inline static constexpr unsigned int KFGCLOPEGJO_AJPDHKKLFHK_TypeDefinitionIndex = 78926;

class KFGCLOPEGJO_AJPDHKKLFHK : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UITimeWidgetParam HNOPAJLDCFB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_AJPDHKKLFHK__CTOR_OFFSET))(this);
	}

	::System::Void EMPNMFPMEHK(::UnityEngine::UI::Extension::UITimeWidget* GBELIHABEDH, ::System::Int64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*, ::System::Int64))((::PBYTE)hIl2Cpp + KFGCLOPEGJO_AJPDHKKLFHK_EMPNMFPMEHK_OFFSET))(this, GBELIHABEDH, EGEGIMGMJHN);
	}
};
