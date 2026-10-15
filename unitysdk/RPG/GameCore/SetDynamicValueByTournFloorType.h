#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/SetDynamicValueBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetDynamicValueByTournFloorType; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7EE10)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_GETDYNAMICKEY_OFFSET UNITYSDK_OFFSET(0x1DA7EF80)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7EE20)
#define RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7EDE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetDynamicValueByTournFloorType_TypeDefinitionIndex = 23110;

	class SetDynamicValueByTournFloorType : public ::RPG::GameCore::SetDynamicValueBase
	{
	public:
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* DynamicKey; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByTournFloorType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetDynamicValueByTournFloorType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetDynamicValueByTournFloorType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		::System::Object* GetDynamicKey()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETDYNAMICVALUEBYTOURNFLOORTYPE_GETDYNAMICKEY_OFFSET))(this);
		}

	};
}
