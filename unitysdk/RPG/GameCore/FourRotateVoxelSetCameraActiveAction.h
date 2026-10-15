#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FourRotateVoxelSetCameraActiveAction; }

#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C42A0)
#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C42B0)
#define RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C4270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelSetCameraActiveAction_TypeDefinitionIndex = 16768;

	class FourRotateVoxelSetCameraActiveAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::UInt32 CameraEntityConfigID; // 0x10
		::System::Boolean IsActive; // 0x14
		::System::Byte _padding0[0x3];
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* OnCompleteActions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelSetCameraActiveAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELSETCAMERAACTIVEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
