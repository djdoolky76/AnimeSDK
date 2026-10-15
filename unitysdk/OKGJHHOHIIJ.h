#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class OKGJHHOHIIJ;

#define OKGJHHOHIIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D28E240)
#define OKGJHHOHIIJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D28E150)

	class OKGJHHOHIIJ : public ::System::Object
	{
	public:
		::System::UInt32 JENCANJIFHE; // 0x10
		::System::UInt32 FAONKFODAHF; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKGJHHOHIIJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::OKGJHHOHIIJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::OKGJHHOHIIJ*))((::PBYTE)hIl2Cpp + OKGJHHOHIIJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
