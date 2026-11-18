#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJMIHLFPAHH.h"
#include "unitysdk/JGLIFHIAIEH.h"

class DFEFCOAAPGK;

#define HMFADAONJKI_LOICNFEIDNC_OFFSET UNITYSDK_OFFSET(0x1E721A80)
#define HMFADAONJKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E721A70)

inline static constexpr unsigned int HMFADAONJKI_TypeDefinitionIndex = 94196;

class HMFADAONJKI : public ::OJMIHLFPAHH
{
public:
	::System::Void _ctor(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + HMFADAONJKI__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean LOICNFEIDNC(::JGLIFHIAIEH IECOJPMPJMP, ::System::Single EEJBAJHPONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + HMFADAONJKI_LOICNFEIDNC_OFFSET))(this, IECOJPMPJMP, EEJBAJHPONK);
	}
};
