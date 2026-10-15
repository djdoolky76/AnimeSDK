#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ALFJPDLGBJH;
class FCOEMCEDLNL;

#define ALFJPDLGBJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD8270)
#define ALFJPDLGBJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCD8280)
#define ALFJPDLGBJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD8240)

inline static constexpr unsigned int ALFJPDLGBJH_TypeDefinitionIndex = 21053;

	class ALFJPDLGBJH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFJPDLGBJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ALFJPDLGBJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALFJPDLGBJH*))((::PBYTE)hIl2Cpp + ALFJPDLGBJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ALFJPDLGBJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ALFJPDLGBJH*))((::PBYTE)hIl2Cpp + ALFJPDLGBJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
