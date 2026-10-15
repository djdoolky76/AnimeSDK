#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BackgroundTalkInfo; }
namespace RPG::GameCore { class BattlePlayTalk; }

#define RPG_GAMECORE_BATTLEPLAYTALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D465510)
#define RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D465520)
#define RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4654E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattlePlayTalk_TypeDefinitionIndex = 23383;

	class BattlePlayTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BackgroundTalkInfo*>* TalkList; // 0x18
		::System::Boolean KeepDisplay; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYTALK_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePlayTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePlayTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattlePlayTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattlePlayTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLEPLAYTALK_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
