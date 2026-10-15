#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterFollowDirMode.h"
#include "unitysdk/RPG/GameCore/CharacterFollowOffsetMode.h"
#include "unitysdk/RPG/GameCore/CharacterFormationType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CustomTeamFormationParam; }
namespace RPG::GameCore { class LocationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_CUSTOMTEAMFORMATIONPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5EA610)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5EA7B0)
#define RPG_GAMECORE_CUSTOMTEAMFORMATIONPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5EA630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomTeamFormationParam_TypeDefinitionIndex = 16586;

	class CustomTeamFormationParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* ParamGroupName; // 0x10
		::RPG::GameCore::CharacterFormationType FormationType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::LocationConfig* LocationConfig; // 0x20
		::RPG::GameCore::CharacterFollowOffsetMode FollowOffsetMode; // 0x28
		::RPG::GameCore::CharacterFollowDirMode FollowDirMode; // 0x2C
		::System::Boolean Visible; // 0x30
		::System::Byte _padding1[0x3];
		::System::Single Scale; // 0x34
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* AttachPointRedirect; // 0x38
		::System::String* AttachPointRedirectRule; // 0x40
		::System::String* ForceAnimName; // 0x48
		::Il2CppArray<::System::String*>* ForceAnimIgnoreList; // 0x50
		::System::Single FollowOffsetTransitionTime; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomTeamFormationParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomTeamFormationParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CustomTeamFormationParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CustomTeamFormationParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CUSTOMTEAMFORMATIONPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
