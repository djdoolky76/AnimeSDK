#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenGameSwitchCamera; }
namespace RPG::GameCore { class VCameraBlend; }
namespace System { class String; }

#define RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76BFD0)
#define RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D76BFE0)
#define RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76BFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenGameSwitchCamera_TypeDefinitionIndex = 21316;

	class HipplenGameSwitchCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CameraName; // 0x18
		::RPG::GameCore::VCameraBlend* BlendConfig; // 0x20
		::System::Boolean LookAtHipplen; // 0x28
		::System::Boolean FollowHipplen; // 0x29
		::System::Byte _padding0[0x6];
		::System::String* FollowAnchorName; // 0x30
		::System::Single MinFov; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameSwitchCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameSwitchCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenGameSwitchCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenGameSwitchCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENGAMESWITCHCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
