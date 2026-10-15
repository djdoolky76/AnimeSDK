#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class OpenCocoon; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_OPENCOCOON_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B3460)
#define RPG_GAMECORE_OPENCOCOON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B34F0)
#define RPG_GAMECORE_OPENCOCOON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B33B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpenCocoon_TypeDefinitionIndex = 22084;

	class OpenCocoon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnCancel; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUIEnter; // 0x20
		::RPG::GameCore::DynamicFloat* BattleAreaID; // 0x28
		::RPG::GameCore::DynamicFloat* BattleAreaConfigID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenCocoon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpenCocoon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpenCocoon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPENCOCOON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
