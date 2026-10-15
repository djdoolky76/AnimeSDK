#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNMIBEFPHNF.h"
class PIIOAKOEACN;

#define BEFDAIJFNGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1C540B90)
#define BEFDAIJFNGK_EDBDAAKMDFI_OFFSET UNITYSDK_OFFSET(0x1C540B40)
#define BEFDAIJFNGK_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1C540AB0)
#define BEFDAIJFNGK_NCLOMPDLJPB_OFFSET UNITYSDK_OFFSET(0x1C540AF0)

	class BEFDAIJFNGK : public ::BNMIBEFPHNF
	{
	public:
		::System::Int32 COEMCOBPMKD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDAIJFNGK_CTOR_OFFSET))(this);
		}

		::System::Int32 HIDEJDELEEB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFDAIJFNGK_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Boolean NCLOMPDLJPB(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + BEFDAIJFNGK_NCLOMPDLJPB_OFFSET))(this, a1);
		}

		::System::Boolean EDBDAAKMDFI(::PIIOAKOEACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIIOAKOEACN*))((::PBYTE)hIl2Cpp + BEFDAIJFNGK_EDBDAAKMDFI_OFFSET))(this, a1);
		}

	};
