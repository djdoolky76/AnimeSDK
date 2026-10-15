#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define CMNMHLPOHFC_CTOR_OFFSET UNITYSDK_OFFSET(0xDA3CB40)
#define CMNMHLPOHFC_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xDA3CC40)
#define CMNMHLPOHFC_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xDA3CB50)
#define CMNMHLPOHFC_PPIAIMIJMFB_OFFSET UNITYSDK_OFFSET(0xDA3CC80)

	class CMNMHLPOHFC : public ::EFNJLACKEDH
	{
	public:
		::System::Boolean INJJGMIGFFD; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + CMNMHLPOHFC_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNMHLPOHFC_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNMHLPOHFC_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void PPIAIMIJMFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMNMHLPOHFC_PPIAIMIJMFB_OFFSET))(this);
		}

	};
