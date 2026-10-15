#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class LNFKIOADLAN;

#define LNFKIOADLAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0ED340)
#define LNFKIOADLAN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0ED350)
#define LNFKIOADLAN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0ED310)

inline static constexpr unsigned int LNFKIOADLAN_TypeDefinitionIndex = 21878;

	class LNFKIOADLAN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean OHMHJFANEIF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNFKIOADLAN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::LNFKIOADLAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNFKIOADLAN*))((::PBYTE)hIl2Cpp + LNFKIOADLAN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::LNFKIOADLAN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::LNFKIOADLAN*))((::PBYTE)hIl2Cpp + LNFKIOADLAN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
