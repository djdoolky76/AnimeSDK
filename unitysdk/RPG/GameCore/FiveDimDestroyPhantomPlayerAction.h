#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDestroyPhantomPlayerAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68B180)
#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D68B190)
#define RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68B150)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimDestroyPhantomPlayerAction_TypeDefinitionIndex = 18668;

	class FiveDimDestroyPhantomPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Name; // 0x10
		::System::Boolean IsImmediately; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimDestroyPhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMDESTROYPHANTOMPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
