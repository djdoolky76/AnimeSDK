#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceModelInfo; }
namespace RPG::GameCore { class ForceGlesDevices; }
namespace RPG::GameCore { class GraphicDeviceInfo; }

#define RPG_GAMECORE_FORCEGLESDEVICES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BB620)
#define RPG_GAMECORE_FORCEGLESDEVICES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BB4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ForceGlesDevices_TypeDefinitionIndex = 18272;

	class ForceGlesDevices : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DeviceModelInfo*>* DeviceModelList; // 0x10
		::Il2CppArray<::RPG::GameCore::GraphicDeviceInfo*>* GraphicDeviceList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEGLESDEVICES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ForceGlesDevices* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ForceGlesDevices*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FORCEGLESDEVICES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
