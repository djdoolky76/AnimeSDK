#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarblePredicateConfig; }
namespace RPG::GameCore { class MarbleTaskConfig; }

#define RPG_GAMECORE_MARBLEPREDICATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D838010)
#define RPG_GAMECORE_MARBLEPREDICATECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D844BF0)
#define RPG_GAMECORE_MARBLEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D844220)

namespace RPG::GameCore
{
	class MarblePredicateConfig : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnSuccess; // 0x10
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnFail; // 0x18
		::System::Boolean Inverse; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarblePredicateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarblePredicateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEPREDICATECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
