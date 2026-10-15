#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LNLJFDBENMF;

#define LNLJFDBENMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0F08F0)
#define LNLJFDBENMF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0F0900)
#define LNLJFDBENMF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0F08B0)

inline static constexpr unsigned int LNLJFDBENMF_TypeDefinitionIndex = 19949;

	class LNLJFDBENMF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNLJFDBENMF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNLJFDBENMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNLJFDBENMF*))((::PBYTE)hIl2Cpp + LNLJFDBENMF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNLJFDBENMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNLJFDBENMF*))((::PBYTE)hIl2Cpp + LNLJFDBENMF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
