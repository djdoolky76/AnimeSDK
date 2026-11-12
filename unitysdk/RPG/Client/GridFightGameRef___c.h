#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MongoObjectId.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameFormation; }
namespace RPG::Client { class GridFightGameRefData; }
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDB2AEF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDB2AF30)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FAVOURSORTEDREFS_B__34_0_OFFSET UNITYSDK_OFFSET(0xDB2AF80)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FIRSTEMPTYFORMATION_B__31_0_OFFSET UNITYSDK_OFFSET(0xDB2AF60)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FORMATIONCOUNT_B__29_0_OFFSET UNITYSDK_OFFSET(0xDB2AF40)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__REPORTAPPLIEDGAMEREF_B__87_0_OFFSET UNITYSDK_OFFSET(0xDB2AFF0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__SYNC_B__66_0_OFFSET UNITYSDK_OFFSET(0xDB2AFB0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__93_0_OFFSET UNITYSDK_OFFSET(0xDB2B390)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__93_1_OFFSET UNITYSDK_OFFSET(0xDB2B470)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__92_0_OFFSET UNITYSDK_OFFSET(0xDB2B060)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__92_1_OFFSET UNITYSDK_OFFSET(0xDB2B140)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___READNECESSARYDATA_B__69_0_OFFSET UNITYSDK_OFFSET(0xDB2AFD0)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C___SYNCAPPLIEDSPOTLIGHTGUIDETRACKS_B__90_0_OFFSET UNITYSDK_OFFSET(0xDB2B000)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRef___c_TypeDefinitionIndex = 66242;

	class GridFightGameRef___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>** StaticGet___9__90_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSpotLightConfig*, ::System::UInt32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715A0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>** StaticGet___9__66_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715A8);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715B0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715B8);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715C0);
		}

		static ::System::Func_2<::RPG::Client::MongoObjectId, ::System::String*>** StaticGet___9__87_0()
		{
			return (::System::Func_2<::RPG::Client::MongoObjectId, ::System::String*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715C8);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameFormation*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715D0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>** StaticGet___9__92_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715D8);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>** StaticGet___9__92_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Int32>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715E0);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>** StaticGet___9__93_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Single>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715E8);
		}

		static ::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Boolean>** StaticGet___9__69_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightGameRefData*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x715F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_FormationCount_b__29_0(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FORMATIONCOUNT_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_FirstEmptyFormation_b__31_0(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FIRSTEMPTYFORMATION_B__31_0_OFFSET))(this, a1);
		}

		::System::Int32 _get_FavourSortedRefs_b__34_0(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__GET_FAVOURSORTEDREFS_B__34_0_OFFSET))(this, a1);
		}

		::System::Boolean _Sync_b__66_0(::RPG::Client::GridFightGameFormation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameFormation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__SYNC_B__66_0_OFFSET))(this, a1);
		}

		::System::Boolean __ReadNecessaryData_b__69_0(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___READNECESSARYDATA_B__69_0_OFFSET))(this, a1);
		}

		::System::String* _ReportAppliedGameRef_b__87_0(::RPG::Client::MongoObjectId a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::MongoObjectId))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__REPORTAPPLIEDGAMEREF_B__87_0_OFFSET))(this, a1);
		}

		::System::UInt32 __SyncAppliedSpotLightGuideTracks_b__90_0(::RPG::Client::GridFightSpotLightConfig* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::GridFightSpotLightConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___SYNCAPPLIEDSPOTLIGHTGUIDETRACKS_B__90_0_OFFSET))(this, a1);
		}

		::System::Int32 __GetAllRecommendData_b__92_0(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__92_0_OFFSET))(this, a1);
		}

		::System::Single __GetAllRecommendData_b__92_1(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLRECOMMENDDATA_B__92_1_OFFSET))(this, a1);
		}

		::System::Int32 __GetAllPortalRecommendData_b__93_0(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__93_0_OFFSET))(this, a1);
		}

		::System::Single __GetAllPortalRecommendData_b__93_1(::RPG::Client::GridFightGameRefData* a1)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::GridFightGameRefData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C___GETALLPORTALRECOMMENDDATA_B__93_1_OFFSET))(this, a1);
		}

	};
}
