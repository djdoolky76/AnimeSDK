#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterBaseCamera; }

#define RPG_GAMECORE_ROLLERCOASTERBASECAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC59A10)
#define RPG_GAMECORE_ROLLERCOASTERBASECAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC59910)
#define RPG_GAMECORE_ROLLERCOASTERBASECAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC590F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterBaseCamera_TypeDefinitionIndex = 16431;

	class RollerCoasterBaseCamera : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x10
		::System::Single BlendTime; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERBASECAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterBaseCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterBaseCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERBASECAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterBaseCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterBaseCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERBASECAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
