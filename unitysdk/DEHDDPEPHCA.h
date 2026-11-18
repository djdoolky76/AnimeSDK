#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJMIHLFPAHH.h"
#include "unitysdk/JGLIFHIAIEH.h"

class DFEFCOAAPGK;

#define DEHDDPEPHCA_LOICNFEIDNC_OFFSET UNITYSDK_OFFSET(0x1D6925F0)
#define DEHDDPEPHCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6925E0)

inline static constexpr unsigned int DEHDDPEPHCA_TypeDefinitionIndex = 93690;

class DEHDDPEPHCA : public ::OJMIHLFPAHH
{
public:
	::System::Void _ctor(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + DEHDDPEPHCA__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean LOICNFEIDNC(::JGLIFHIAIEH IECOJPMPJMP, ::System::Single EEJBAJHPONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + DEHDDPEPHCA_LOICNFEIDNC_OFFSET))(this, IECOJPMPJMP, EEJBAJHPONK);
	}
};
