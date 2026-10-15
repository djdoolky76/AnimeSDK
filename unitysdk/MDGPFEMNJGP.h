#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class MDGPFEMNJGP;

#define MDGPFEMNJGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D144670)
#define MDGPFEMNJGP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D144680)
#define MDGPFEMNJGP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D144640)

inline static constexpr unsigned int MDGPFEMNJGP_TypeDefinitionIndex = 10226;

	class MDGPFEMNJGP : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean BBLMMNLCMGM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGPFEMNJGP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::MDGPFEMNJGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDGPFEMNJGP*))((::PBYTE)hIl2Cpp + MDGPFEMNJGP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::MDGPFEMNJGP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::MDGPFEMNJGP*))((::PBYTE)hIl2Cpp + MDGPFEMNJGP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
