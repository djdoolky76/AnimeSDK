#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RequestSetServerGroupProperty; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D989540)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D989550)
#define RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D989510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RequestSetServerGroupProperty_TypeDefinitionIndex = 20732;

	class RequestSetServerGroupProperty : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* DynamicName; // 0x20
		::System::Int16 Value; // 0x28
		::System::Byte _padding1[0x6];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSuccess; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFail; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RequestSetServerGroupProperty* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RequestSetServerGroupProperty*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REQUESTSETSERVERGROUPPROPERTY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
