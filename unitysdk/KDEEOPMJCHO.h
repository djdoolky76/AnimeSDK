#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class KDEEOPMJCHO;

#define KDEEOPMJCHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D051970)
#define KDEEOPMJCHO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D051980)
#define KDEEOPMJCHO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D051940)

inline static constexpr unsigned int KDEEOPMJCHO_TypeDefinitionIndex = 19937;

	class KDEEOPMJCHO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AAGKEBFHLMC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEEOPMJCHO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KDEEOPMJCHO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDEEOPMJCHO*))((::PBYTE)hIl2Cpp + KDEEOPMJCHO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KDEEOPMJCHO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KDEEOPMJCHO*))((::PBYTE)hIl2Cpp + KDEEOPMJCHO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
