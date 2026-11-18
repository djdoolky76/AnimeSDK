#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJMIHLFPAHH.h"
#include "unitysdk/JGLIFHIAIEH.h"

class DFEFCOAAPGK;

#define DEKPMKEAGBN_LOICNFEIDNC_OFFSET UNITYSDK_OFFSET(0x1E1BB000)
#define DEKPMKEAGBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BAFF0)

inline static constexpr unsigned int DEKPMKEAGBN_TypeDefinitionIndex = 93807;

class DEKPMKEAGBN : public ::OJMIHLFPAHH
{
public:
	::System::Void _ctor(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + DEKPMKEAGBN__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean LOICNFEIDNC(::JGLIFHIAIEH IECOJPMPJMP, ::System::Single EEJBAJHPONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + DEKPMKEAGBN_LOICNFEIDNC_OFFSET))(this, IECOJPMPJMP, EEJBAJHPONK);
	}
};
