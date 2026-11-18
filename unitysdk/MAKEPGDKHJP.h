#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILAGIDEHCJG.h"

#define MAKEPGDKHJP_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x15E16A00)
#define MAKEPGDKHJP_IMJFDHDODJJ_OFFSET UNITYSDK_OFFSET(0x15E168C0)
#define MAKEPGDKHJP_KHANFCDHIDK_OFFSET UNITYSDK_OFFSET(0x15E16880)
#define MAKEPGDKHJP_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x15E16B40)
#define MAKEPGDKHJP_MAIINOIHKBB_OFFSET UNITYSDK_OFFSET(0x15E16B80)
#define MAKEPGDKHJP__CTOR_OFFSET UNITYSDK_OFFSET(0x15E16AE0)

inline static constexpr unsigned int MAKEPGDKHJP_TypeDefinitionIndex = 83344;

class MAKEPGDKHJP : public ::ILAGIDEHCJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKEPGDKHJP__CTOR_OFFSET))(this);
	}

	::System::Void KHANFCDHIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKEPGDKHJP_KHANFCDHIDK_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKEPGDKHJP_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKEPGDKHJP_KHJELIBOECB_OFFSET))(this);
	}

	static ::System::Void IMJFDHDODJJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAKEPGDKHJP_IMJFDHDODJJ_OFFSET))();
	}

	::System::Void MAIINOIHKBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAKEPGDKHJP_MAIINOIHKBB_OFFSET))(this);
	}
};
