#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class AKBGJCOALME;
class FCOEMCEDLNL;

#define AKBGJCOALME_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD3650)
#define AKBGJCOALME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCD3660)
#define AKBGJCOALME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD3610)

inline static constexpr unsigned int AKBGJCOALME_TypeDefinitionIndex = 24224;

	class AKBGJCOALME : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KDHCICFNAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBGJCOALME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKBGJCOALME* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKBGJCOALME*))((::PBYTE)hIl2Cpp + AKBGJCOALME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AKBGJCOALME* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKBGJCOALME*))((::PBYTE)hIl2Cpp + AKBGJCOALME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
