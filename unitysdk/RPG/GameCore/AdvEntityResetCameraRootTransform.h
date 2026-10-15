#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntityResetCameraRootTransform; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D370750)
#define RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D370760)
#define RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D370720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEntityResetCameraRootTransform_TypeDefinitionIndex = 21042;

	class AdvEntityResetCameraRootTransform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityResetCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityResetCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntityResetCameraRootTransform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntityResetCameraRootTransform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYRESETCAMERAROOTTRANSFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
