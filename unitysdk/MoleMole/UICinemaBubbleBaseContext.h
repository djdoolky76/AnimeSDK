#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class KCHIJNLBOLD;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UICINEMABUBBLEBASECONTEXT_SETUPGRAPHCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1738DF70)
#define MOLEMOLE_UICINEMABUBBLEBASECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1738DFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaBubbleBaseContext_TypeDefinitionIndex = 71759;

	class UICinemaBubbleBaseContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* onShowEventName; // 0x28
		::System::Action_1<::System::String*>* graphEventDisatcher; // 0x30
		::System::Action_1<::System::Boolean>* onFinish; // 0x38
		::System::Func_1<::System::Int32>* onSuccessClickReturnScore; // 0x40
		::System::String* onSuccessEventName; // 0x48
		::System::String* bubbleTextKey; // 0x50
		::System::String* onMissEventName; // 0x58
		::System::String* onClickEventName; // 0x60
		::System::Action* onMiss; // 0x68
		::System::Action* onBeforePerClick; // 0x70
		::System::Int32 hitNum; // 0x78
		::System::Int32 bubbleLocationIdx; // 0x7C
		::System::Single timeDuration; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMABUBBLEBASECONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void SetupGraphCustomEvent(::KCHIJNLBOLD* playEvent, ::System::Action_1<::System::String*>* eventDispatcher)
		{
			return ((::System::Void(*)(::PVOID, ::KCHIJNLBOLD*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMABUBBLEBASECONTEXT_SETUPGRAPHCUSTOMEVENT_OFFSET))(this, playEvent, eventDispatcher);
		}
	};
}
