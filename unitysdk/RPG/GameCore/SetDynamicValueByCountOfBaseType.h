#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/AvatarBaseTypeKind.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByCountOfBaseType; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA75D70)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA76070)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA75D90)
#define RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA75D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByCountOfBaseType_TypeDefinitionIndex = 23587;

	class SetDynamicValueByCountOfBaseType : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::AvatarBaseType>* BaseTypeList; // 0x30
		::RPG::GameCore::AvatarBaseTypeKind BaseTypeKind; // 0x38
		::System::Byte _padding1[0x4];
		::RPG::GameCore::TargetEvaluator* BaseTypeSourceTarget; // 0x40
		::RPG::GameCore::AvatarBaseTypeKind SourceBaseTypeKind; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByCountOfBaseType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByCountOfBaseType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYCOUNTOFBASETYPE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
