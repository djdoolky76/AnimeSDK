#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfEntityDestory; }

#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4EE50)
#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4EE60)
#define RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4ED90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfEntityDestory_TypeDefinitionIndex = 21547;

	class ST_Main_ElfEntityDestory : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfEntityDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfEntityDestory* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfEntityDestory*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFENTITYDESTORY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
