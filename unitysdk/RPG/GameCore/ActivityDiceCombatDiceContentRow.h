#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityDiceCombatDiceContentRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E560360)
#define RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E55FEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityDiceCombatDiceContentRow_TypeDefinitionIndex = 11294;

	class ActivityDiceCombatDiceContentRow : public ::System::Object
	{
	public:
		::System::String* SKillImagePathSmall; // 0x10
		::System::String* DiceSkillJsonPath; // 0x18
		::System::String* SKillImgPath; // 0x20
		::System::String* SKillImgPathUI3D; // 0x28
		::Il2CppArray<::System::UInt32>* GlossaryIDList; // 0x30
		::System::String* ImgPath; // 0x38
		::Il2CppArray<::System::UInt32>* SkillParam; // 0x40
		::System::Single AIEffectWeight; // 0x48
		::System::UInt32 Content; // 0x4C
		::System::UInt32 ContentID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID SKillDesc; // 0x58
		::RPG::Client::TextID ImageTextmap; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityDiceCombatDiceContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityDiceCombatDiceContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYDICECOMBATDICECONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
