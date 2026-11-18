#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FANBKJPNEDB;
class NNFHIJPPAEN;

#define AMJCFGOGENM_PBPKFKGCOPN_OFEOPLPLNBH_OFFSET UNITYSDK_OFFSET(0x16D92730)
#define AMJCFGOGENM_PBPKFKGCOPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16D92720)

inline static constexpr unsigned int AMJCFGOGENM_PBPKFKGCOPN_TypeDefinitionIndex = 92760;

class AMJCFGOGENM_PBPKFKGCOPN : public ::System::Object
{
public:
	::NNFHIJPPAEN* GDINHGLCODO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_PBPKFKGCOPN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFEOPLPLNBH(::FANBKJPNEDB* HOPLKNFEMKI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + AMJCFGOGENM_PBPKFKGCOPN_OFEOPLPLNBH_OFFSET))(this, HOPLKNFEMKI);
	}
};
