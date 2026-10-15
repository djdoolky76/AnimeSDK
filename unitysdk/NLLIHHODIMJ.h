#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NLLIHHODIMJ;

#define NLLIHHODIMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D234D50)
#define NLLIHHODIMJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D234AF0)

	class NLLIHHODIMJ : public ::System::Object
	{
	public:
		::System::Single PGDKIGEIBAA; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::System::Int32 AMMPNOLLCIN; // 0x18
		::System::Single PGFBFDJIDLM; // 0x1C
		::System::Int32 FELDBBKJCHO; // 0x20
		::System::Single IDKONBFPBLH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLLIHHODIMJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NLLIHHODIMJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NLLIHHODIMJ*))((::PBYTE)hIl2Cpp + NLLIHHODIMJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
