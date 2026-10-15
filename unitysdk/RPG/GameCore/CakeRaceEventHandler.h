#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceCoreEventType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionBase; }
namespace RPG::GameCore { class CakeRaceEventHandler; }

#define RPG_GAMECORE_CAKERACEEVENTHANDLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5213A0)
#define RPG_GAMECORE_CAKERACEEVENTHANDLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5211E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceEventHandler_TypeDefinitionIndex = 18331;

	class CakeRaceEventHandler : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CakeRaceCoreEventType EventType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::CakeRaceActionBase*>* Actions; // 0x18
		::System::Boolean IsOnlyListenOwner; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEVENTHANDLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceEventHandler* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceEventHandler*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEEVENTHANDLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
