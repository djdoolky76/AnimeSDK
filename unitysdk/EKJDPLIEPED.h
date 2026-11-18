#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define EKJDPLIEPED_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1D9F6FA0)
#define EKJDPLIEPED_MBNGFDNFKAH_OFFSET UNITYSDK_OFFSET(0x1D9F7030)
#define EKJDPLIEPED_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1D9F6FE0)
#define EKJDPLIEPED_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1D9F6FF0)
#define EKJDPLIEPED__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F7920)

inline static constexpr unsigned int EKJDPLIEPED_TypeDefinitionIndex = 94158;

class EKJDPLIEPED
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJDPLIEPED__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJDPLIEPED_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJDPLIEPED_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJDPLIEPED_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* MBNGFDNFKAH()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + EKJDPLIEPED_MBNGFDNFKAH_OFFSET))();
	}
};
