#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByDelayCumulate; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA3E40)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA3FC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA3E50)
#define RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA3E10)

namespace RPG::GameCore
{
	class SetDynamicValueByDelayCumulate : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByDelayCumulate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByDelayCumulate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByDelayCumulate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByDelayCumulate*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYDELAYCUMULATE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
