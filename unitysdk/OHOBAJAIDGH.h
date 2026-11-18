#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EOAHOOCNDHM.h"

#define OHOBAJAIDGH_DBLKNCELBOA_OFFSET UNITYSDK_OFFSET(0xE152820)
#define OHOBAJAIDGH_FDBLPCNDOKF_OFFSET UNITYSDK_OFFSET(0xE1528A0)
#define OHOBAJAIDGH_OMJECMNKBMO_1_OFFSET UNITYSDK_OFFSET(0xE152610)
#define OHOBAJAIDGH_OMJECMNKBMO_OFFSET UNITYSDK_OFFSET(0xE1524E0)
#define OHOBAJAIDGH__CTOR_OFFSET UNITYSDK_OFFSET(0xE152890)

inline static constexpr unsigned int OHOBAJAIDGH_TypeDefinitionIndex = 86369;

class OHOBAJAIDGH : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHOBAJAIDGH__CTOR_OFFSET))(this);
	}

	::EOAHOOCNDHM OMJECMNKBMO(::System::Boolean EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OHOBAJAIDGH_OMJECMNKBMO_OFFSET))(this, EGEGIMGMJHN);
	}

	::EOAHOOCNDHM OMJECMNKBMO_1(::System::Object* EGEGIMGMJHN)
	{
		return ((::EOAHOOCNDHM(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OHOBAJAIDGH_OMJECMNKBMO_1_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean DBLKNCELBOA(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Boolean& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Boolean&))((::PBYTE)hIl2Cpp + OHOBAJAIDGH_DBLKNCELBOA_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}

	::System::Boolean FDBLPCNDOKF(::EOAHOOCNDHM& EGEGIMGMJHN, ::System::Boolean& HFMHOELKCAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::EOAHOOCNDHM&, ::System::Boolean&))((::PBYTE)hIl2Cpp + OHOBAJAIDGH_FDBLPCNDOKF_OFFSET))(this, EGEGIMGMJHN, HFMHOELKCAJ);
	}
};
