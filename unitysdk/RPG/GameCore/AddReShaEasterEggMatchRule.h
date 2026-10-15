#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddReShaEasterEggMatchRule; }
namespace RPG::GameCore { class PropStateMatchConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D35D230)
#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D35D240)
#define RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D35D200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddReShaEasterEggMatchRule_TypeDefinitionIndex = 22035;

	class AddReShaEasterEggMatchRule : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateMatchConfig*>* Conditions; // 0x18
		::System::Boolean IsLoop; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnMatch; // 0x28
		::System::UInt32 RouteDisplayID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaEasterEggMatchRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddReShaEasterEggMatchRule* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddReShaEasterEggMatchRule*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDRESHAEASTEREGGMATCHRULE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
