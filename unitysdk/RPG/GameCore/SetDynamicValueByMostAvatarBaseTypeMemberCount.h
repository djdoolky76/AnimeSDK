#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByMostAvatarBaseTypeMemberCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA79FB0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7A1B0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA79FC0)
#define RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA79F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByMostAvatarBaseTypeMemberCount_TypeDefinitionIndex = 23590;

	class SetDynamicValueByMostAvatarBaseTypeMemberCount : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::System::String* DynamicKey; // 0x18
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ReadTargetType; // 0x28
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByMostAvatarBaseTypeMemberCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYMOSTAVATARBASETYPEMEMBERCOUNT_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
