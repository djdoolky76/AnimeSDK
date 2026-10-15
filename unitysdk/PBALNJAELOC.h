#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PBALNJAELOC;
namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define PBALNJAELOC_CMFKPHDJJAK_OFFSET UNITYSDK_OFFSET(0xBFD97D0)
#define PBALNJAELOC_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD9770)
#define PBALNJAELOC_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xBFD9860)
#define PBALNJAELOC_HNPGOEFMDFK_OFFSET UNITYSDK_OFFSET(0xBFD9430)
#define PBALNJAELOC_JKIBICNOBAA_OFFSET UNITYSDK_OFFSET(0xBFD9A90)
#define PBALNJAELOC_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0xBFD9A30)

inline static constexpr unsigned int PBALNJAELOC_TypeDefinitionIndex = 68229;

	class PBALNJAELOC : public ::System::Object
	{
	public:
		::System::Type* LJJMMELAPOL; // 0x10
		::System::Type* LDBMGPMFMOL; // 0x18
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x20
		::System::Action* MPKAFEJFNKN; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBALNJAELOC_CTOR_OFFSET))(this);
		}

		static ::PBALNJAELOC* HNPGOEFMDFK(::UnityEngine::Transform* a1, ::System::Action* a2)
		{
			return ((::PBALNJAELOC*(*)(::UnityEngine::Transform*, ::System::Action*))((::PBYTE)hIl2Cpp + PBALNJAELOC_HNPGOEFMDFK_OFFSET))(a1, a2);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBALNJAELOC_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void CMFKPHDJJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBALNJAELOC_CMFKPHDJJAK_OFFSET))(this);
		}

		::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PBALNJAELOC_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
		}

		::System::Void JKIBICNOBAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBALNJAELOC_JKIBICNOBAA_OFFSET))(this);
		}

	};
