#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyTargetType.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILBattleAvatarPromotionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D747980)
#define RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D747540)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleAvatarPromotionConfigRow_TypeDefinitionIndex = 13781;

	class ILBattleAvatarPromotionConfigRow : public ::System::Object
	{
	public:
		::System::String* Trigger; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x18
		::RPG::Client::TextID PromotionDesc; // 0x20
		::System::UInt32 UnlockStar; // 0x30
		::System::Boolean IsProperty; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x38
		::RPG::GameCore::IdleLiveAvatarPropertyTargetType PropertyTarget; // 0x3C
		::System::UInt32 UnlockLevel; // 0x40
		::System::UInt32 AvatarID; // 0x44
		::System::UInt32 ID; // 0x48
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint Param; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILBattleAvatarPromotionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEAVATARPROMOTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
