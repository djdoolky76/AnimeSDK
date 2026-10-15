#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerWaitInline; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4ECC0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4ECD0)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4EC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerWaitInline_TypeDefinitionIndex = 21528;

	class ST_Main_ElfCustomerWaitInline : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerWaitInline*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMERWAITINLINE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
