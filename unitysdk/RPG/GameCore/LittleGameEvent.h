#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEventSourceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEvent; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_LITTLEGAMEEVENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B4D70)
#define RPG_GAMECORE_LITTLEGAMEEVENT_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D7B5020)
#define RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1D7B4DD0)
#define RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D7B4D80)
#define RPG_GAMECORE_LITTLEGAMEEVENT_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D7B4ED0)
#define RPG_GAMECORE_LITTLEGAMEEVENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D7B4E90)
#define RPG_GAMECORE_LITTLEGAMEEVENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B4C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameEvent_TypeDefinitionIndex = 18886;

	class LittleGameEvent : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LittleGameEventSourceType SourceType; // 0x10
		::System::UInt32 EntityID; // 0x14
		::System::String* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::RPG::GameCore::LittleGameEvent* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean FEIIDFFOICL(::RPG::GameCore::LittleGameEvent* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameEvent*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_FEIIDFFOICL_OFFSET))(a1, a2);
		}

		static ::System::Boolean DLDBLNNPHKE(::RPG::GameCore::LittleGameEvent* a1, ::RPG::GameCore::LittleGameEvent* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameEvent*, ::RPG::GameCore::LittleGameEvent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEEVENT_DLDBLNNPHKE_OFFSET))(a1, a2);
		}

	};
}
