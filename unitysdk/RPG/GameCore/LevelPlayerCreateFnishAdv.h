#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelPlayerCreateFnishAdv; }

#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA98E00)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA98DB0)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA98D60)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_INIT_OFFSET UNITYSDK_OFFSET(0x1FA98D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayerCreateFnishAdv_TypeDefinitionIndex = 58072;

	class LevelPlayerCreateFnishAdv : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPlayerCreateFnishAdv* Init()
		{
			return ((::RPG::GameCore::LevelPlayerCreateFnishAdv*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISHADV_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
