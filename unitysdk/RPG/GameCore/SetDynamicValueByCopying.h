#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetDynamicValueByCopying; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA759A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA75BE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA759E0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA75940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCopying_TypeDefinitionIndex = 23824;

	class SetDynamicValueByCopying : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* FromTargetType; // 0x18
		::RPG::GameCore::DynamicString* FromDynamicKey; // 0x20
		::RPG::GameCore::DynamicString* FromModifierName; // 0x28
		::RPG::GameCore::TargetEvaluator* ToTargetType; // 0x30
		::RPG::GameCore::DynamicString* ToDynamicKey; // 0x38
		::RPG::GameCore::DynamicValueContextScope TargetContextScope; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCopying* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCopying*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCopying* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCopying*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOPYING_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
