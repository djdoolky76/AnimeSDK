#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraShakeAction; }
namespace RPG::GameCore { class VCameraOverrideShakeV2; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B40E0)
#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B40F0)
#define RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B40B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimCameraShakeAction_TypeDefinitionIndex = 18716;

	class FiveDimCameraShakeAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* ShakeTemplateName; // 0x10
		::RPG::GameCore::VCameraOverrideShakeV2* OverrideShakeConfigV2; // 0x18
		::RPG::GameCore::VCameraShakeV2* ShakeConfigV2; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCameraShakeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCameraShakeAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCameraShakeAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCAMERASHAKEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
