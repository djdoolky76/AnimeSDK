#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropInfo; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A38D0)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A3780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashPropInfo_TypeDefinitionIndex = 17889;

	class RogueAdvRoomCandyCrashPropInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Int32 InitState; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHPROPINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
