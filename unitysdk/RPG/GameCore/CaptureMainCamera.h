#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaptureMainCamera; }
namespace System { class String; }

#define RPG_GAMECORE_CAPTUREMAINCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D529B50)
#define RPG_GAMECORE_CAPTUREMAINCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D529B60)
#define RPG_GAMECORE_CAPTUREMAINCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D529B20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CaptureMainCamera_TypeDefinitionIndex = 20824;

	class CaptureMainCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* AreaName; // 0x18
		::System::String* AnchorName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREMAINCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureMainCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREMAINCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureMainCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTUREMAINCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
