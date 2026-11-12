#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RealityShowBuffUpType.h"
#include "unitysdk/System/Object.h"
class KAIHLAFFGMC;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MGFFCMONLJG_AKDEDKCPELJ_OFFSET UNITYSDK_OFFSET(0xC1CBB30)
#define MGFFCMONLJG_BCFLAMODLAD_OFFSET UNITYSDK_OFFSET(0xC1CBB80)
#define MGFFCMONLJG_BKCIPAAHMKF_OFFSET UNITYSDK_OFFSET(0xC1CB640)
#define MGFFCMONLJG_CTOR_OFFSET UNITYSDK_OFFSET(0xC1CC0F0)
#define MGFFCMONLJG_DKKOBDEHBPO_OFFSET UNITYSDK_OFFSET(0xC1CB200)
#define MGFFCMONLJG_GET_BUFFTIERS_OFFSET UNITYSDK_OFFSET(0xC1CB4C0)
#define MGFFCMONLJG_GET_BUFFUPTYPE_OFFSET UNITYSDK_OFFSET(0xC1CB4A0)
#define MGFFCMONLJG_GET_FIRSTSTAGEBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xC1CB140)
#define MGFFCMONLJG_GET_FIRSTSTAGEEVENTID_OFFSET UNITYSDK_OFFSET(0xC1CB100)
#define MGFFCMONLJG_GET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xC1CB1C0)
#define MGFFCMONLJG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC1CB1A0)
#define MGFFCMONLJG_GET_ID_OFFSET UNITYSDK_OFFSET(0xC1CB0C0)
#define MGFFCMONLJG_GET_MODULEID_OFFSET UNITYSDK_OFFSET(0xC1CB0E0)
#define MGFFCMONLJG_GET_MONSTERID_OFFSET UNITYSDK_OFFSET(0xC1CB1E0)
#define MGFFCMONLJG_GET_SECONDSTAGEBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xC1CB160)
#define MGFFCMONLJG_GET_SECONDSTAGEEVENTID_OFFSET UNITYSDK_OFFSET(0xC1CB120)
#define MGFFCMONLJG_GET_STRATEGY_OFFSET UNITYSDK_OFFSET(0xC1CB480)
#define MGFFCMONLJG_GET_TITLE_OFFSET UNITYSDK_OFFSET(0xC1CB180)
#define MGFFCMONLJG_GET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC1CB460)
#define MGFFCMONLJG_KNEGHJCPIGO_OFFSET UNITYSDK_OFFSET(0xC1CB4E0)
#define MGFFCMONLJG_NNHIIOLNCDO_OFFSET UNITYSDK_OFFSET(0xC1CB290)
#define MGFFCMONLJG_PKIPKAOAMHF_OFFSET UNITYSDK_OFFSET(0xC1CBC00)
#define MGFFCMONLJG_SET_BUFFTIERS_OFFSET UNITYSDK_OFFSET(0xC1CB4D0)
#define MGFFCMONLJG_SET_BUFFUPTYPE_OFFSET UNITYSDK_OFFSET(0xC1CB4B0)
#define MGFFCMONLJG_SET_FIRSTSTAGEBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xC1CB150)
#define MGFFCMONLJG_SET_FIRSTSTAGEEVENTID_OFFSET UNITYSDK_OFFSET(0xC1CB110)
#define MGFFCMONLJG_SET_GUIDEID_OFFSET UNITYSDK_OFFSET(0xC1CB1D0)
#define MGFFCMONLJG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC1CB1B0)
#define MGFFCMONLJG_SET_ID_OFFSET UNITYSDK_OFFSET(0xC1CB0D0)
#define MGFFCMONLJG_SET_MODULEID_OFFSET UNITYSDK_OFFSET(0xC1CB0F0)
#define MGFFCMONLJG_SET_MONSTERID_OFFSET UNITYSDK_OFFSET(0xC1CB1F0)
#define MGFFCMONLJG_SET_SECONDSTAGEBATTLEAREAID_OFFSET UNITYSDK_OFFSET(0xC1CB170)
#define MGFFCMONLJG_SET_SECONDSTAGEEVENTID_OFFSET UNITYSDK_OFFSET(0xC1CB130)
#define MGFFCMONLJG_SET_STRATEGY_OFFSET UNITYSDK_OFFSET(0xC1CB490)
#define MGFFCMONLJG_SET_TITLE_OFFSET UNITYSDK_OFFSET(0xC1CB190)
#define MGFFCMONLJG_SET_TRIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC1CB470)

inline static constexpr unsigned int MGFFCMONLJG_TypeDefinitionIndex = 84850;

	class MGFFCMONLJG : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::Collections::Generic::IReadOnlyList_1<::KAIHLAFFGMC*>* _BuffTiers_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _TrialAvatarIDs_k__BackingField; // 0x20
		::RPG::Client::TextID _Title_k__BackingField; // 0x28
		::RPG::GameCore::RealityShowBuffUpType _BuffUpType_k__BackingField; // 0x38
		::System::UInt32 _FirstStageEventID_k__BackingField; // 0x3C
		::System::UInt32 _ID_k__BackingField; // 0x40
		::System::UInt32 _SecondStageEventID_k__BackingField; // 0x44
		::System::UInt32 _SecondStageBattleAreaID_k__BackingField; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _Strategy_k__BackingField; // 0x50
		::System::UInt32 _ModuleID_k__BackingField; // 0x60
		::System::UInt32 _FirstStageBattleAreaID_k__BackingField; // 0x64
		::System::UInt32 _GuideID_k__BackingField; // 0x68
		::System::UInt32 _MonsterID_k__BackingField; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ModuleID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_MODULEID_OFFSET))(this);
		}

		::System::Void set_ModuleID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_MODULEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FirstStageEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_FIRSTSTAGEEVENTID_OFFSET))(this);
		}

		::System::Void set_FirstStageEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_FIRSTSTAGEEVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SecondStageEventID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_SECONDSTAGEEVENTID_OFFSET))(this);
		}

		::System::Void set_SecondStageEventID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_SECONDSTAGEEVENTID_OFFSET))(this, a1);
		}

		::System::UInt32 get_FirstStageBattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_FIRSTSTAGEBATTLEAREAID_OFFSET))(this);
		}

		::System::Void set_FirstStageBattleAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_FIRSTSTAGEBATTLEAREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SecondStageBattleAreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_SECONDSTAGEBATTLEAREAID_OFFSET))(this);
		}

		::System::Void set_SecondStageBattleAreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_SECONDSTAGEBATTLEAREAID_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_TITLE_OFFSET))(this);
		}

		::System::Void set_Title(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_TITLE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::UInt32 get_GuideID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_GUIDEID_OFFSET))(this);
		}

		::System::Void set_GuideID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_GUIDEID_OFFSET))(this, a1);
		}

		::System::UInt32 get_MonsterID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_MONSTERID_OFFSET))(this);
		}

		::System::Void set_MonsterID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_MONSTERID_OFFSET))(this, a1);
		}

		::System::UInt32 DKKOBDEHBPO(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGFFCMONLJG_DKKOBDEHBPO_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_TrialAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_TRIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_TrialAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_TRIALAVATARIDS_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Strategy()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_STRATEGY_OFFSET))(this);
		}

		::System::Void set_Strategy(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_STRATEGY_OFFSET))(this, a1);
		}

		::RPG::GameCore::RealityShowBuffUpType get_BuffUpType()
		{
			return ((::RPG::GameCore::RealityShowBuffUpType(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_BUFFUPTYPE_OFFSET))(this);
		}

		::System::Void set_BuffUpType(::RPG::GameCore::RealityShowBuffUpType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RealityShowBuffUpType))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_BUFFUPTYPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::KAIHLAFFGMC*>* get_BuffTiers()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::KAIHLAFFGMC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_GET_BUFFTIERS_OFFSET))(this);
		}

		::System::Void set_BuffTiers(::System::Collections::Generic::IReadOnlyList_1<::KAIHLAFFGMC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KAIHLAFFGMC*>*))((::PBYTE)hIl2Cpp + MGFFCMONLJG_SET_BUFFTIERS_OFFSET))(this, a1);
		}

		::System::UInt32 KNEGHJCPIGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_KNEGHJCPIGO_OFFSET))(this);
		}

		::System::UInt32 BKCIPAAHMKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGFFCMONLJG_BKCIPAAHMKF_OFFSET))(this);
		}

		::System::UInt32 NNHIIOLNCDO(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGFFCMONLJG_NNHIIOLNCDO_OFFSET))(this, a1);
		}

		::System::UInt32 AKDEDKCPELJ(::System::Boolean a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGFFCMONLJG_AKDEDKCPELJ_OFFSET))(this, a1);
		}

		::System::Single BCFLAMODLAD(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_BCFLAMODLAD_OFFSET))(this, a1);
		}

		::System::UInt32 PKIPKAOAMHF(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGFFCMONLJG_PKIPKAOAMHF_OFFSET))(this, a1);
		}

	};
