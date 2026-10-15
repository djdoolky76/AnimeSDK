#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/VersusBarPropertyType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByVersusBar; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAACD40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAACF80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAACD50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAACD10)

namespace RPG::GameCore
{
	class SetDynamicValueByVersusBar : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::TeamType Team; // 0x24
		::RPG::GameCore::VersusBarPropertyType ValueType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByVersusBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByVersusBar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByVersusBar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYVERSUSBAR_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
