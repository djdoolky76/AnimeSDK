#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define ALMBBADNDOI_BLDFCGIMFIC_OFFSET UNITYSDK_OFFSET(0x1E4BFB90)
#define ALMBBADNDOI_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1E4BFB00)
#define ALMBBADNDOI_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1E4BFB40)
#define ALMBBADNDOI_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1E4BFB50)
#define ALMBBADNDOI__CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C0480)

inline static constexpr unsigned int ALMBBADNDOI_TypeDefinitionIndex = 94342;

class ALMBBADNDOI
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMBBADNDOI__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMBBADNDOI_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMBBADNDOI_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMBBADNDOI_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* BLDFCGIMFIC()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + ALMBBADNDOI_BLDFCGIMFIC_OFFSET))();
	}
};
