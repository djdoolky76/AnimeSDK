#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define AFEIBACDAKO_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1D9A77A0)
#define AFEIBACDAKO_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1D9A77E0)
#define AFEIBACDAKO_OCMCMGPAGMM_OFFSET UNITYSDK_OFFSET(0x1D9A7830)
#define AFEIBACDAKO_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1D9A77F0)
#define AFEIBACDAKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A8120)

inline static constexpr unsigned int AFEIBACDAKO_TypeDefinitionIndex = 93694;

class AFEIBACDAKO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEIBACDAKO__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEIBACDAKO_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEIBACDAKO_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFEIBACDAKO_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* OCMCMGPAGMM()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + AFEIBACDAKO_OCMCMGPAGMM_OFFSET))();
	}
};
