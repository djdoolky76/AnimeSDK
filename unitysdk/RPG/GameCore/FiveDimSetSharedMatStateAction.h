#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FDRIStateMaskEnum.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetSharedMatStateAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AD7C0)
#define RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AD7D0)
#define RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AD790)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetSharedMatStateAction_TypeDefinitionIndex = 18694;

	class FiveDimSetSharedMatStateAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PrototypeID; // 0x10
		::RPG::GameCore::FDRIStateMaskEnum FDRIState; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSharedMatStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSharedMatStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetSharedMatStateAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetSharedMatStateAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETSHAREDMATSTATEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
