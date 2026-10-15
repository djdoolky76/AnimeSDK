#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBCGKOIEMKF.h"
class DHLFNPCIGPP;
class FCOEMCEDLNL;

#define DHLFNPCIGPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD22600)
#define DHLFNPCIGPP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD22610)
#define DHLFNPCIGPP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD22570)

	class DHLFNPCIGPP : public ::GBCGKOIEMKF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHLFNPCIGPP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DHLFNPCIGPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DHLFNPCIGPP*))((::PBYTE)hIl2Cpp + DHLFNPCIGPP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DHLFNPCIGPP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DHLFNPCIGPP*))((::PBYTE)hIl2Cpp + DHLFNPCIGPP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
