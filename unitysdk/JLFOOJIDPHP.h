#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOPMBGADNJD;
class KFMGKJPDLNB;

#define JLFOOJIDPHP_CTOR_OFFSET UNITYSDK_OFFSET(0xB243390)
#define JLFOOJIDPHP_EKMPMMLBNEL_OFFSET UNITYSDK_OFFSET(0xB243420)

	class JLFOOJIDPHP : public ::System::Object
	{
	public:
		::FOPMBGADNJD* JILBKMEGBDK; // 0x10
		::KFMGKJPDLNB* BBHLBMONOIJ; // 0x18
		::System::Void _ctor(::FOPMBGADNJD* a1, ::KFMGKJPDLNB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FOPMBGADNJD*, ::KFMGKJPDLNB*))((::PBYTE)hIl2Cpp + JLFOOJIDPHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single EKMPMMLBNEL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JLFOOJIDPHP_EKMPMMLBNEL_OFFSET))(this);
		}

	};
