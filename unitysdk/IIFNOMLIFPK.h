#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class IIFNOMLIFPK;

#define IIFNOMLIFPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CEEF0)
#define IIFNOMLIFPK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E6CEF00)
#define IIFNOMLIFPK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E6CEEC0)

inline static constexpr unsigned int IIFNOMLIFPK_TypeDefinitionIndex = 24766;

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
