#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_CONFIGVOICETOEVENT_TRYGETRULELIST_OFFSET UNITYSDK_OFFSET(0x180CAB80)
#define MOLEMOLE_CONFIGVOICETOEVENT_TRYGETWWISEEVENT_OFFSET UNITYSDK_OFFSET(0x180CADF0)
#define MOLEMOLE_CONFIGVOICETOEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x180CB0A0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigVoiceToEvent_TypeDefinitionIndex = 55839;

	class ConfigVoiceToEvent : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*>* rulesByUsageKey; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetRuleList(::System::String* usageKey, ::System::Collections::Generic::List_1<::System::Object*>*& rules)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Collections::Generic::List_1<::System::Object*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT_TRYGETRULELIST_OFFSET))(this, usageKey, rules);
		}

		::System::Boolean TryGetWwiseEvent(::System::String* usageKey, ::UnityEngine::GameObject* emitterGo, ::System::String*& wwiseEventName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::UnityEngine::GameObject*, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGVOICETOEVENT_TRYGETWWISEEVENT_OFFSET))(this, usageKey, emitterGo, wwiseEventName);
		}
	};
}
