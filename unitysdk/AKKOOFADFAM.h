#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define AKKOOFADFAM_FEGJOOKKJGM_OFFSET UNITYSDK_OFFSET(0x1DAAF0D0)
#define AKKOOFADFAM_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1DAAF040)
#define AKKOOFADFAM_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1DAAF080)
#define AKKOOFADFAM_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1DAAF090)
#define AKKOOFADFAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAAF9B0)

inline static constexpr unsigned int AKKOOFADFAM_TypeDefinitionIndex = 93843;

class AKKOOFADFAM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKOOFADFAM__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKOOFADFAM_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKOOFADFAM_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKKOOFADFAM_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* FEGJOOKKJGM()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + AKKOOFADFAM_FEGJOOKKJGM_OFFSET))();
	}
};
