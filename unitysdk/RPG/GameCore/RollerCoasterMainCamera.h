#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RollerCoasterBaseCamera.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterMainCamera; }

#define RPG_GAMECORE_ROLLERCOASTERMAINCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC59790)
#define RPG_GAMECORE_ROLLERCOASTERMAINCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC597A0)
#define RPG_GAMECORE_ROLLERCOASTERMAINCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC59D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterMainCamera_TypeDefinitionIndex = 16434;

	class RollerCoasterMainCamera : public ::RPG::GameCore::RollerCoasterBaseCamera
	{
	public:
		::System::Boolean FixDirectionFollow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERMAINCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterMainCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERMAINCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterMainCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterMainCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERMAINCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
