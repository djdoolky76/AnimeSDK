#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAAMIAJFOMC;
class LHNCMINFONJ;
namespace RPG::Client { class GridFightMonsterAffixConfig; }
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightStageNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTSTAGE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC96220)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C_CTOR_OFFSET UNITYSDK_OFFSET(0xDC96260)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__107_0_OFFSET UNITYSDK_OFFSET(0xDC963B0)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__107_1_OFFSET UNITYSDK_OFFSET(0xDC96470)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__109_0_OFFSET UNITYSDK_OFFSET(0xDC96480)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__109_1_OFFSET UNITYSDK_OFFSET(0xDC96620)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__91_0_OFFSET UNITYSDK_OFFSET(0xDC96270)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__93_0_OFFSET UNITYSDK_OFFSET(0xDC96350)
#define RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__97_0_OFFSET UNITYSDK_OFFSET(0xDC96390)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightStage___c_TypeDefinitionIndex = 66994;

	class GridFightStage___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__93_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE20);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>** StaticGet___9__109_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterCampConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE28);
		}

		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__97_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE30);
		}

		static ::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>** StaticGet___9__107_1()
		{
			return (::System::Func_2<::RPG::Client::GridFightMonsterAffixConfig*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE38);
		}

		static ::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>** StaticGet___9__91_0()
		{
			return (::System::Func_2<::RPG::Client::GridFightStageNode*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE40);
		}

		static ::System::Func_2<::LHNCMINFONJ*, ::RPG::Client::GridFightMonsterCampConfig*>** StaticGet___9__109_0()
		{
			return (::System::Func_2<::LHNCMINFONJ*, ::RPG::Client::GridFightMonsterCampConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE48);
		}

		static ::System::Func_2<::LAAMIAJFOMC*, ::RPG::Client::GridFightMonsterAffixConfig*>** StaticGet___9__107_0()
		{
			return (::System::Func_2<::LAAMIAJFOMC*, ::RPG::Client::GridFightMonsterAffixConfig*>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE50);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0xEE58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_LatestBatteNode_b__91_0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTBATTENODE_B__91_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_LatestMonsterNode_b__93_0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_LATESTMONSTERNODE_B__93_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_Progress_b__97_0(::RPG::Client::GridFightStageNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightStageNode*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_PROGRESS_B__97_0_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterAffixConfig* _get_AffixDataList_b__107_0(::LAAMIAJFOMC* a1)
		{
			return ((::RPG::Client::GridFightMonsterAffixConfig*(*)(::PVOID, ::LAAMIAJFOMC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__107_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_AffixDataList_b__107_1(::RPG::Client::GridFightMonsterAffixConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_AFFIXDATALIST_B__107_1_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightMonsterCampConfig* _get_CampDataList_b__109_0(::LHNCMINFONJ* a1)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::PVOID, ::LHNCMINFONJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__109_0_OFFSET))(this, a1);
		}

		::System::Boolean _get_CampDataList_b__109_1(::RPG::Client::GridFightMonsterCampConfig* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightMonsterCampConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSTAGE___C__GET_CAMPDATALIST_B__109_1_OFFSET))(this, a1);
		}

	};
}
