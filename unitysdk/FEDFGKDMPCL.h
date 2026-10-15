#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNMIBEFPHNF.h"
class PIIOAKOEACN;

#define FEDFGKDMPCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C553240)
#define FEDFGKDMPCL_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C5532F0)
#define FEDFGKDMPCL_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1C553200)
#define FEDFGKDMPCL_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C553250)

	class FEDFGKDMPCL : public ::BNMIBEFPHNF
	{
	public:
		::System::Int32 COEMCOBPMKD; // 0x18
		::System::UInt32 PCOAHCFKJLM; // 0x1C
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEDFGKDMPCL_CTOR_OFFSET))(this, a1);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEDFGKDMPCL_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + FEDFGKDMPCL_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + FEDFGKDMPCL_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
