#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LBMLBLLLMGG;
namespace RPG::GameCore { class DynamicFloat; }

#define LBMLBLLLMGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D6EF0)
#define LBMLBLLLMGG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0D6F00)
#define LBMLBLLLMGG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0D6EC0)

	class LBMLBLLLMGG : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GMDBHJKEAEI; // 0x18
		::RPG::GameCore::DynamicFloat* FIJLEDEKBJP; // 0x20
		::RPG::GameCore::DynamicFloat* CCAOGMEFNLB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBMLBLLLMGG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LBMLBLLLMGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LBMLBLLLMGG*))((::PBYTE)hIl2Cpp + LBMLBLLLMGG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LBMLBLLLMGG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LBMLBLLLMGG*))((::PBYTE)hIl2Cpp + LBMLBLLLMGG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
