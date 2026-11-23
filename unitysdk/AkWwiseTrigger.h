#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkDragDropTriggerHandler.h"

namespace AK::Wwise { class BaseType; }
namespace AK::Wwise { class Trigger; }
namespace UnityEngine { class GameObject; }

#define AKWWISETRIGGER_B60CEDA00387A3B9_OFFSET UNITYSDK_OFFSET(0x165A410)
#define AKWWISETRIGGER_BA5D948B943E88B1_OFFSET UNITYSDK_OFFSET(0x2928800)
#define AKWWISETRIGGER_F328E4D8818B1E12_OFFSET UNITYSDK_OFFSET(0x2915CD0)
#define AKWWISETRIGGER_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x2915CB0)
#define AKWWISETRIGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x2928890)

inline static constexpr unsigned int AkWwiseTrigger_TypeDefinitionIndex = 20436;

class AkWwiseTrigger : public ::AkDragDropTriggerHandler
{
public:
	::AK::Wwise::Trigger* data; // 0x38

	::AK::Wwise::BaseType* B60CEDA00387A3B9()
	{
		return ((::AK::Wwise::BaseType*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISETRIGGER_B60CEDA00387A3B9_OFFSET))(this);
	}

	::System::Void F328E4D8818B1E12()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISETRIGGER_F328E4D8818B1E12_OFFSET))(this);
	}

	::System::Void FDBCDBBFE02CD51A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISETRIGGER_FDBCDBBFE02CD51A_OFFSET))(this);
	}

	::System::Void BA5D948B943E88B1(::UnityEngine::GameObject* AACD1FD78C470A3F)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKWWISETRIGGER_BA5D948B943E88B1_OFFSET))(this, AACD1FD78C470A3F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKWWISETRIGGER__CTOR_OFFSET))(this);
	}
};
