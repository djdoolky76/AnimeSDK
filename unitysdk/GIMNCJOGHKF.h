#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGEDMNDIDHA.h"

namespace System { class String; }
template <typename T> class EILBPOADDGK_1;

#define GIMNCJOGHKF_ENLMNHEMDEA_OFFSET UNITYSDK_OFFSET(0x1D9FE000)
#define GIMNCJOGHKF_FHLAJOBHPND_OFFSET UNITYSDK_OFFSET(0x1D9FDF70)
#define GIMNCJOGHKF_NBMPHHICPIE_OFFSET UNITYSDK_OFFSET(0x1D9FDFB0)
#define GIMNCJOGHKF_PKOGNPKCHHE_OFFSET UNITYSDK_OFFSET(0x1D9FDFC0)
#define GIMNCJOGHKF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FE8E0)

inline static constexpr unsigned int GIMNCJOGHKF_TypeDefinitionIndex = 93515;

class GIMNCJOGHKF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMNCJOGHKF__CTOR_OFFSET))(this);
	}

	::System::String* FHLAJOBHPND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMNCJOGHKF_FHLAJOBHPND_OFFSET))(this);
	}

	::System::Int32 NBMPHHICPIE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMNCJOGHKF_NBMPHHICPIE_OFFSET))(this);
	}

	::EILBPOADDGK_1<::OGEDMNDIDHA>* PKOGNPKCHHE()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIMNCJOGHKF_PKOGNPKCHHE_OFFSET))(this);
	}

	static ::EILBPOADDGK_1<::OGEDMNDIDHA>* ENLMNHEMDEA()
	{
		return ((::EILBPOADDGK_1<::OGEDMNDIDHA>*(*)())((::PBYTE)hIl2Cpp + GIMNCJOGHKF_ENLMNHEMDEA_OFFSET))();
	}
};
