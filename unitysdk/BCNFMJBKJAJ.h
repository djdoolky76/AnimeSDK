#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define BCNFMJBKJAJ_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1DAB11E0)
#define BCNFMJBKJAJ_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1DAB1220)
#define BCNFMJBKJAJ_OAJHDAHGIGI_OFFSET UNITYSDK_OFFSET(0x1DAB1270)
#define BCNFMJBKJAJ_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1DAB1230)
#define BCNFMJBKJAJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB1BD0)

inline static constexpr unsigned int BCNFMJBKJAJ_TypeDefinitionIndex = 93371;

class BCNFMJBKJAJ
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNFMJBKJAJ__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNFMJBKJAJ_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNFMJBKJAJ_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BCNFMJBKJAJ_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* OAJHDAHGIGI()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + BCNFMJBKJAJ_OAJHDAHGIGI_OFFSET))();
	}
};
