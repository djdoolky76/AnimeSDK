#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UIAdaptiveDeviceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class UIAdaptiveConfig; }
namespace RPG::GameCore { class UIOperationConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class SortedList_2; }

#define RPG_CLIENT_UIADAPTER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A0E95E0)
#define RPG_CLIENT_UIADAPTER_DORELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0E9350)
#define RPG_CLIENT_UIADAPTER_GETDEFAULTUIOPERATIONCONFIGS_OFFSET UNITYSDK_OFFSET(0x1A0E9410)
#define RPG_CLIENT_UIADAPTER_LOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0E8CF0)
#define RPG_CLIENT_UIADAPTER_RELOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0E9270)
#define RPG_CLIENT_UIADAPTER_UNLOADCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0E9200)
#define RPG_CLIENT_UIADAPTER__GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0E9470)
#define RPG_CLIENT_UIADAPTER__LOADADAPTIVECONFIG_OFFSET UNITYSDK_OFFSET(0x1A0E90A0)

namespace RPG::Client
{
	inline static constexpr unsigned int UIAdapter_TypeDefinitionIndex = 61358;

	class UIAdapter : public ::System::Object
	{
	public:
		static ::RPG::GameCore::UIOperationConfig** StaticGet__DefaultUIOperationConfig()
		{
			return (::RPG::GameCore::UIOperationConfig**)UnitySDK::FromName("RPG.Client", "UIAdapter")->GetStaticField(0x40820);
		}

		static ::System::Collections::Generic::SortedList_2<::RPG::GameCore::UIAdaptiveDeviceType, ::System::String*>** StaticGet__AdaptiveConfigPaths()
		{
			return (::System::Collections::Generic::SortedList_2<::RPG::GameCore::UIAdaptiveDeviceType, ::System::String*>**)UnitySDK::FromName("RPG.Client", "UIAdapter")->GetStaticField(0x40828);
		}

		static ::RPG::GameCore::UIAdaptiveConfig** StaticGet__AdaptiveConfig()
		{
			return (::RPG::GameCore::UIAdaptiveConfig**)UnitySDK::FromName("RPG.Client", "UIAdapter")->GetStaticField(0x40830);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::UIOperationConfig*>** StaticGet__PrefabUIOperationConfigDict()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::UIOperationConfig*>**)UnitySDK::FromName("RPG.Client", "UIAdapter")->GetStaticField(0x40838);
		}

		static ::System::String** StaticGet__AdaptiveConfigPath()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "UIAdapter")->GetStaticField(0x40840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_CCTOR_OFFSET))();
		}

		static ::System::Void LoadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_LOADCONFIG_OFFSET))();
		}

		static ::System::Void UnloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_UNLOADCONFIG_OFFSET))();
		}

		static ::System::Void ReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_RELOADCONFIG_OFFSET))();
		}

		static ::System::Void DoReloadConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_DORELOADCONFIG_OFFSET))();
		}

		static ::RPG::GameCore::UIOperationConfig* GetDefaultUIOperationConfigs()
		{
			return ((::RPG::GameCore::UIOperationConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER_GETDEFAULTUIOPERATIONCONFIGS_OFFSET))();
		}

		static ::RPG::GameCore::UIAdaptiveConfig* _LoadAdaptiveConfig()
		{
			return ((::RPG::GameCore::UIAdaptiveConfig*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER__LOADADAPTIVECONFIG_OFFSET))();
		}

		static ::RPG::GameCore::UIOperationConfig* _GetOperationConfig(::RPG::GameCore::UIAdaptiveConfig* a1, ::System::String* a2)
		{
			return ((::RPG::GameCore::UIOperationConfig*(*)(::RPG::GameCore::UIAdaptiveConfig*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIADAPTER__GETOPERATIONCONFIG_OFFSET))(a1, a2);
		}

	};
}
