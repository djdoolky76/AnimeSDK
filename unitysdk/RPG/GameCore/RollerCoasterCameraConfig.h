#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterBaseCamera; }
namespace RPG::GameCore { class RollerCoasterCameraConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROLLERCOASTERCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC59C70)
#define RPG_GAMECORE_ROLLERCOASTERCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC59B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterCameraConfig_TypeDefinitionIndex = 16435;

	class RollerCoasterCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RollerCoasterBaseCamera*>* CameraConfigs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
