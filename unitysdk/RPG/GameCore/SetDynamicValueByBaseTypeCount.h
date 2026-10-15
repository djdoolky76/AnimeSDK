#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByBaseTypeCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA19A0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DAA1BA0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA19B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA1960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByBaseTypeCount_TypeDefinitionIndex = 23585;

	class SetDynamicValueByBaseTypeCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByBaseTypeCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByBaseTypeCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYBASETYPECOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
