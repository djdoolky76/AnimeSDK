#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class GrowthTargetRelicRecommender; }

#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKAVATARGROWTHFINISHED_OFFSET UNITYSDK_OFFSET(0xDD16E50)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETINCLUDEALLTRACETREE_OFFSET UNITYSDK_OFFSET(0xDD167F0)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSETTINGHASSEEN_OFFSET UNITYSDK_OFFSET(0xDD16F00)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSHOWRELICRECOMMENDATIONMARK_OFFSET UNITYSDK_OFFSET(0xDD16900)
#define RPG_CLIENT_GROWTHTARGETHELPER_CHECKHASGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xDD16620)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xDD166C0)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETPRERELEASEAVATAR_OFFSET UNITYSDK_OFFSET(0xDD16D50)
#define RPG_CLIENT_GROWTHTARGETHELPER_GETRELICRECOMMENDER_OFFSET UNITYSDK_OFFSET(0xDD16C90)
#define RPG_CLIENT_GROWTHTARGETHELPER_MARKGROWTHTARGETSETTINGHASSEEN_OFFSET UNITYSDK_OFFSET(0xDD16F50)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xDD16790)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETINCLUDEALLTRACETREE_OFFSET UNITYSDK_OFFSET(0xDD16C30)
#define RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGET_OFFSET UNITYSDK_OFFSET(0xDD16A20)

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthTargetHelper_TypeDefinitionIndex = 67526;

	class GrowthTargetHelper : public ::System::Object
	{
	public:
		static ::System::Boolean CheckHasGrowthTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKHASGROWTHTARGET_OFFSET))();
		}

		static ::System::UInt32 GetGrowthTargetAvatarID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETAVATARID_OFFSET))();
		}

		static ::System::Void SetGrowthTargetAvatarID(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETAVATARID_OFFSET))(a1, a2);
		}

		static ::System::Void SetGrowthTargetIncludeAllTraceTree(::System::Boolean a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGETINCLUDEALLTRACETREE_OFFSET))(a1, a2);
		}

		static ::System::Void SetGrowthTarget(::System::UInt32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_SETGROWTHTARGET_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean CheckGrowthTargetIncludeAllTraceTree()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETINCLUDEALLTRACETREE_OFFSET))();
		}

		static ::System::Boolean CheckGrowthTargetShowRelicRecommendationMark()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSHOWRELICRECOMMENDATIONMARK_OFFSET))();
		}

		static ::RPG::Client::GrowthTargetRelicRecommender* GetRelicRecommender(::System::UInt32 a1)
		{
			return ((::RPG::Client::GrowthTargetRelicRecommender*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETRELICRECOMMENDER_OFFSET))(a1);
		}

		static ::RPG::AvatarSystem::IAvatar* GetGrowthTargetPreReleaseAvatar()
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_GETGROWTHTARGETPRERELEASEAVATAR_OFFSET))();
		}

		static ::System::Boolean CheckAvatarGrowthFinished(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKAVATARGROWTHFINISHED_OFFSET))(a1);
		}

		static ::System::Boolean CheckGrowthTargetSettingHasSeen()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_CHECKGROWTHTARGETSETTINGHASSEEN_OFFSET))();
		}

		static ::System::Void MarkGrowthTargetSettingHasSeen()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GROWTHTARGETHELPER_MARKGROWTHTARGETSETTINGHASSEEN_OFFSET))();
		}

	};
}
