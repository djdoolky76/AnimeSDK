#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Main_ElfTakeOutDelivery; }

#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4F2C0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4F2D0)
#define RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4F200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Main_ElfTakeOutDelivery_TypeDefinitionIndex = 21539;

	class ST_Main_ElfTakeOutDelivery : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Main_ElfTakeOutDelivery*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_MAIN_ELFTAKEOUTDELIVERY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
