#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarSeriesSkillRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_AVATARSERIESSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E642210)
#define RPG_GAMECORE_AVATARSERIESSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E641F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSeriesSkillRow_TypeDefinitionIndex = 12843;

	class AvatarSeriesSkillRow : public ::System::Object
	{
	public:
		::System::String* SpecialTagPrefab; // 0x10
		::Il2CppArray<::System::UInt32>* RelateAvatarIDList; // 0x18
		::System::String* FramePrefab; // 0x20
		::RPG::GameCore::ConditionParam* UnlockCondition; // 0x28
		::System::UInt32 AvatarID; // 0x30
		::System::UInt32 Level; // 0x34
		::RPG::Client::TextID SpecialTag; // 0x38
		::System::UInt32 SkillID; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERIESSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarSeriesSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarSeriesSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARSERIESSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
