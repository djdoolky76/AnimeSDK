#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGLEMOAPNIJ;
namespace RPG::Client { class LongPressEvent; }
namespace System { class Action; }
namespace System { class Type; }
namespace UnityEngine { class Transform; }

#define DGLEMOAPNIJ_CMFKPHDJJAK_OFFSET UNITYSDK_OFFSET(0xE846390)
#define DGLEMOAPNIJ_CTOR_OFFSET UNITYSDK_OFFSET(0xE846330)
#define DGLEMOAPNIJ_FFHNOMIDEDE_OFFSET UNITYSDK_OFFSET(0xE846420)
#define DGLEMOAPNIJ_LCBAGLPOCPE_OFFSET UNITYSDK_OFFSET(0xE846650)
#define DGLEMOAPNIJ_NAEDCDKDKCN_OFFSET UNITYSDK_OFFSET(0xE845FE0)
#define DGLEMOAPNIJ_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET UNITYSDK_OFFSET(0xE8465F0)

inline static constexpr unsigned int DGLEMOAPNIJ_TypeDefinitionIndex = 68226;

	class DGLEMOAPNIJ : public ::System::Object
	{
	public:
		::RPG::Client::LongPressEvent* KANADECCJMH; // 0x10
		::System::Action* MPKAFEJFNKN; // 0x18
		::System::Type* LDBMGPMFMOL; // 0x20
		::System::Type* LJJMMELAPOL; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLEMOAPNIJ_CTOR_OFFSET))(this);
		}

		static ::DGLEMOAPNIJ* NAEDCDKDKCN(::UnityEngine::Transform* a1, ::System::Action* a2, ::System::Boolean a3)
		{
			return ((::DGLEMOAPNIJ*(*)(::UnityEngine::Transform*, ::System::Action*, ::System::Boolean))((::PBYTE)hIl2Cpp + DGLEMOAPNIJ_NAEDCDKDKCN_OFFSET))(a1, a2, a3);
		}

		::System::Void FFHNOMIDEDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLEMOAPNIJ_FFHNOMIDEDE_OFFSET))(this);
		}

		::System::Void CMFKPHDJJAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLEMOAPNIJ_CMFKPHDJJAK_OFFSET))(this);
		}

		::System::Boolean UnityEngine_EventSystems_IExecuteEventBlocker_IsEventBlock(::System::Type* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + DGLEMOAPNIJ_UNITYENGINE_EVENTSYSTEMS_IEXECUTEEVENTBLOCKER_ISEVENTBLOCK_OFFSET))(this, a1);
		}

		::System::Void LCBAGLPOCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGLEMOAPNIJ_LCBAGLPOCPE_OFFSET))(this);
		}

	};
