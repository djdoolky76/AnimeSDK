#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FKFOIDMNDFG;
class GPEPGKCPBPB;
namespace Proto { class ItemList; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ItemDisplayData; }
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace RPG::Client { class RogueMagicSettleData; }
namespace RPG::Client { class RogueMiracleInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1CB18E40)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB18C00)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB18CD0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0x1CB1A880)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1CB1A8A0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB1A820)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET UNITYSDK_OFFSET(0x1CB1A760)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CB1A780)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1CB1A840)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0x1CB1A7E0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1CB1A7A0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0x1CB1A7C0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB1A860)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0x1CB1A8C0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1CB1A900)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB1A800)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0x1CB1A920)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x1CB1A8E0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET UNITYSDK_OFFSET(0x1CB1A890)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET UNITYSDK_OFFSET(0x1CB1A8B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB1A830)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET UNITYSDK_OFFSET(0x1CB1A770)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET UNITYSDK_OFFSET(0x1CB1A790)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET UNITYSDK_OFFSET(0x1CB1A850)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0x1CB1A7F0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET UNITYSDK_OFFSET(0x1CB1A7B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET UNITYSDK_OFFSET(0x1CB1A7D0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB1A870)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET UNITYSDK_OFFSET(0x1CB1A8D0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET UNITYSDK_OFFSET(0x1CB1A910)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB1A810)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET UNITYSDK_OFFSET(0x1CB1A930)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET UNITYSDK_OFFSET(0x1CB1A8F0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET UNITYSDK_OFFSET(0x1CB1A3B0)
#define RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET UNITYSDK_OFFSET(0x1CB1A410)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueMagicSettleData_TypeDefinitionIndex = 69341;

	class RogueMagicSettleData : public ::System::Object
	{
	public:
		::RPG::Client::RogueMiracleInfo* _MiracleInfo_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* _LineupAvatars_k__BackingField; // 0x18
		::RPG::Client::RogueMagicScepterInfo* _ScepterInfo_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ItemDisplayData*>* FirstRewardItems; // 0x28
		::System::UInt32 _LeftExtraRoundCount_k__BackingField; // 0x30
		::System::UInt32 _AreaID_k__BackingField; // 0x34
		::System::UInt32 _RogueCoinNum_k__BackingField; // 0x38
		::System::UInt32 _AddedTalentCoin_k__BackingField; // 0x3C
		::System::UInt32 _AllRoomCount_k__BackingField; // 0x40
		::System::UInt32 _PassedRoomCount_k__BackingField; // 0x44
		::System::UInt32 _AddedRogueScore_k__BackingField; // 0x48
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID _LastLayerNumText_k__BackingField; // 0x50
		::System::UInt32 _DiffCompLevel_k__BackingField; // 0x60
		::System::Boolean _IsExtraRoundAvailable_k__BackingField; // 0x64
		::System::Boolean _IsWin_k__BackingField; // 0x65
		::System::Boolean _IsOptionalLayerPassed_k__BackingField; // 0x66
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_DISPOSE_OFFSET))(this);
		}

		static ::RPG::Client::RogueMagicSettleData* Create(::FKFOIDMNDFG* a1, ::Proto::ItemList* a2)
		{
			return ((::RPG::Client::RogueMagicSettleData*(*)(::FKFOIDMNDFG*, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_CREATE_OFFSET))(a1, a2);
		}

		static ::System::Boolean _CheckIsLayerActivated(::GPEPGKCPBPB* a1)
		{
			return ((::System::Boolean(*)(::GPEPGKCPBPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISLAYERACTIVATED_OFFSET))(a1);
		}

		static ::System::Boolean _CheckIsOptionalLayerPassed(::GPEPGKCPBPB* a1)
		{
			return ((::System::Boolean(*)(::GPEPGKCPBPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA__CHECKISOPTIONALLAYERPASSED_OFFSET))(a1);
		}

		::System::UInt32 get_AreaID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_AREAID_OFFSET))(this);
		}

		::System::Void set_AreaID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_AREAID_OFFSET))(this, a1);
		}

		::System::UInt32 get_DiffCompLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_DIFFCOMPLEVEL_OFFSET))(this);
		}

		::System::Void set_DiffCompLevel(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_DIFFCOMPLEVEL_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISWIN_OFFSET))(this);
		}

		::System::Void set_IsWin(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISWIN_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_LastLayerNumText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LASTLAYERNUMTEXT_OFFSET))(this);
		}

		::System::Void set_LastLayerNumText(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LASTLAYERNUMTEXT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOptionalLayerPassed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISOPTIONALLAYERPASSED_OFFSET))(this);
		}

		::System::Void set_IsOptionalLayerPassed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISOPTIONALLAYERPASSED_OFFSET))(this, a1);
		}

		::System::UInt32 get_PassedRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_PASSEDROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_PassedRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_PASSEDROOMCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllRoomCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ALLROOMCOUNT_OFFSET))(this);
		}

		::System::Void set_AllRoomCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ALLROOMCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsExtraRoundAvailable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ISEXTRAROUNDAVAILABLE_OFFSET))(this);
		}

		::System::Void set_IsExtraRoundAvailable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ISEXTRAROUNDAVAILABLE_OFFSET))(this, a1);
		}

		::System::UInt32 get_LeftExtraRoundCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LEFTEXTRAROUNDCOUNT_OFFSET))(this);
		}

		::System::Void set_LeftExtraRoundCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LEFTEXTRAROUNDCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedRogueScore()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDROGUESCORE_OFFSET))(this);
		}

		::System::Void set_AddedRogueScore(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDROGUESCORE_OFFSET))(this, a1);
		}

		::System::UInt32 get_AddedTalentCoin()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ADDEDTALENTCOIN_OFFSET))(this);
		}

		::System::Void set_AddedTalentCoin(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ADDEDTALENTCOIN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* get_LineupAvatars()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_LINEUPAVATARS_OFFSET))(this);
		}

		::System::Void set_LineupAvatars(::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_LINEUPAVATARS_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMagicScepterInfo* get_ScepterInfo()
		{
			return ((::RPG::Client::RogueMagicScepterInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_SCEPTERINFO_OFFSET))(this);
		}

		::System::Void set_ScepterInfo(::RPG::Client::RogueMagicScepterInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMagicScepterInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_SCEPTERINFO_OFFSET))(this, a1);
		}

		::RPG::Client::RogueMiracleInfo* get_MiracleInfo()
		{
			return ((::RPG::Client::RogueMiracleInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_MIRACLEINFO_OFFSET))(this);
		}

		::System::Void set_MiracleInfo(::RPG::Client::RogueMiracleInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RogueMiracleInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_MIRACLEINFO_OFFSET))(this, a1);
		}

		::System::UInt32 get_RogueCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_GET_ROGUECOINNUM_OFFSET))(this);
		}

		::System::Void set_RogueCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEMAGICSETTLEDATA_SET_ROGUECOINNUM_OFFSET))(this, a1);
		}

	};
}
