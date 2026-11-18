#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILAGIDEHCJG.h"

#define PKJFBGHOGPE_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x1D9CEDB0)
#define PKJFBGHOGPE_DGKPJNPAANA_OFFSET UNITYSDK_OFFSET(0x1D9CEC50)
#define PKJFBGHOGPE_KHANFCDHIDK_OFFSET UNITYSDK_OFFSET(0x1D9CEC10)
#define PKJFBGHOGPE_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x1D9CEEF0)
#define PKJFBGHOGPE_MAIINOIHKBB_OFFSET UNITYSDK_OFFSET(0x1D9CEF30)
#define PKJFBGHOGPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9CEE90)

inline static constexpr unsigned int PKJFBGHOGPE_TypeDefinitionIndex = 61756;

class PKJFBGHOGPE : public ::ILAGIDEHCJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJFBGHOGPE__CTOR_OFFSET))(this);
	}

	::System::Void KHANFCDHIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJFBGHOGPE_KHANFCDHIDK_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJFBGHOGPE_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJFBGHOGPE_KHJELIBOECB_OFFSET))(this);
	}

	static ::System::Void DGKPJNPAANA()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKJFBGHOGPE_DGKPJNPAANA_OFFSET))();
	}

	::System::Void MAIINOIHKBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKJFBGHOGPE_MAIINOIHKBB_OFFSET))(this);
	}
};
