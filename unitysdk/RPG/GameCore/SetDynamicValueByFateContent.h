#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/FateContentParamType.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByFateContent; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA43F0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA45E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA4400)
#define RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA43C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByFateContent_TypeDefinitionIndex = 23284;

	class SetDynamicValueByFateContent : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::RPG::GameCore::FateContentParamType ValueType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByFateContent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByFateContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByFateContent* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByFateContent*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYFATECONTENT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
