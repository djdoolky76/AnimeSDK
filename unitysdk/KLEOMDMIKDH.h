#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNFBANKKLJK.h"
class FCOEMCEDLNL;
class KLEOMDMIKDH;

#define KLEOMDMIKDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A5DD0)
#define KLEOMDMIKDH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D0A5DE0)
#define KLEOMDMIKDH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A5D40)

inline static constexpr unsigned int KLEOMDMIKDH_TypeDefinitionIndex = 21405;

	class KLEOMDMIKDH : public ::JNFBANKKLJK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEOMDMIKDH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KLEOMDMIKDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLEOMDMIKDH*))((::PBYTE)hIl2Cpp + KLEOMDMIKDH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::KLEOMDMIKDH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLEOMDMIKDH*))((::PBYTE)hIl2Cpp + KLEOMDMIKDH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
