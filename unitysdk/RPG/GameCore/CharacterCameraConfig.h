#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterCameraConfig; }
namespace RPG::GameCore { class VCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53BE50)
#define RPG_GAMECORE_CHARACTERCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53BD40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCameraConfig_TypeDefinitionIndex = 16502;

	class CharacterCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::VCameraConfig* CameraConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
