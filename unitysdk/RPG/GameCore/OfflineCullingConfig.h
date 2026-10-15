#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OfflineCullingConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_OFFLINECULLINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DF6F0)
#define RPG_GAMECORE_OFFLINECULLINGCONFIG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D8DF700)
#define RPG_GAMECORE_OFFLINECULLINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8DF530)

namespace RPG::GameCore
{
	class OfflineCullingConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* CompletelyCullingThreshold; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Single>* PartialCullingThreshold; // 0x18
		::System::Single LightVisibilityThreshold; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OfflineCullingConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OfflineCullingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::OfflineCullingConfig* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::OfflineCullingConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OFFLINECULLINGCONFIG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

	};
}
