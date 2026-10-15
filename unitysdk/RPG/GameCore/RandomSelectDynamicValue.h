#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicValueContextScope.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class RandomSelectDynamicValue; }
namespace System { class String; }

#define RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93E440)
#define RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93E450)
#define RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93E410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomSelectDynamicValue_TypeDefinitionIndex = 22902;

	class RandomSelectDynamicValue : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::DynamicFloat*>* ValueList; // 0x18
		::System::String* DynamicKey; // 0x20
		::RPG::GameCore::DynamicValueContextScope ContextScope; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomSelectDynamicValue* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomSelectDynamicValue*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMSELECTDYNAMICVALUE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
