#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DMBGHOJIJIL;
class FCOEMCEDLNL;

#define DMBGHOJIJIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD427C0)
#define DMBGHOJIJIL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD427D0)
#define DMBGHOJIJIL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD42790)

inline static constexpr unsigned int DMBGHOJIJIL_TypeDefinitionIndex = 10217;

	class DMBGHOJIJIL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 EMPFEIKELBN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMBGHOJIJIL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMBGHOJIJIL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMBGHOJIJIL*))((::PBYTE)hIl2Cpp + DMBGHOJIJIL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DMBGHOJIJIL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMBGHOJIJIL*))((::PBYTE)hIl2Cpp + DMBGHOJIJIL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
