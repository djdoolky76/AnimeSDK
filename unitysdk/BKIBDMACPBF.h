#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BKIBDMACPBF;
class FCOEMCEDLNL;

#define BKIBDMACPBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A9320)
#define BKIBDMACPBF_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F1A9330)
#define BKIBDMACPBF_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F1A92E0)

inline static constexpr unsigned int BKIBDMACPBF_TypeDefinitionIndex = 21635;

	class BKIBDMACPBF : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIBDMACPBF_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::BKIBDMACPBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKIBDMACPBF*))((::PBYTE)hIl2Cpp + BKIBDMACPBF_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::BKIBDMACPBF* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::BKIBDMACPBF*))((::PBYTE)hIl2Cpp + BKIBDMACPBF_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
