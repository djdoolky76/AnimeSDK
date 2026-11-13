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
namespace RPG::Client { class GridFightTrait; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1562A0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1562E0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__64_0_OFFSET UNITYSDK_OFFSET(0x1E156490)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_0_OFFSET UNITYSDK_OFFSET(0x1E1562F0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_AFFIXDATALIST_B__29_1_OFFSET UNITYSDK_OFFSET(0x1E1563B0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_BOSSINFOS_B__31_0_OFFSET UNITYSDK_OFFSET(0x1E1563C0)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__160_0_OFFSET UNITYSDK_OFFSET(0x1E156500)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_0_OFFSET UNITYSDK_OFFSET(0x1E156400)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_1_OFFSET UNITYSDK_OFFSET(0x1E156420)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_2_OFFSET UNITYSDK_OFFSET(0x1E156440)
#define RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_3_OFFSET UNITYSDK_OFFSET(0x1E156460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSettleRecord___c_TypeDefinitionIndex = 66911;

	class GridFightSettleRecord___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::NFIDNDFHJGN*, ::System::Double>** StaticGet___9__61_2()
		{
			return (::System::Func_2<::NFIDNDFHJGN*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE500);
		}

		static ::System::Func_2<::KINJHHBJNJP*, ::System::Double>** StaticGet___9__61_1()
		{
			return (::System::Func_2<::KINJHHBJNJP*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE508);
		}

		static ::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>** StaticGet___9__160_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightSeasonRole*, ::RPG::Client::GridFightRole*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE510);
		}

		static ::System::Func_2<::PLFKMENCDMM*, ::System::Double>** StaticGet___9__61_0()
		{
			return (::System::Func_2<::PLFKMENCDMM*, ::System::Double>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE518);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__29_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE520);
		}

		static ::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>** StaticGet___9__64_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightRole*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE528);
		}

		static ::System::Func_2<::LAAMIAJFOMC*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__29_0()
		{
			return (::System::Func_2<::LAAMIAJFOMC*, ::RPG::Client::GridFightMonsterAffixConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE530);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE538);
		}

		static ::System::Func_2<::AHKDPCIIELA*, ::RPG::Client::GridFightMonsterData*>** StaticGet___9__31_0()
		{
			return (::System::Func_2<::AHKDPCIIELA*, ::RPG::Client::GridFightMonsterData*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE540);
		}

		static ::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>** StaticGet___9__61_3()
		{
			return (::System::Func_2<::RPG::Client::GridFightTrait*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xE548);
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

		::System::Double __SyncDamageStatistics_b__61_0(::PLFKMENCDMM* a1)
		{
			return ((::System::Double(*)(::PVOID, ::PLFKMENCDMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_0_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__61_1(::KINJHHBJNJP* a1)
		{
			return ((::System::Double(*)(::PVOID, ::KINJHHBJNJP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_1_OFFSET))(this, a1);
		}

		::System::Double __SyncDamageStatistics_b__61_2(::NFIDNDFHJGN* a1)
		{
			return ((::System::Double(*)(::PVOID, ::NFIDNDFHJGN*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_2_OFFSET))(this, a1);
		}

		::System::Boolean __SyncDamageStatistics_b__61_3(::RPG::Client::GridFightTrait* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightTrait*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C___SYNCDAMAGESTATISTICS_B__61_3_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__64_0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GETROLESBYTRAIT_B__64_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRole* _get_Roles_b__160_0(::RPG::Client::GridFightSeasonRole* a1)
		{
			return ((::RPG::Client::GridFightRole*(*)(::PVOID, ::RPG::Client::GridFightSeasonRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSETTLERECORD___C__GET_ROLES_B__160_0_OFFSET))(this, a1);
		}

	};
}
