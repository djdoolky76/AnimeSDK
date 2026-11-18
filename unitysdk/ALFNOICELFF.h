#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJMIHLFPAHH.h"
#include "unitysdk/JGLIFHIAIEH.h"

class DFEFCOAAPGK;

#define ALFNOICELFF_LOICNFEIDNC_OFFSET UNITYSDK_OFFSET(0x1D3D1800)
#define ALFNOICELFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D17E0)

inline static constexpr unsigned int ALFNOICELFF_TypeDefinitionIndex = 93813;

class ALFNOICELFF : public ::OJMIHLFPAHH
{
public:
	::System::Void _ctor(::DFEFCOAAPGK* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::DFEFCOAAPGK*))((::PBYTE)hIl2Cpp + ALFNOICELFF__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Boolean LOICNFEIDNC(::JGLIFHIAIEH IECOJPMPJMP, ::System::Single EEJBAJHPONK)
	{
		return ((::System::Boolean(*)(::PVOID, ::JGLIFHIAIEH, ::System::Single))((::PBYTE)hIl2Cpp + ALFNOICELFF_LOICNFEIDNC_OFFSET))(this, IECOJPMPJMP, EEJBAJHPONK);
	}
};
