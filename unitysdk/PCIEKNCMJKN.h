#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCIEKNCMJKN;
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Button; }
namespace UnityEngine::UI { class Button_ButtonClickedEvent; }

#define PCIEKNCMJKN_CMFKPHDJJAK_OFFSET UNITYSDK_OFFSET(0xBFF95E0)
#define PCIEKNCMJKN_CTOR_OFFSET UNITYSDK_OFFSET(0xBFF9430)
#define PCIEKNCMJKN_ECGALHNIEOC_OFFSET UNITYSDK_OFFSET(0xBFF9490)
#define PCIEKNCMJKN_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xBFF9760)
#define PCIEKNCMJKN_NEOFNEBLKKL_OFFSET UNITYSDK_OFFSET(0xBFF9950)
#define PCIEKNCMJKN_PKBGADFFCCP_OFFSET UNITYSDK_OFFSET(0xBFF9250)
#define PCIEKNCMJKN_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0xBFF98F0)

inline static constexpr unsigned int PCIEKNCMJKN_TypeDefinitionIndex = 68225;

	class PCIEKNCMJKN : public ::System::Object
	{
	public:
		::System::Action* MPKAFEJFNKN; // 0x10
		::System::Type* LHHFPDJMFBO; // 0x18
		::UnityEngine::UI::Button* KHDHIHPFLJI; // 0x20
		::UnityEngine::UI::Button_ButtonClickedEvent* FPBKFKHEFJC; // 0x28
		::System::Type* ELMOAJCPPJE; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_CTOR_OFFSET))(this);
		}

		static ::PCIEKNCMJKN* PKBGADFFCCP(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::PCIEKNCMJKN*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_PKBGADFFCCP_OFFSET))(a1, a2, a3);
		}

		::System::Void ECGALHNIEOC(::UnityEngine::UI::Button* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Button*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_ECGALHNIEOC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void CMFKPHDJJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_CMFKPHDJJAK_OFFSET))(this);
		}

		::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
		}

		::System::Void NEOFNEBLKKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCIEKNCMJKN_NEOFNEBLKKL_OFFSET))(this);
		}

	};
