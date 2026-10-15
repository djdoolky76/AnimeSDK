#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CameraLookAtScreenRange; }
namespace RPG::GameCore { class CameraLookAtScreenRangeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D528E10)
#define RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D528CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CameraLookAtScreenRangeConfig_TypeDefinitionIndex = 20507;

	class CameraLookAtScreenRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::CameraLookAtScreenRange* InRange; // 0x18
		::RPG::GameCore::CameraLookAtScreenRange* OutRange; // 0x20
		::System::String* RecoverCurvePath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CameraLookAtScreenRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CameraLookAtScreenRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAMERALOOKATSCREENRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
