#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityLocalLegendFriendLineupRecommendation; }
namespace RPG::Client { class ActivityLocalLegendLevelData; }
namespace RPG::Client { class ActivityLocalLegendStatisticsLineupRecommendation; }
namespace RPG::Client { class MonsterData; }
namespace RPG::Client { class StarFightRedDotFilter; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0xCE76760)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATEFRIENDRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xCE76120)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATESTATISTICSRECOMMENDATION_OFFSET UNITYSDK_OFFSET(0xCE760D0)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GETMONSTERDATALIST_OFFSET UNITYSDK_OFFSET(0xCE76170)
#define RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GET_NATIVEFILTER_OFFSET UNITYSDK_OFFSET(0xCE765D0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityLocalLegendUtils_TypeDefinitionIndex = 62968;

	class ActivityLocalLegendUtils : public ::System::Object
	{
	public:
		static ::RPG::Client::StarFightRedDotFilter** StaticGet__NativeFilter()
		{
			return (::RPG::Client::StarFightRedDotFilter**)UnitySDK::FromName("RPG.Client", "ActivityLocalLegendUtils")->GetStaticField(0x2A550);
		}

		static ::System::UInt32* StaticGet_REWARD_ID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "ActivityLocalLegendUtils")->GetStaticField(0x88D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CCTOR_OFFSET))();
		}

		static ::RPG::Client::ActivityLocalLegendStatisticsLineupRecommendation* CreateStatisticsRecommendation(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendStatisticsLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATESTATISTICSRECOMMENDATION_OFFSET))(a1);
		}

		static ::RPG::Client::ActivityLocalLegendFriendLineupRecommendation* CreateFriendRecommendation(::RPG::Client::ActivityLocalLegendLevelData* a1)
		{
			return ((::RPG::Client::ActivityLocalLegendFriendLineupRecommendation*(*)(::RPG::Client::ActivityLocalLegendLevelData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_CREATEFRIENDRECOMMENDATION_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsterDataList(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GETMONSTERDATALIST_OFFSET))(a1);
		}

		static ::RPG::Client::StarFightRedDotFilter* get_NativeFilter()
		{
			return ((::RPG::Client::StarFightRedDotFilter*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYLOCALLEGENDUTILS_GET_NATIVEFILTER_OFFSET))();
		}

	};
}
