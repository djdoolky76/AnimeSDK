#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILAGIDEHCJG.h"

#define KINKAABBLGI_AEBDGANLLDO_OFFSET UNITYSDK_OFFSET(0x177197A0)
#define KINKAABBLGI_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x177198E0)
#define KINKAABBLGI_KHANFCDHIDK_OFFSET UNITYSDK_OFFSET(0x17719760)
#define KINKAABBLGI_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x17719A20)
#define KINKAABBLGI_MAIINOIHKBB_OFFSET UNITYSDK_OFFSET(0x17719A60)
#define KINKAABBLGI__CTOR_OFFSET UNITYSDK_OFFSET(0x177199C0)

inline static constexpr unsigned int KINKAABBLGI_TypeDefinitionIndex = 84083;

class KINKAABBLGI : public ::ILAGIDEHCJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINKAABBLGI__CTOR_OFFSET))(this);
	}

	::System::Void KHANFCDHIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINKAABBLGI_KHANFCDHIDK_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINKAABBLGI_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINKAABBLGI_KHJELIBOECB_OFFSET))(this);
	}

	static ::System::Void AEBDGANLLDO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KINKAABBLGI_AEBDGANLLDO_OFFSET))();
	}

	::System::Void MAIINOIHKBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KINKAABBLGI_MAIINOIHKBB_OFFSET))(this);
	}
};
