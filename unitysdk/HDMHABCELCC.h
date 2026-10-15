#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MatchThreeBoard; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define HDMHABCELCC_BFGPMMAALEC_OFFSET UNITYSDK_OFFSET(0x15C30FA0)
#define HDMHABCELCC_CTOR_OFFSET UNITYSDK_OFFSET(0x15C30FF0)
#define HDMHABCELCC_ENTER_OFFSET UNITYSDK_OFFSET(0x15C30E20)
#define HDMHABCELCC_EXIT_OFFSET UNITYSDK_OFFSET(0x15C30EC0)
#define HDMHABCELCC_MLIKOLKEKGL_OFFSET UNITYSDK_OFFSET(0x15C30F50)
#define HDMHABCELCC_ONDRAG_OFFSET UNITYSDK_OFFSET(0x15C30F00)
#define HDMHABCELCC_TICK_OFFSET UNITYSDK_OFFSET(0x15C30E70)

inline static constexpr unsigned int HDMHABCELCC_TypeDefinitionIndex = 65848;

	class HDMHABCELCC : public ::System::Object
	{
	public:
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMHABCELCC_CTOR_OFFSET))(this);
		}

		::System::Void Enter(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + HDMHABCELCC_ENTER_OFFSET))(this, a1);
		}

		::System::Void Tick(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + HDMHABCELCC_TICK_OFFSET))(this, a1);
		}

		::System::Void Exit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDMHABCELCC_EXIT_OFFSET))(this);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + HDMHABCELCC_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void MLIKOLKEKGL(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + HDMHABCELCC_MLIKOLKEKGL_OFFSET))(this, a1);
		}

		::System::Void BFGPMMAALEC(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + HDMHABCELCC_BFGPMMAALEC_OFFSET))(this, a1);
		}

	};
