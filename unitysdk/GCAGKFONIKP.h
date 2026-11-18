#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJMIHLFPAHH.h"
#include "unitysdk/JGLIFHIAIEH.h"

class DFEFCOAAPGK;

#define GCAGKFONIKP_LOICNFEIDNC_OFFSET UNITYSDK_OFFSET(0x1CCB5860)
#define GCAGKFONIKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB5850)

inline static constexpr unsigned int GCAGKFONIKP_TypeDefinitionIndex = 94214;

class GCAGKFONIKP : public ::OJMIHLFPAHH
{
public:
	::System::Void _ctor(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + GCAGKFONIKP__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean LOICNFEIDNC(::JGLIFHIAIEH IECOJPMPJMP, ::System::Single EEJBAJHPONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + GCAGKFONIKP_LOICNFEIDNC_OFFSET))(this, IECOJPMPJMP, EEJBAJHPONK);
	}
};
