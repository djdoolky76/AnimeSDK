#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetRenderVisibleAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DAAD0)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DAAE0)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DAAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderVisibleAction_TypeDefinitionIndex = 18680;

	class FiveDimSetRenderVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Boolean WithDither; // 0x11
		::System::Boolean OverrideDitherDuration; // 0x12
		::System::Byte _padding0[0x1];
		::System::Single DitherDuration; // 0x14
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18
		::System::Boolean SetCollider; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetRenderVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetRenderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
