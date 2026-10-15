#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KMAEPFCHJIB;

#define KMAEPFCHJIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0AC980)
#define KMAEPFCHJIB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0AC7E0)

	class KMAEPFCHJIB : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FBJNOBODCLF; // 0x10
		::System::UInt32 LABFIMHODHC; // 0x18
		::System::UInt32 JJCIOIKKJEM; // 0x1C
		::System::UInt32 PHFMCACHFIJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMAEPFCHJIB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KMAEPFCHJIB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KMAEPFCHJIB*))((::PBYTE)hIl2Cpp + KMAEPFCHJIB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
