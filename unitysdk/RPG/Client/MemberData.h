#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/RPG/Client/TeamDataRefreshMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class MemberData; }
namespace RPG::Client { class PropertyNumberUIData; }
namespace RPG::GameCore { class IAdventurePlayerCommonRowWrap; }
namespace RPG::GameCore { class IAvatarCommonRowWrap; }
namespace System { class String; }

#define RPG_CLIENT_MEMBERDATA_CREATESNAPSHOT_OFFSET UNITYSDK_OFFSET(0x1E9290A0)
#define RPG_CLIENT_MEMBERDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E928F90)
#define RPG_CLIENT_MEMBERDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1E928F30)
#define RPG_CLIENT_MEMBERDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E929080)
#define RPG_CLIENT_MEMBERDATA_GETCURRENTHP_OFFSET UNITYSDK_OFFSET(0x1E92A260)
#define RPG_CLIENT_MEMBERDATA_GETCURRENTSP_OFFSET UNITYSDK_OFFSET(0x1E92A2C0)
#define RPG_CLIENT_MEMBERDATA_GETPROPERTYNUMBERUIDATA_OFFSET UNITYSDK_OFFSET(0x1E92A310)
#define RPG_CLIENT_MEMBERDATA_GETREFRESHMASK_OFFSET UNITYSDK_OFFSET(0x1E929160)
#define RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERID_OFFSET UNITYSDK_OFFSET(0x1E9285E0)
#define RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERROW_OFFSET UNITYSDK_OFFSET(0x1E928780)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARID_OFFSET UNITYSDK_OFFSET(0x1E928220)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARKEYID_OFFSET UNITYSDK_OFFSET(0x1E928560)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARROW_OFFSET UNITYSDK_OFFSET(0x1E928890)
#define RPG_CLIENT_MEMBERDATA_GET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1E928200)
#define RPG_CLIENT_MEMBERDATA_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1E9281E0)
#define RPG_CLIENT_MEMBERDATA_GET_ENHANCEDID_OFFSET UNITYSDK_OFFSET(0x1E928630)
#define RPG_CLIENT_MEMBERDATA_GET_ENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1E9282E0)
#define RPG_CLIENT_MEMBERDATA_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1E928B70)
#define RPG_CLIENT_MEMBERDATA_GET_ISALIVE_OFFSET UNITYSDK_OFFSET(0x1E928680)
#define RPG_CLIENT_MEMBERDATA_GET_ISASSISTAVATAR_OFFSET UNITYSDK_OFFSET(0x1E9283C0)
#define RPG_CLIENT_MEMBERDATA_GET_ISFIXEDPATHAVATAR_OFFSET UNITYSDK_OFFSET(0x1E9284C0)
#define RPG_CLIENT_MEMBERDATA_GET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x1E928760)
#define RPG_CLIENT_MEMBERDATA_GET_ISPLAYERRETURNTRIALAVATAR_OFFSET UNITYSDK_OFFSET(0x1E928410)
#define RPG_CLIENT_MEMBERDATA_GET_ISTRIALPLAYER_OFFSET UNITYSDK_OFFSET(0x1E928340)
#define RPG_CLIENT_MEMBERDATA_GET_ISUPGRADEAVATAR_OFFSET UNITYSDK_OFFSET(0x1E928510)
#define RPG_CLIENT_MEMBERDATA_GET_LEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x1E928720)
#define RPG_CLIENT_MEMBERDATA_GET_LEFTSPRATIO_OFFSET UNITYSDK_OFFSET(0x1E928DF0)
#define RPG_CLIENT_MEMBERDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E928940)
#define RPG_CLIENT_MEMBERDATA_GET_REALID_OFFSET UNITYSDK_OFFSET(0x1E928290)
#define RPG_CLIENT_MEMBERDATA_GET_SATIETYRATIO_OFFSET UNITYSDK_OFFSET(0x1E928EA0)
#define RPG_CLIENT_MEMBERDATA_GET_SPEICALAVTARID_OFFSET UNITYSDK_OFFSET(0x1E928320)
#define RPG_CLIENT_MEMBERDATA_GET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0x1E928300)
#define RPG_CLIENT_MEMBERDATA_SET_AVATARTYPE_OFFSET UNITYSDK_OFFSET(0x1E928210)
#define RPG_CLIENT_MEMBERDATA_SET_AVATAR_OFFSET UNITYSDK_OFFSET(0x1E9281F0)
#define RPG_CLIENT_MEMBERDATA_SET_ENTITYCREATED_OFFSET UNITYSDK_OFFSET(0x1E9282F0)
#define RPG_CLIENT_MEMBERDATA_SET_ISLEADER_OFFSET UNITYSDK_OFFSET(0x1E928770)
#define RPG_CLIENT_MEMBERDATA_SET_LEFTHPRATIO_OFFSET UNITYSDK_OFFSET(0x1E928DA0)
#define RPG_CLIENT_MEMBERDATA_SET_LEFTSPRATIO_OFFSET UNITYSDK_OFFSET(0x1E928E50)
#define RPG_CLIENT_MEMBERDATA_SET_SATIETYRATIO_OFFSET UNITYSDK_OFFSET(0x1E928EE0)
#define RPG_CLIENT_MEMBERDATA_SET_SPEICALAVTARID_OFFSET UNITYSDK_OFFSET(0x1E928330)
#define RPG_CLIENT_MEMBERDATA_SET_TRIALPLAYERID_OFFSET UNITYSDK_OFFSET(0x1E928310)
#define RPG_CLIENT_MEMBERDATA_TOPERMYRIADPRECISION_OFFSET UNITYSDK_OFFSET(0x1E9296F0)
#define RPG_CLIENT_MEMBERDATA__TESTPERMYRIADPRECISION_OFFSET UNITYSDK_OFFSET(0x1E92A1B0)

namespace RPG::Client
{
	inline static constexpr unsigned int MemberData_TypeDefinitionIndex = 70052;

	class MemberData : public ::System::Object
	{
	public:
		::RPG::AvatarSystem::IAvatar* _Avatar_k__BackingField; // 0x10
		::RPG::GameCore::IAdventurePlayerCommonRowWrap* _AdventurePlayerRow; // 0x18
		::RPG::GameCore::FixPoint _LeftHPRatio; // 0x20
		::ACINIALAFDE _AvatarType_k__BackingField; // 0x28
		::System::UInt32 _TrialPlayerID_k__BackingField; // 0x2C
		::RPG::GameCore::FixPoint _LeftSPRatio; // 0x30
		::RPG::GameCore::FixPoint _SatietyRatio; // 0x38
		::System::Boolean _IsLeader_k__BackingField; // 0x40
		::System::Boolean _EntityCreated_k__BackingField; // 0x41
		::System::Byte _padding0[0x2];
		::System::UInt32 _SpeicalAvtarID_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CTOR_OFFSET))(this);
		}

		::RPG::AvatarSystem::IAvatar* get_Avatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATAR_OFFSET))(this);
		}

		::System::Void set_Avatar(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_AVATAR_OFFSET))(this, a1);
		}

		::ACINIALAFDE get_AvatarType()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARTYPE_OFFSET))(this);
		}

		::System::Void set_AvatarType(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_AVATARTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARID_OFFSET))(this);
		}

		::System::UInt32 get_RealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_REALID_OFFSET))(this);
		}

		::System::Boolean get_EntityCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ENTITYCREATED_OFFSET))(this);
		}

		::System::Void set_EntityCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_ENTITYCREATED_OFFSET))(this, a1);
		}

		::System::UInt32 get_TrialPlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_TRIALPLAYERID_OFFSET))(this);
		}

		::System::Void set_TrialPlayerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_TRIALPLAYERID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SpeicalAvtarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_SPEICALAVTARID_OFFSET))(this);
		}

		::System::Void set_SpeicalAvtarID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_SPEICALAVTARID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsTrialPlayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISTRIALPLAYER_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerReturnTrialAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISPLAYERRETURNTRIALAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsAssistAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISASSISTAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsFixedPathAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISFIXEDPATHAVATAR_OFFSET))(this);
		}

		::System::Boolean get_IsUpgradeAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISUPGRADEAVATAR_OFFSET))(this);
		}

		::System::UInt32 get_AvatarKeyID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARKEYID_OFFSET))(this);
		}

		::System::UInt32 get_AdventurePlayerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERID_OFFSET))(this);
		}

		::System::UInt32 get_EnhancedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ENHANCEDID_OFFSET))(this);
		}

		::System::Boolean get_IsAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISALIVE_OFFSET))(this);
		}

		::System::Boolean get_IsLeader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ISLEADER_OFFSET))(this);
		}

		::System::Void set_IsLeader(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_ISLEADER_OFFSET))(this, a1);
		}

		::RPG::GameCore::IAdventurePlayerCommonRowWrap* get_AdventurePlayerRow()
		{
			return ((::RPG::GameCore::IAdventurePlayerCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_ADVENTUREPLAYERROW_OFFSET))(this);
		}

		::RPG::GameCore::IAvatarCommonRowWrap* get_AvatarRow()
		{
			return ((::RPG::GameCore::IAvatarCommonRowWrap*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_AVATARROW_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_FULLNAME_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_LeftHPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_LEFTHPRATIO_OFFSET))(this);
		}

		::System::Void set_LeftHPRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_LEFTHPRATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_LeftSPRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_LEFTSPRATIO_OFFSET))(this);
		}

		::System::Void set_LeftSPRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_LEFTSPRATIO_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_SatietyRatio()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GET_SATIETYRATIO_OFFSET))(this);
		}

		::System::Void set_SatietyRatio(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_SET_SATIETYRATIO_OFFSET))(this, a1);
		}

		static ::RPG::Client::MemberData* Create(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::MemberData* Create_1(::RPG::AvatarSystem::IAvatar* a1, ::RPG::GameCore::FixPoint a2, ::RPG::GameCore::FixPoint a3, ::RPG::GameCore::FixPoint a4)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::AvatarSystem::IAvatar*, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::Client::MemberData* CreateSnapShot(::RPG::Client::MemberData* a1)
		{
			return ((::RPG::Client::MemberData*(*)(::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_CREATESNAPSHOT_OFFSET))(a1);
		}

		static ::RPG::Client::TeamDataRefreshMask GetRefreshMask(::RPG::Client::MemberData* a1, ::RPG::Client::MemberData* a2)
		{
			return ((::RPG::Client::TeamDataRefreshMask(*)(::RPG::Client::MemberData*, ::RPG::Client::MemberData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETREFRESHMASK_OFFSET))(a1, a2);
		}

		::RPG::GameCore::FixPoint ToPermyriadPrecision(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_TOPERMYRIADPRECISION_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint GetCurrentHP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETCURRENTHP_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint GetCurrentSP()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETCURRENTSP_OFFSET))(this);
		}

		::RPG::Client::PropertyNumberUIData* GetPropertyNumberUIData()
		{
			return ((::RPG::Client::PropertyNumberUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA_GETPROPERTYNUMBERUIDATA_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint _TestPermyriadPrecision(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_MEMBERDATA__TESTPERMYRIADPRECISION_OFFSET))(this, a1);
		}

	};
}
