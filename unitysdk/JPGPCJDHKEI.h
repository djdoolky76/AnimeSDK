#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;

#define JPGPCJDHKEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7099B0)
#define JPGPCJDHKEI_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C7099C0)
#define JPGPCJDHKEI_NECHBNMFPOM_OFFSET UNITYSDK_OFFSET(0x1C709BC0)

	class JPGPCJDHKEI : public ::GPLOFONGBGI
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGPCJDHKEI_CTOR_OFFSET))(this);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + JPGPCJDHKEI_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NECHBNMFPOM(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::IFBFJDCECML* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + JPGPCJDHKEI_NECHBNMFPOM_OFFSET))(this, a1, a2, a3);
		}

	};
