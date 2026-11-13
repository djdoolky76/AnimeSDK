#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatStageFirstType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::DiceCombat { class DiceCombatV2OpponentData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C536490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C53C410)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANNEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C53C3D0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_FIRSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C53C390)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_GAMEGROUNDDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C53C490)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C53C2A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAIGROUPID_OFFSET UNITYSDK_OFFSET(0x1C53C370)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C53C330)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x1C53C350)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x1C53C310)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x1C53C2F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C53C3B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARRARE_OFFSET UNITYSDK_OFFSET(0x1C53C3F0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_STAGEID_OFFSET UNITYSDK_OFFSET(0x1C53C2B0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_TACTICSIDS_OFFSET UNITYSDK_OFFSET(0x1C53C430)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UI3DLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C53C470)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C53C450)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANDAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C53C420)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANNEDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C53C3E0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_FIRSTTYPE_OFFSET UNITYSDK_OFFSET(0x1C53C3A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_GAMEGROUNDDECOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C53C4A0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAIGROUPID_OFFSET UNITYSDK_OFFSET(0x1C53C380)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARIDS_OFFSET UNITYSDK_OFFSET(0x1C53C340)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARLEVEL_OFFSET UNITYSDK_OFFSET(0x1C53C360)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTDATA_OFFSET UNITYSDK_OFFSET(0x1C53C320)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTID_OFFSET UNITYSDK_OFFSET(0x1C53C300)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1C53C3C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARRARE_OFFSET UNITYSDK_OFFSET(0x1C53C400)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_TACTICSIDS_OFFSET UNITYSDK_OFFSET(0x1C53C440)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UI3DLOGOIMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1C53C480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UNLOCKSUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x1C53C460)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatV2Stage_TypeDefinitionIndex = 78498;

	class DiceCombatV2Stage : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* _BannedAvatarList_k__BackingField; // 0x10
		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* _OpponentData_k__BackingField; // 0x18
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _TacticsIDs_k__BackingField; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _BandAvatarIDs_k__BackingField; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* _OpponentAvatarIDs_k__BackingField; // 0x30
		::System::String* _UI3DLogoImagePath_k__BackingField; // 0x38
		::Il2CppArray<::System::UInt32>* _RecommendAvatarList_k__BackingField; // 0x40
		::System::String* _GameGroundDecoImagePath_k__BackingField; // 0x48
		::System::UInt32 _OpponentID_k__BackingField; // 0x50
		::System::UInt32 _RecommendAvatarRare_k__BackingField; // 0x54
		::RPG::GameCore::DiceCombatStageFirstType _FirstType_k__BackingField; // 0x58
		::System::UInt32 _OpponentAIGroupID_k__BackingField; // 0x5C
		::System::UInt32 _UnlockSubMissionID_k__BackingField; // 0x60
		::System::UInt32 _OpponentAvatarLevel_k__BackingField; // 0x64
		::System::UInt32 _ID_k__BackingField; // 0x68
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_StageID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_STAGEID_OFFSET))(this);
		}

		::System::UInt32 get_OpponentID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTID_OFFSET))(this);
		}

		::System::Void set_OpponentID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTID_OFFSET))(this, a1);
		}

		::RPG::Client::DiceCombat::DiceCombatV2OpponentData* get_OpponentData()
		{
			return ((::RPG::Client::DiceCombat::DiceCombatV2OpponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTDATA_OFFSET))(this);
		}

		::System::Void set_OpponentData(::RPG::Client::DiceCombat::DiceCombatV2OpponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::DiceCombat::DiceCombatV2OpponentData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_OpponentAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARIDS_OFFSET))(this);
		}

		::System::Void set_OpponentAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_OpponentAvatarLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAVATARLEVEL_OFFSET))(this);
		}

		::System::Void set_OpponentAvatarLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAVATARLEVEL_OFFSET))(this, a1);
		}

		::System::UInt32 get_OpponentAIGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_OPPONENTAIGROUPID_OFFSET))(this);
		}

		::System::Void set_OpponentAIGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_OPPONENTAIGROUPID_OFFSET))(this, a1);
		}

		::RPG::GameCore::DiceCombatStageFirstType get_FirstType()
		{
			return ((::RPG::GameCore::DiceCombatStageFirstType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_FIRSTTYPE_OFFSET))(this);
		}

		::System::Void set_FirstType(::RPG::GameCore::DiceCombatStageFirstType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatStageFirstType))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_FIRSTTYPE_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_RecommendAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARLIST_OFFSET))(this);
		}

		::System::Void set_RecommendAvatarList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARLIST_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* get_BannedAvatarList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANNEDAVATARLIST_OFFSET))(this);
		}

		::System::Void set_BannedAvatarList(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANNEDAVATARLIST_OFFSET))(this, a1);
		}

		::System::UInt32 get_RecommendAvatarRare()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_RECOMMENDAVATARRARE_OFFSET))(this);
		}

		::System::Void set_RecommendAvatarRare(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_RECOMMENDAVATARRARE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_BandAvatarIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_BANDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_BandAvatarIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_BANDAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* get_TacticsIDs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_TACTICSIDS_OFFSET))(this);
		}

		::System::Void set_TacticsIDs(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_TACTICSIDS_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockSubMissionID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UNLOCKSUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_UnlockSubMissionID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UNLOCKSUBMISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_UI3DLogoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_UI3DLOGOIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_UI3DLogoImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_UI3DLOGOIMAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_GameGroundDecoImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_GET_GAMEGROUNDDECOIMAGEPATH_OFFSET))(this);
		}

		::System::Void set_GameGroundDecoImagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATV2STAGE_SET_GAMEGROUNDDECOIMAGEPATH_OFFSET))(this, a1);
		}

	};
}
