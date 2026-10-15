#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialEmoBlackList; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D757810)
#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D757820)
#define RPG_GAMECORE_HEARTDIALEMOBLACKLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7577E0)

namespace RPG::GameCore
{
	class HeartDialEmoBlackList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::HeartDialEmoType>* EmoTypeBlackList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialEmoBlackList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialEmoBlackList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialEmoBlackList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialEmoBlackList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALEMOBLACKLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
