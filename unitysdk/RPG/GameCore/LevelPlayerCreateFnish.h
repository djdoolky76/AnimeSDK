#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelPlayerCreateFnish; }

#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F6A90)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F6A40)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F69F0)
#define RPG_GAMECORE_LEVELPLAYERCREATEFNISH_INIT_OFFSET UNITYSDK_OFFSET(0xF1F69B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelPlayerCreateFnish_TypeDefinitionIndex = 58073;

	class LevelPlayerCreateFnish : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelPlayerCreateFnish* Init()
		{
			return ((::RPG::GameCore::LevelPlayerCreateFnish*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELPLAYERCREATEFNISH_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
