#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DJFPJDODLMB;
class FCOEMCEDLNL;

#define DJFPJDODLMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2DE30)
#define DJFPJDODLMB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD2DE40)
#define DJFPJDODLMB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD2DE00)

inline static constexpr unsigned int DJFPJDODLMB_TypeDefinitionIndex = 22389;

	class DJFPJDODLMB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean MOKNCFJICIC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJFPJDODLMB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DJFPJDODLMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DJFPJDODLMB*))((::PBYTE)hIl2Cpp + DJFPJDODLMB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DJFPJDODLMB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DJFPJDODLMB*))((::PBYTE)hIl2Cpp + DJFPJDODLMB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
