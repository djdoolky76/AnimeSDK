#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEEJHBCIGGI;
class GFMNHPCEHKH;
class IGIEOGBNLAC;
class OHPJBMJAJML;

#define CNCELEJMKDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C54CB70)
#define CNCELEJMKDC_IDGMOOILFLG_OFFSET UNITYSDK_OFFSET(0x1C54CB80)

	class CNCELEJMKDC : public ::System::Object
	{
	public:
		::GFMNHPCEHKH* KPGBIFOGEDF; // 0x10
		::OHPJBMJAJML* EPAEMMEAAMB; // 0x18
		::BEEJHBCIGGI* ILPEEPDIPHL; // 0x20
		::System::Void _ctor(::GFMNHPCEHKH* a1, ::BEEJHBCIGGI* a2, ::OHPJBMJAJML* a3)
		{
			return ((::System::Void(*)(::PVOID, ::GFMNHPCEHKH*, ::BEEJHBCIGGI*, ::OHPJBMJAJML*))((::PBYTE)hIl2Cpp + CNCELEJMKDC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::IGIEOGBNLAC* IDGMOOILFLG(::System::UInt32 a1)
		{
			return ((::IGIEOGBNLAC*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CNCELEJMKDC_IDGMOOILFLG_OFFSET))(this, a1);
		}

	};
