#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEnablePropDialogMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39CB80)
#define RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39CBC0)
#define RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39CB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnablePropDialogMode_TypeDefinitionIndex = 20339;

	class AdvEnablePropDialogMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Boolean PlayerFaceToProp; // 0x19
		::System::Boolean IsUseProgramRotate; // 0x1A
		::System::Byte _padding0[0x1];
		::System::Single RotateSpeed; // 0x1C
		::System::Boolean EnablePropCamera; // 0x20
		::System::Boolean LockPlayerControl; // 0x21
		::System::Boolean IsImmediatelySucc; // 0x22
		::System::Byte _padding1[0x5];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnablePropDialogMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnablePropDialogMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnablePropDialogMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnablePropDialogMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEPROPDIALOGMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
