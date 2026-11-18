#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define PHJDHCFEBFO_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1DCA69D0)
#define PHJDHCFEBFO_NANNBCKPGKB_OFFSET UNITYSDK_OFFSET(0x1DCA6A60)
#define PHJDHCFEBFO_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1DCA6A10)
#define PHJDHCFEBFO_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1DCA6A20)
#define PHJDHCFEBFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA72F0)

inline static constexpr unsigned int PHJDHCFEBFO_TypeDefinitionIndex = 93925;

class PHJDHCFEBFO
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJDHCFEBFO__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJDHCFEBFO_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJDHCFEBFO_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHJDHCFEBFO_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* NANNBCKPGKB()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + PHJDHCFEBFO_NANNBCKPGKB_OFFSET))();
	}
};
