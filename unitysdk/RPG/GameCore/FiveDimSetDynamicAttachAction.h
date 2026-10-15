#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetDynamicAttachAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D9760)
#define RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D9770)
#define RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D9730)

namespace RPG::GameCore
{
	class FiveDimSetDynamicAttachAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 TargetEntityID; // 0x14
		::System::String* TargetAttachPoint; // 0x18
		::System::String* SourceAttachPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetDynamicAttachAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetDynamicAttachAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETDYNAMICATTACHACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
