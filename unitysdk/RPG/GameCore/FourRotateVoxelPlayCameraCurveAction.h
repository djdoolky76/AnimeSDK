#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelPlayCameraCurveAction; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C31B0)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C31C0)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C3100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayCameraCurveAction_TypeDefinitionIndex = 16770;

	class FourRotateVoxelPlayCameraCurveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* CurveName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPlayCameraCurveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYCAMERACURVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
