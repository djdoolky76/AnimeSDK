#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNCHFPFHIJL.h"
class FCOEMCEDLNL;
class KAKCDBGNJKN;
class PEMAHMMMPIF;

#define KAKCDBGNJKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D05F450)
#define KAKCDBGNJKN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D05F380)
#define KAKCDBGNJKN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D05F1C0)

inline static constexpr unsigned int KAKCDBGNJKN_TypeDefinitionIndex = 23333;

	class KAKCDBGNJKN : public ::BNCHFPFHIJL
	{
	public:
		::PEMAHMMMPIF* EIBLNHPLJIG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAKCDBGNJKN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KAKCDBGNJKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KAKCDBGNJKN*))((::PBYTE)hIl2Cpp + KAKCDBGNJKN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KAKCDBGNJKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KAKCDBGNJKN*))((::PBYTE)hIl2Cpp + KAKCDBGNJKN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
