#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AOJKLCGGPAK;
class CJIEIHEDMME;
class CJKHLPEHFLA;

#define OKPDMJIGIMH_OINPHOLIJHJ_IOLEGJEOOKA_OFFSET UNITYSDK_OFFSET(0x129438E0)
#define OKPDMJIGIMH_OINPHOLIJHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x129438D0)

inline static constexpr unsigned int OKPDMJIGIMH_OINPHOLIJHJ_TypeDefinitionIndex = 70746;

class OKPDMJIGIMH_OINPHOLIJHJ : public ::System::Object
{
public:
	::CJIEIHEDMME* LADPIPOMBJM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_OINPHOLIJHJ__CTOR_OFFSET))(this);
	}

	::CJKHLPEHFLA* IOLEGJEOOKA(::AOJKLCGGPAK* HAAEBCOBKFF)
	{
		return ((::CJKHLPEHFLA*(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + OKPDMJIGIMH_OINPHOLIJHJ_IOLEGJEOOKA_OFFSET))(this, HAAEBCOBKFF);
	}
};
