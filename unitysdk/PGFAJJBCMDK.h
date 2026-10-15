#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PGFAJJBCMDK;

#define PGFAJJBCMDK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B3C60)
#define PGFAJJBCMDK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D2B3C70)
#define PGFAJJBCMDK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D2B3C20)

inline static constexpr unsigned int PGFAJJBCMDK_TypeDefinitionIndex = 23569;

	class PGFAJJBCMDK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFAJJBCMDK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PGFAJJBCMDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PGFAJJBCMDK*))((::PBYTE)hIl2Cpp + PGFAJJBCMDK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PGFAJJBCMDK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PGFAJJBCMDK*))((::PBYTE)hIl2Cpp + PGFAJJBCMDK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
