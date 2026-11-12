#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightTrailLayerQuality.h"
#include "unitysdk/System/Object.h"
class HEJJDLPNKMH;
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightTraitAstropolisInfo; }
namespace RPG::Client { class GridFightTraitAstropolisTier; }
namespace RPG::GameCore { class BattleGridFightAvatarData; }
namespace RPG::GameCore { class GridFightManager; }
namespace RPG::GameCore { class GridFightTraitAstropolisConfigRow; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xDCC75B0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC52A0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMBATTLEMANAGER_OFFSET UNITYSDK_OFFSET(0xDCC65A0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMCURRENTSESSION_OFFSET UNITYSDK_OFFSET(0xDCC69D0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMGAMEREF_OFFSET UNITYSDK_OFFSET(0xDCC6C70)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMROLES_OFFSET UNITYSDK_OFFSET(0xDCC6FC0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMTEAM_OFFSET UNITYSDK_OFFSET(0xDCC1690)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GETALLTIERS_OFFSET UNITYSDK_OFFSET(0xDCC5860)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_CURRENTDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xDCC5700)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_EMPTY_OFFSET UNITYSDK_OFFSET(0xDCC5800)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_HASTHREESTAR_OFFSET UNITYSDK_OFFSET(0xDCC54B0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_ISMAXTIER_OFFSET UNITYSDK_OFFSET(0xDCC5500)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_NEXTDISPLAYVALUE_OFFSET UNITYSDK_OFFSET(0xDCC5740)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0xDCC1560)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_THREESTARCOUNT_OFFSET UNITYSDK_OFFSET(0xDCC5290)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_ISTIERACTIVE_OFFSET UNITYSDK_OFFSET(0xDCC57A0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__AVATARHASTRAIT_OFFSET UNITYSDK_OFFSET(0xDCC63D0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__EQUIPGRANTSTRAIT_OFFSET UNITYSDK_OFFSET(0xDCC6310)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__GETCONFIGROW_OFFSET UNITYSDK_OFFSET(0xDCC52B0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__GETMAXCONFIGROW_OFFSET UNITYSDK_OFFSET(0xDCC5310)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__HASTRAIT_OFFSET UNITYSDK_OFFSET(0xDCC5BF0)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__ISBATTLETRAITACTIVATED_OFFSET UNITYSDK_OFFSET(0xDCC6840)
#define RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__TRYGETNEXTTIERTHREESTARNUM_OFFSET UNITYSDK_OFFSET(0xDCC5590)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTraitAstropolisInfo_TypeDefinitionIndex = 67226;

	class GridFightTraitAstropolisInfo : public ::System::Object
	{
	public:
		::System::Boolean _IsTraitActivated; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 _ThreeStarCount_k__BackingField; // 0x14
		static ::RPG::Client::GridFightTraitAstropolisInfo** StaticGet__Empty_k__BackingField()
		{
			return (::RPG::Client::GridFightTraitAstropolisInfo**)UnitySDK::FromName("RPG.Client", "GridFightTraitAstropolisInfo")->GetStaticField(0xFA40);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_CCTOR_OFFSET))();
		}

		::System::UInt32 get_ThreeStarCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_THREESTARCOUNT_OFFSET))(this);
		}

		::RPG::GameCore::GridFightTrailLayerQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightTrailLayerQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_QUALITY_OFFSET))(this);
		}

		::System::Boolean get_HasThreeStar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_HASTHREESTAR_OFFSET))(this);
		}

		::System::Boolean get_IsMaxTier()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_ISMAXTIER_OFFSET))(this);
		}

		::System::UInt32 get_CurrentDisplayValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_CURRENTDISPLAYVALUE_OFFSET))(this);
		}

		::System::UInt32 get_NextDisplayValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_NEXTDISPLAYVALUE_OFFSET))(this);
		}

		::System::Boolean IsTierActive(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_ISTIERACTIVE_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightTraitAstropolisInfo* get_Empty()
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GET_EMPTY_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitAstropolisTier*>* GetAllTiers()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightTraitAstropolisTier*>*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_GETALLTIERS_OFFSET))();
		}

		static ::RPG::GameCore::GridFightTraitAstropolisConfigRow* _GetConfigRow(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GridFightTraitAstropolisConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__GETCONFIGROW_OFFSET))(a1);
		}

		static ::RPG::GameCore::GridFightTraitAstropolisConfigRow* _GetMaxConfigRow()
		{
			return ((::RPG::GameCore::GridFightTraitAstropolisConfigRow*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__GETMAXCONFIGROW_OFFSET))();
		}

		::System::Boolean _TryGetNextTierThreeStarNum(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__TRYGETNEXTTIERTHREESTARNUM_OFFSET))(this, a1);
		}

		static ::System::Boolean _HasTrait(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__HASTRAIT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _EquipGrantsTrait(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__EQUIPGRANTSTRAIT_OFFSET))(a1, a2);
		}

		static ::System::Boolean _AvatarHasTrait(::RPG::GameCore::BattleGridFightAvatarData* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BattleGridFightAvatarData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__AVATARHASTRAIT_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightTraitAstropolisInfo* FromBattleManager(::RPG::GameCore::GridFightManager* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::RPG::GameCore::GridFightManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMBATTLEMANAGER_OFFSET))(a1, a2);
		}

		static ::System::Boolean _IsBattleTraitActivated(::RPG::GameCore::GridFightManager* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GridFightManager*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO__ISBATTLETRAITACTIVATED_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightTraitAstropolisInfo* FromCurrentSession()
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMCURRENTSESSION_OFFSET))();
		}

		static ::RPG::Client::GridFightTraitAstropolisInfo* FromTeam(::HEJJDLPNKMH* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::HEJJDLPNKMH*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMTEAM_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::GridFightTraitAstropolisInfo* FromGameRef(::RPG::Client::GridFightGameRefData* a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::RPG::Client::GridFightGameRefData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMGAMEREF_OFFSET))(a1, a2);
		}

		static ::RPG::Client::GridFightTraitAstropolisInfo* FromRoles(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::RPG::Client::GridFightTraitAstropolisInfo*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightRole*>*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAITASTROPOLISINFO_FROMROLES_OFFSET))(a1, a2, a3);
		}

	};
}
