#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCreatePhantomPlayerAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6B6AB0)
#define RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6B6AC0)
#define RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6B6A80)

namespace RPG::GameCore
{
	class FiveDimCreatePhantomPlayerAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* Path; // 0x10
		::System::Boolean Loop; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* Name; // 0x20
		::System::Boolean InterruptSameName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimCreatePhantomPlayerAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMCREATEPHANTOMPLAYERACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
