#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AFMMAIKKACF;
class HNKDEDHAIIH;
namespace System { class Action; }

#define HNKDEDHAIIH_IFMEOPJPLCO_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x16CFFA70)
#define HNKDEDHAIIH_IFMEOPJPLCO_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x16CFFC00)
#define HNKDEDHAIIH_IFMEOPJPLCO__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFF9D0)

inline static constexpr unsigned int HNKDEDHAIIH_IFMEOPJPLCO_TypeDefinitionIndex = 51310;

class HNKDEDHAIIH_IFMEOPJPLCO : public ::System::Object
{
public:
	::System::Action* DLMJCFBENGB; // 0x10
	::HNKDEDHAIIH* KLHPEBKNIFB; // 0x18
	::AFMMAIKKACF* AAOCANGHBDG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKDEDHAIIH_IFMEOPJPLCO__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKDEDHAIIH_IFMEOPJPLCO_MJMKFFANPBL_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNKDEDHAIIH_IFMEOPJPLCO_PEJFEPJJDMI_OFFSET))(this);
	}
};
