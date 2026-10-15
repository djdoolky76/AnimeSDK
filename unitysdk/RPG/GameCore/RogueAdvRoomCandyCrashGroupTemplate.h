#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdvRoomCandyCrashGroupTemplate; }
namespace RPG::GameCore { class RogueAdvRoomCandyCrashPropInfo; }

#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D975C50)
#define RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D975B60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAdvRoomCandyCrashGroupTemplate_TypeDefinitionIndex = 17888;

	class RogueAdvRoomCandyCrashGroupTemplate : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RogueAdvRoomCandyCrashPropInfo*>* Props; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdvRoomCandyCrashGroupTemplate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVROOMCANDYCRASHGROUPTEMPLATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
