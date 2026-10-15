#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetRenderVisibleNeverDitherAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DADB0)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DADC0)
#define RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DAD80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetRenderVisibleNeverDitherAction_TypeDefinitionIndex = 18681;

	class FiveDimSetRenderVisibleNeverDitherAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18
		::System::Boolean SetCollider; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetRenderVisibleNeverDitherAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETRENDERVISIBLENEVERDITHERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
