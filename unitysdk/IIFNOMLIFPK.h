#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IIFNOMLIFPK;

#define IIFNOMLIFPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE4A80)
#define IIFNOMLIFPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEE4A90)
#define IIFNOMLIFPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEE4A50)

inline static constexpr unsigned int IIFNOMLIFPK_TypeDefinitionIndex = 24307;

	class IIFNOMLIFPK : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KDHCICFNAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIFNOMLIFPK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::IIFNOMLIFPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIFNOMLIFPK*))((::PBYTE)hIl2Cpp + IIFNOMLIFPK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::IIFNOMLIFPK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::IIFNOMLIFPK*))((::PBYTE)hIl2Cpp + IIFNOMLIFPK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
