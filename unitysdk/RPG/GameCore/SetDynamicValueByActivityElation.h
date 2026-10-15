#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByActivityElation; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA0BF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA0D70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA0C00)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA0BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByActivityElation_TypeDefinitionIndex = 23150;

	class SetDynamicValueByActivityElation : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByActivityElation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByActivityElation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByActivityElation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByActivityElation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIVITYELATION_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
