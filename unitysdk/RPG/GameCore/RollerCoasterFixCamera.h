#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RollerCoasterBaseCamera.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterFixCamera; }

#define RPG_GAMECORE_ROLLERCOASTERFIXCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC592E0)
#define RPG_GAMECORE_ROLLERCOASTERFIXCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC592F0)
#define RPG_GAMECORE_ROLLERCOASTERFIXCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC59C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterFixCamera_TypeDefinitionIndex = 16432;

	class RollerCoasterFixCamera : public ::RPG::GameCore::RollerCoasterBaseCamera
	{
	public:
		::RPG::MVector3 Position; // 0x18
		::RPG::MVector3 Rotation; // 0x24
		::System::Single Fov; // 0x30
		::System::UInt32 AnchorGroupID; // 0x34
		::System::UInt32 AnchorID; // 0x38
		::System::Boolean FixTransform; // 0x3C
		::System::Boolean FixDirectionFollow; // 0x3D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERFIXCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterFixCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterFixCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERFIXCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterFixCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterFixCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERFIXCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
