#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MKHNMHOHEAK.h"
class KPCDEJGJHBK;

#define PDLIGFICMBM_CGNOBOOCGNB_OFFSET UNITYSDK_OFFSET(0xC01F410)
#define PDLIGFICMBM_CTOR_OFFSET UNITYSDK_OFFSET(0xC01F460)
#define PDLIGFICMBM_IGKLKLJCMBI_OFFSET UNITYSDK_OFFSET(0xC01F140)

	class PDLIGFICMBM : public ::MKHNMHOHEAK
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDLIGFICMBM_CTOR_OFFSET))(this);
		}

		::System::Void IGKLKLJCMBI(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + PDLIGFICMBM_IGKLKLJCMBI_OFFSET))(this, a1);
		}

		::System::Void CGNOBOOCGNB(::KPCDEJGJHBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPCDEJGJHBK*))((::PBYTE)hIl2Cpp + PDLIGFICMBM_CGNOBOOCGNB_OFFSET))(this, a1);
		}

	};
