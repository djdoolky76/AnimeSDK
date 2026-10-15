#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetColliderVisibleAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D92C0)
#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D92D0)
#define RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D9290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetColliderVisibleAction_TypeDefinitionIndex = 18682;

	class FiveDimSetColliderVisibleAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Visible; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* RelativePaths; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetColliderVisibleAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetColliderVisibleAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETCOLLIDERVISIBLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
