#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
class KINJHHBJNJP;
class LAAMIAJFOMC;
class NFIDNDFHJGN;
class PLFKMENCDMM;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class GridFightSeasonRole; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD27C850)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD27C890)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__56_0_OFFSET UNITYSDK_OFFSET(0xD27CA10)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET UNITYSDK_OFFSET(0xD27C8A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET UNITYSDK_OFFSET(0xD27C960)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET UNITYSDK_OFFSET(0xD27C970)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__149_0_OFFSET UNITYSDK_OFFSET(0xD27CA80)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_0_OFFSET UNITYSDK_OFFSET(0xD27C9B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_1_OFFSET UNITYSDK_OFFSET(0xD27C9D0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_2_OFFSET UNITYSDK_OFFSET(0xD27C9F0)

namespace RPG::Client
{
	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::LAAMIAJFOMC*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::LAAMIAJFOMC*, ::RPG::Client::GridFightMonsterAffixConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E7F0);
		}

		static ::System::Func_2<::KINJHHBJNJP*, ::System::Double>** StaticGet___9__54_1()
		{
			return (::System::Func_2<::KINJHHBJNJP*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E7F8);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__56_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E800);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E808);
		}

		static ::System::Func_2<::NFIDNDFHJGN*, ::System::Double>** StaticGet___9__54_2()
		{
			return (::System::Func_2<::NFIDNDFHJGN*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E810);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__149_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E818);
		}

		static ::System::Func_2<::PLFKMENCDMM*, ::System::Double>** StaticGet___9__54_0()
		{
			return (::System::Func_2<::PLFKMENCDMM*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E820);
		}

		static ::System::Func_2<::AHKDPCIIELA*, ::RPG::Client::GridFightMonsterData*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::AHKDPCIIELA*, ::RPG::Client::GridFightMonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E828);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x6E830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__29_0(::LAAMIAJFOMC* a1)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::LAAMIAJFOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AffixDataList_b__29_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterData* _get_BossInfos_b__31_0(::AHKDPCIIELA* a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::AHKDPCIIELA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__54_0(::PLFKMENCDMM* a1)
		{
			return ((::System::Double(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__54_1(::KINJHHBJNJP* a1)
		{
			return ((::System::Double(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_1_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__54_2(::NFIDNDFHJGN* a1)
		{
			return ((::System::Double(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__54_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__56_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__56_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__149_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__149_0_OFFSET))(this, a1);
		}

	};
}
