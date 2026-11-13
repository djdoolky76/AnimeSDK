#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraHornsPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraMaterialType.h"
#include "unitysdk/RPG/GameCore/ChimeraTailPartType.h"
#include "unitysdk/RPG/GameCore/ChimeraWingsPartType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class ChimeraDuelChimeraData; }
namespace RPG::Client { class ChimeraDuelChimeraLevelInfo_LevelUpRule; }
namespace RPG::GameCore { class ChimeraDuelChimeraRow; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERADUELCHIMERADATA_CANUPGRADEANY_OFFSET UNITYSDK_OFFSET(0x1DFEA980)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEA940)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GETDEFAULTARCHIVEDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1DFEB360)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GETDEFAULTDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1DFEB010)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GETLEVELUPRULE_OFFSET UNITYSDK_OFFSET(0x1DFEAE90)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_BASEATTACK_OFFSET UNITYSDK_OFFSET(0x1DFEA2F0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_BASEHP_OFFSET UNITYSDK_OFFSET(0x1DFEA340)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_BODYICON_OFFSET UNITYSDK_OFFSET(0x1DFEA3E0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_EMOJIPATH_OFFSET UNITYSDK_OFFSET(0x1DFEA430)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_EYEPARAM_OFFSET UNITYSDK_OFFSET(0x1DFEA610)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_HEADICON_OFFSET UNITYSDK_OFFSET(0x1DFEA390)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DFE5940)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_ISCYRENERELATED_OFFSET UNITYSDK_OFFSET(0x1DFEA720)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELBODY_OFFSET UNITYSDK_OFFSET(0x1DFEA480)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELHORN_OFFSET UNITYSDK_OFFSET(0x1DFEA4D0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELITEMMATOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1DFEA5C0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELTAIL_OFFSET UNITYSDK_OFFSET(0x1DFEA570)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELWING_OFFSET UNITYSDK_OFFSET(0x1DFEA520)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DFEA230)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_PRICE_OFFSET UNITYSDK_OFFSET(0x1DFEA2A0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0x1DFE58F0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_WWISEAUDIOGROUPNAME_OFFSET UNITYSDK_OFFSET(0x1DFEA660)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_WWISEAUDIOSWITCHNAME_OFFSET UNITYSDK_OFFSET(0x1DFEA6B0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_GET__ROW_OFFSET UNITYSDK_OFFSET(0x1DFEA220)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_HASMAXRARITY_OFFSET UNITYSDK_OFFSET(0x1DFEAD40)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_ISCOREFLAMEVESSEL_OFFSET UNITYSDK_OFFSET(0x1DFEABE0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_MAYBEUPGRADEDBY_OFFSET UNITYSDK_OFFSET(0x1DFEAAF0)
#define RPG_CLIENT_CHIMERADUELCHIMERADATA_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1DFEA8C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraDuelChimeraData_TypeDefinitionIndex = 64778;

	class ChimeraDuelChimeraData : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelChimeraRow* __Row_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::ChimeraDuelChimeraRow* get__Row()
		{
			return ((::RPG::GameCore::ChimeraDuelChimeraRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET__ROW_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_NAME_OFFSET))(this);
		}

		::System::UInt32 get_Price()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_PRICE_OFFSET))(this);
		}

		::System::UInt32 get_Rarity()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_RARITY_OFFSET))(this);
		}

		::System::Int32 get_BaseAttack()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_BASEATTACK_OFFSET))(this);
		}

		::System::Int32 get_BaseHp()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_BASEHP_OFFSET))(this);
		}

		::System::String* get_HeadIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_HEADICON_OFFSET))(this);
		}

		::System::String* get_BodyIcon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_BODYICON_OFFSET))(this);
		}

		::System::String* get_EmojiPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_EMOJIPATH_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraMaterialType get_ModelBody()
		{
			return ((::RPG::GameCore::ChimeraMaterialType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELBODY_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraHornsPartType get_ModelHorn()
		{
			return ((::RPG::GameCore::ChimeraHornsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELHORN_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraWingsPartType get_ModelWing()
		{
			return ((::RPG::GameCore::ChimeraWingsPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELWING_OFFSET))(this);
		}

		::RPG::GameCore::ChimeraTailPartType get_ModelTail()
		{
			return ((::RPG::GameCore::ChimeraTailPartType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELTAIL_OFFSET))(this);
		}

		::System::String* get_ModelItemMatOverride()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_MODELITEMMATOVERRIDE_OFFSET))(this);
		}

		::System::Int32 get_EyeParam()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_EYEPARAM_OFFSET))(this);
		}

		::System::String* get_WWiseAudioGroupName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_WWISEAUDIOGROUPNAME_OFFSET))(this);
		}

		::System::String* get_WWiseAudioSwitchName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_WWISEAUDIOSWITCHNAME_OFFSET))(this);
		}

		::System::Boolean get_IsCyreneRelated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GET_ISCYRENERELATED_OFFSET))(this);
		}

		static ::RPG::Client::ChimeraDuelChimeraData* TryCreate(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChimeraDuelChimeraData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_TRYCREATE_OFFSET))(a1);
		}

		::System::Boolean CanUpgradeAny()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_CANUPGRADEANY_OFFSET))(this);
		}

		::System::Boolean MayBeUpgradedBy(::RPG::Client::ChimeraDuelChimeraData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChimeraDuelChimeraData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_MAYBEUPGRADEDBY_OFFSET))(this, a1);
		}

		::System::Boolean IsCoreflameVessel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_ISCOREFLAMEVESSEL_OFFSET))(this);
		}

		::System::Boolean HasMaxRarity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_HASMAXRARITY_OFFSET))(this);
		}

		::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule* GetLevelUpRule()
		{
			return ((::RPG::Client::ChimeraDuelChimeraLevelInfo_LevelUpRule*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GETLEVELUPRULE_OFFSET))(this);
		}

		::System::String* GetDefaultDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GETDEFAULTDESCRIPTION_OFFSET))(this);
		}

		::System::String* GetDefaultArchiveDescription()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERADUELCHIMERADATA_GETDEFAULTARCHIVEDESCRIPTION_OFFSET))(this);
		}

	};
}
