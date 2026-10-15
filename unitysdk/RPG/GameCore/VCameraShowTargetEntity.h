#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FieldHideMode.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class VCameraShowTargetEntity; }

#define RPG_GAMECORE_VCAMERASHOWTARGETENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FB80)
#define RPG_GAMECORE_VCAMERASHOWTARGETENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7D5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraShowTargetEntity_TypeDefinitionIndex = 16422;

	class VCameraShowTargetEntity : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* ShowTargetType; // 0x18
		::System::Boolean IsTargetIgnoreCameraDither; // 0x20
		::System::Boolean IsForbidHugeMonsterHalfDither; // 0x21
		::System::Boolean IsAliveOnly; // 0x22
		::System::Boolean HideFieldEffect; // 0x23
		::RPG::GameCore::FieldHideMode FieldHideMode; // 0x24
		::System::Single RayHitDitherCheckInterval; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOWTARGETENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraShowTargetEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraShowTargetEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHOWTARGETENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
