#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByActionCountDown; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA73190)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA73310)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA731A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA73160)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByActionCountDown_TypeDefinitionIndex = 23692;

	class SetDynamicValueByActionCountDown : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByActionCountDown* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByActionCountDown*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYACTIONCOUNTDOWN_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
