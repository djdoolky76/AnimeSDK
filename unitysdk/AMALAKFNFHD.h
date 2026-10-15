#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitEnvProfile.h"
class AMALAKFNFHD;
class FCOEMCEDLNL;

#define AMALAKFNFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCDAD40)
#define AMALAKFNFHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CCDAD50)
#define AMALAKFNFHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCDAD00)

inline static constexpr unsigned int AMALAKFNFHD_TypeDefinitionIndex = 21903;

	class AMALAKFNFHD : public ::RPG::GameCore::TransitEnvProfile
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMALAKFNFHD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AMALAKFNFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMALAKFNFHD*))((::PBYTE)hIl2Cpp + AMALAKFNFHD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AMALAKFNFHD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AMALAKFNFHD*))((::PBYTE)hIl2Cpp + AMALAKFNFHD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
