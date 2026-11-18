#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILAGIDEHCJG.h"

#define HAGNECAGAPL_BHBJOIHDCNP_OFFSET UNITYSDK_OFFSET(0x14D09660)
#define HAGNECAGAPL_DEJBOKDOGCD_OFFSET UNITYSDK_OFFSET(0x14D097C0)
#define HAGNECAGAPL_KHANFCDHIDK_OFFSET UNITYSDK_OFFSET(0x14D09620)
#define HAGNECAGAPL_KHJELIBOECB_OFFSET UNITYSDK_OFFSET(0x14D09900)
#define HAGNECAGAPL_MAIINOIHKBB_OFFSET UNITYSDK_OFFSET(0x14D09940)
#define HAGNECAGAPL__CTOR_OFFSET UNITYSDK_OFFSET(0x14D098A0)

inline static constexpr unsigned int HAGNECAGAPL_TypeDefinitionIndex = 74729;

class HAGNECAGAPL : public ::ILAGIDEHCJG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGNECAGAPL__CTOR_OFFSET))(this);
	}

	::System::Void KHANFCDHIDK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGNECAGAPL_KHANFCDHIDK_OFFSET))(this);
	}

	::System::Void DEJBOKDOGCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGNECAGAPL_DEJBOKDOGCD_OFFSET))(this);
	}

	::System::Void KHJELIBOECB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGNECAGAPL_KHJELIBOECB_OFFSET))(this);
	}

	::System::Void MAIINOIHKBB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAGNECAGAPL_MAIINOIHKBB_OFFSET))(this);
	}

	static ::System::Void BHBJOIHDCNP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAGNECAGAPL_BHBJOIHDCNP_OFFSET))();
	}
};
