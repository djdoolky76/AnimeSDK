#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANGLHLBNECC;
namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define ANGLHLBNECC_CMFKPHDJJAK_OFFSET UNITYSDK_OFFSET(0x15596DE0)
#define ANGLHLBNECC_CTOR_OFFSET UNITYSDK_OFFSET(0x15596D80)
#define ANGLHLBNECC_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x15596E70)
#define ANGLHLBNECC_FIAHFEFLCCI_OFFSET UNITYSDK_OFFSET(0x155970A0)
#define ANGLHLBNECC_IILBHCGJCEA_OFFSET UNITYSDK_OFFSET(0x15596A30)
#define ANGLHLBNECC_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x15597040)

	class ANGLHLBNECC : public ::System::Object
	{
	public:
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x10
		::System::Type* LDBMGPMFMOL; // 0x18
		::System::Action* MPKAFEJFNKN; // 0x20
		::System::Type* LJJMMELAPOL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGLHLBNECC_CTOR_OFFSET))(this);
		}

		static ::ANGLHLBNECC* IILBHCGJCEA(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::ANGLHLBNECC*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + ANGLHLBNECC_IILBHCGJCEA_OFFSET))(a1, a2, a3);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGLHLBNECC_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void CMFKPHDJJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGLHLBNECC_CMFKPHDJJAK_OFFSET))(this);
		}

		::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + ANGLHLBNECC_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
		}

		::System::Void FIAHFEFLCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANGLHLBNECC_FIAHFEFLCCI_OFFSET))(this);
		}

	};
