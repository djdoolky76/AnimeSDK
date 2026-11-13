#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class ELIGHFPAKMF;
class FCOEMCEDLNL;

#define ELIGHFPAKMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F12A1A0)
#define ELIGHFPAKMF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F12A1B0)
#define ELIGHFPAKMF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F12A170)

inline static constexpr unsigned int ELIGHFPAKMF_TypeDefinitionIndex = 10257;

	class ELIGHFPAKMF : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LIIBFJNJKCN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELIGHFPAKMF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::ELIGHFPAKMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELIGHFPAKMF*))((::PBYTE)hIl2Cpp + ELIGHFPAKMF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::ELIGHFPAKMF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::ELIGHFPAKMF*))((::PBYTE)hIl2Cpp + ELIGHFPAKMF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
