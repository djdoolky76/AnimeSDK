#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraState.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraNormalConfig; }
namespace RPG::GameCore { class VCameraStateAdditiveNormalConfig; }

#define RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FB90)
#define RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7D900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraStateAdditiveNormalConfig_TypeDefinitionIndex = 16425;

	class VCameraStateAdditiveNormalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::VCameraState CameraState; // 0x14
		::System::Boolean NeedClear; // 0x18
		::System::Byte _padding1[0x7];
		::RPG::GameCore::VCameraNormalConfig* AdditiveNormalConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraStateAdditiveNormalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraStateAdditiveNormalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASTATEADDITIVENORMALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
