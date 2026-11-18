#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MEKLIGLLJKM;

#define PIKAMDOBGNL_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1D62A7C0)
#define PIKAMDOBGNL_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1D62A810)
#define PIKAMDOBGNL_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1D62A760)
#define PIKAMDOBGNL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D62A850)

inline static constexpr unsigned int PIKAMDOBGNL_TypeDefinitionIndex = 50109;

class PIKAMDOBGNL : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKAMDOBGNL__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIKAMDOBGNL_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void BBOMJDBNHIC(::MEKLIGLLJKM* POJEDACFDOF)
	{
		return ((::System::Void(*)(::PVOID, ::MEKLIGLLJKM*))((::PBYTE)hIl2Cpp + PIKAMDOBGNL_BBOMJDBNHIC_OFFSET))(this, POJEDACFDOF);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKAMDOBGNL_PHOADBJGFBE_OFFSET))(this);
	}
};
