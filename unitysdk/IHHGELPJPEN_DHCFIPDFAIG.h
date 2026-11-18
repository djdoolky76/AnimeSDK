#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;
class GOMOBPHJHCO;

#define IHHGELPJPEN_DHCFIPDFAIG_INABHKHIFPA_OFFSET UNITYSDK_OFFSET(0xB9347D0)
#define IHHGELPJPEN_DHCFIPDFAIG__CTOR_OFFSET UNITYSDK_OFFSET(0xB9347C0)

inline static constexpr unsigned int IHHGELPJPEN_DHCFIPDFAIG_TypeDefinitionIndex = 57112;

class IHHGELPJPEN_DHCFIPDFAIG : public ::System::Object
{
public:
	::BPHGNMNLLHF* JNNLPBBEIEM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHHGELPJPEN_DHCFIPDFAIG__CTOR_OFFSET))(this);
	}

	::System::Boolean INABHKHIFPA(::GOMOBPHJHCO* EEDDICPIOCN)
	{
		return ((::System::Boolean(*)(::PVOID, ::GOMOBPHJHCO*))((::PBYTE)hIl2Cpp + IHHGELPJPEN_DHCFIPDFAIG_INABHKHIFPA_OFFSET))(this, EEDDICPIOCN);
	}
};
