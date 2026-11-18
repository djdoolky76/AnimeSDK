#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define IEBCDMJKEHB_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1E1C7DE0)
#define IEBCDMJKEHB_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1E1C7E20)
#define IEBCDMJKEHB_PAIPHKGJPHJ_OFFSET UNITYSDK_OFFSET(0x1E1C7E70)
#define IEBCDMJKEHB_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1E1C7E30)
#define IEBCDMJKEHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C8750)

inline static constexpr unsigned int IEBCDMJKEHB_TypeDefinitionIndex = 94264;

class IEBCDMJKEHB
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBCDMJKEHB__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBCDMJKEHB_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBCDMJKEHB_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBCDMJKEHB_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* PAIPHKGJPHJ()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + IEBCDMJKEHB_PAIPHKGJPHJ_OFFSET))();
	}
};
