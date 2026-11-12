#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKEGCFDLAHE;
namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define EKEGCFDLAHE_BFJGBKJEAHO_OFFSET UNITYSDK_OFFSET(0x1644A0A0)
#define EKEGCFDLAHE_CMFKPHDJJAK_OFFSET UNITYSDK_OFFSET(0x16449DE0)
#define EKEGCFDLAHE_CTOR_OFFSET UNITYSDK_OFFSET(0x16449D80)
#define EKEGCFDLAHE_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0x16449E70)
#define EKEGCFDLAHE_ICCGMLBAINJ_OFFSET UNITYSDK_OFFSET(0x16449A30)
#define EKEGCFDLAHE_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0x1644A040)

inline static constexpr unsigned int EKEGCFDLAHE_TypeDefinitionIndex = 70173;

	class EKEGCFDLAHE : public ::System::Object
	{
	public:
		::System::Type* LDBMGPMFMOL; // 0x10
		::System::Type* LJJMMELAPOL; // 0x18
		::System::Action* MPKAFEJFNKN; // 0x20
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEGCFDLAHE_CTOR_OFFSET))(this);
		}

		static ::EKEGCFDLAHE* ICCGMLBAINJ(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::EKEGCFDLAHE*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + EKEGCFDLAHE_ICCGMLBAINJ_OFFSET))(a1, a2, a3);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEGCFDLAHE_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void CMFKPHDJJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEGCFDLAHE_CMFKPHDJJAK_OFFSET))(this);
		}

		::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + EKEGCFDLAHE_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
		}

		::System::Void BFJGBKJEAHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEGCFDLAHE_BFJGBKJEAHO_OFFSET))(this);
		}

	};
