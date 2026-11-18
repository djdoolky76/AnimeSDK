#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define BNPMCBMLEBA_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1D68D910)
#define BNPMCBMLEBA_FKMJBLHFMAF_OFFSET UNITYSDK_OFFSET(0x1D68D9A0)
#define BNPMCBMLEBA_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1D68D950)
#define BNPMCBMLEBA_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1D68D960)
#define BNPMCBMLEBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E290)

inline static constexpr unsigned int BNPMCBMLEBA_TypeDefinitionIndex = 94256;

class BNPMCBMLEBA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPMCBMLEBA__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPMCBMLEBA_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPMCBMLEBA_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPMCBMLEBA_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* FKMJBLHFMAF()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + BNPMCBMLEBA_FKMJBLHFMAF_OFFSET))();
	}
};
