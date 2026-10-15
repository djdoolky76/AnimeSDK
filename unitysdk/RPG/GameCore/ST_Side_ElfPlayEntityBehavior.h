#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_ElfPlayEntityBehavior; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA83130)
#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA83140)
#define RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA83100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_ElfPlayEntityBehavior_TypeDefinitionIndex = 21542;

	class ST_Side_ElfPlayEntityBehavior : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* BehaviorName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_ElfPlayEntityBehavior*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_ELFPLAYENTITYBEHAVIOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
