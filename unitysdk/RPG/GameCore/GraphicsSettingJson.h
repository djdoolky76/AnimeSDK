#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceInfo; }
namespace RPG::GameCore { class ForceGlesDevices; }
namespace RPG::GameCore { class ForceVulkanDevices; }
namespace RPG::GameCore { class GraphicsSettingJson; }
namespace RPG::GameCore { class TempFixDevice; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_GRAPHICSSETTINGJSON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D722CE0)
#define RPG_GAMECORE_GRAPHICSSETTINGJSON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D722AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GraphicsSettingJson_TypeDefinitionIndex = 18275;

	class GraphicsSettingJson : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::DeviceInfo*>* deviceSettings; // 0x10
		::RPG::GameCore::ForceGlesDevices* forceGlesDevices; // 0x18
		::RPG::GameCore::ForceVulkanDevices* forceVulkanDevices; // 0x20
		::RPG::GameCore::TempFixDevice* tempFixDevice; // 0x28
		::System::Int32 ForceGraphicsJob; // 0x30
		::System::Int32 BackbufferColorSpace; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICSSETTINGJSON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GraphicsSettingJson* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GraphicsSettingJson*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRAPHICSSETTINGJSON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
