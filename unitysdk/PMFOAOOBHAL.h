#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class PMFOAOOBHAL;

#define PMFOAOOBHAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3079B0)
#define PMFOAOOBHAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3079C0)
#define PMFOAOOBHAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D307980)

inline static constexpr unsigned int PMFOAOOBHAL_TypeDefinitionIndex = 24390;

	class PMFOAOOBHAL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean FEBKPBMKMKH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMFOAOOBHAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::PMFOAOOBHAL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMFOAOOBHAL*))((::PBYTE)hIl2Cpp + PMFOAOOBHAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::PMFOAOOBHAL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::PMFOAOOBHAL*))((::PBYTE)hIl2Cpp + PMFOAOOBHAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
