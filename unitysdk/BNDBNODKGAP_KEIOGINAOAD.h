#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BNDBNODKGAP_GEJMMOILJIA;

#define BNDBNODKGAP_KEIOGINAOAD_OOMLPEIOHKB_OFFSET UNITYSDK_OFFSET(0x14C525E0)
#define BNDBNODKGAP_KEIOGINAOAD__CTOR_OFFSET UNITYSDK_OFFSET(0x14C525D0)

inline static constexpr unsigned int BNDBNODKGAP_KEIOGINAOAD_TypeDefinitionIndex = 78410;

class BNDBNODKGAP_KEIOGINAOAD : public ::System::Object
{
public:
	::BNDBNODKGAP_GEJMMOILJIA* ONLJAOFCNCH; // 0x10
	::System::Boolean GPCOBMKMJAN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_KEIOGINAOAD__CTOR_OFFSET))(this);
	}

	::System::Void OOMLPEIOHKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_KEIOGINAOAD_OOMLPEIOHKB_OFFSET))(this);
	}
};
