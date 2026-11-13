#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TransitEnvProfile.h"
class AMALAKFNFHD;
class FCOEMCEDLNL;

#define AMALAKFNFHD_CTOR_OFFSET UNITYSDK_OFFSET(0x1ECA84F0)
#define AMALAKFNFHD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1ECA8500)
#define AMALAKFNFHD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1ECA84B0)

inline static constexpr unsigned int AMALAKFNFHD_TypeDefinitionIndex = 22294;

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
