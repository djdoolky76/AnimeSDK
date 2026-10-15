#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class SetDynamicValueByGridFightCustomProperty; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4CC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA4EA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA4CD0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA4C90)

namespace RPG::GameCore
{
	class SetDynamicValueByGridFightCustomProperty : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::JsonEnum* CustomType; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByGridFightCustomProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYGRIDFIGHTCUSTOMPROPERTY_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
