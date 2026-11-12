#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfWaiterTimeOverPerform; }

#define RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC903C0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC903D0)
#define RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC90390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfWaiterTimeOverPerform_TypeDefinitionIndex = 21913;

	class ST_Main_ElfWaiterTimeOverPerform : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfWaiterTimeOverPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFWAITERTIMEOVERPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
