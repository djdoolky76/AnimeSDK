#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetLittleGameLevelVarShort; }

#define RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB7E40)
#define RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB7E50)
#define RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB7E10)

namespace RPG::GameCore
{
	class SetLittleGameLevelVarShort : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicString* Name; // 0x18
		::RPG::GameCore::DynamicFloat* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLittleGameLevelVarShort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLittleGameLevelVarShort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLITTLEGAMELEVELVARSHORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
