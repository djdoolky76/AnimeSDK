#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfCustomerExtraPay; }

#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA7BC40)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA7BC50)
#define RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA7BB80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfCustomerExtraPay_TypeDefinitionIndex = 21534;

	class ST_Main_ElfCustomerExtraPay : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfCustomerExtraPay*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFCUSTOMEREXTRAPAY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
