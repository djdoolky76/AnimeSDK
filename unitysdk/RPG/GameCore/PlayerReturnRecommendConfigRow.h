#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PlayerReturnRecommendType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class PlayerReturnRecommendConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93B590)
#define RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93B250)

namespace RPG::GameCore
{
	class PlayerReturnRecommendConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Condition; // 0x10
		::System::String* ImagePath; // 0x18
		::System::UInt32 PanelID; // 0x20
		::System::UInt32 GachaID; // 0x24
		::System::UInt32 RecommendID; // 0x28
		::System::UInt32 Weight; // 0x2C
		::System::UInt32 GotoID; // 0x30
		::RPG::GameCore::PlayerReturnRecommendType Type; // 0x34
		::RPG::Client::TextID Title; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerReturnRecommendConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerReturnRecommendConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERRETURNRECOMMENDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
