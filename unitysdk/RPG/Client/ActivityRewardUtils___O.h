#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ActivityRewardUtils_MultiIDCheckerFunc; }
namespace RPG::Client { class ActivityRewardUtils_QuestCheckerFunc; }

namespace RPG::Client
{
	class ActivityRewardUtils___O : public ::System::Object
	{
	public:
		static ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc** StaticGet__3____IsQuestRewardTaken()
		{
			return (::RPG::Client::ActivityRewardUtils_QuestCheckerFunc**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x3B280);
		}

		static ::RPG::Client::ActivityRewardUtils_QuestCheckerFunc** StaticGet__1____IsQuestShowRedDot()
		{
			return (::RPG::Client::ActivityRewardUtils_QuestCheckerFunc**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x3B288);
		}

		static ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc** StaticGet__0____CheckMultiIDOr()
		{
			return (::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x3B290);
		}

		static ::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc** StaticGet__2____CheckMultiIDAnd()
		{
			return (::RPG::Client::ActivityRewardUtils_MultiIDCheckerFunc**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x3B298);
		}

	};
}
