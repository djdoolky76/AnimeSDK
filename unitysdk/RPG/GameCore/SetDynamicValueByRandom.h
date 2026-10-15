#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetDynamicValueByRandom; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7BCE0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7BF80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7BCF0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7BCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByRandom_TypeDefinitionIndex = 23833;

	class SetDynamicValueByRandom : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Boolean IsInt; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DynamicFloat* Min; // 0x28
		::RPG::GameCore::DynamicFloat* Max; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRandom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRandom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByRandom* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByRandom*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYRANDOM_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
