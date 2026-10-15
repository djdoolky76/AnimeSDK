#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class SetClientGroupProperty; }

#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6ED80)
#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6ED90)
#define RPG_GAMECORE_SETCLIENTGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6ED50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetClientGroupProperty_TypeDefinitionIndex = 20730;

	class SetClientGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetClientGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetClientGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetClientGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetClientGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCLIENTGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
