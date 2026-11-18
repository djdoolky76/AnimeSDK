#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPPIIJMBPCA.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define GHPHOEBCLFF_AKOACLEPNAE_OFFSET UNITYSDK_OFFSET(0x116F8120)
#define GHPHOEBCLFF_FKOGHLLJDNB_OFFSET UNITYSDK_OFFSET(0x116F8140)
#define GHPHOEBCLFF_GOMBANOHOCA_OFFSET UNITYSDK_OFFSET(0x116F8130)
#define GHPHOEBCLFF_KODADAGONGH_OFFSET UNITYSDK_OFFSET(0x116F8150)
#define GHPHOEBCLFF__CTOR_OFFSET UNITYSDK_OFFSET(0x116F8110)

inline static constexpr unsigned int GHPHOEBCLFF_TypeDefinitionIndex = 83077;

class GHPHOEBCLFF : public ::System::Object
{
public:
	::System::String* _BLKLECANAGA_k__BackingField; // 0x10
	::NPPIIJMBPCA _GIKNNLKOOAH_k__BackingField; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPHOEBCLFF__CTOR_OFFSET))(this);
	}

	::System::String* AKOACLEPNAE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPHOEBCLFF_AKOACLEPNAE_OFFSET))(this);
	}

	::System::Void GOMBANOHOCA(::NPPIIJMBPCA EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::NPPIIJMBPCA))((::PBYTE)hIl2Cpp + GHPHOEBCLFF_GOMBANOHOCA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FKOGHLLJDNB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GHPHOEBCLFF_FKOGHLLJDNB_OFFSET))(this, EGEGIMGMJHN);
	}

	::NPPIIJMBPCA KODADAGONGH()
	{
		return ((::NPPIIJMBPCA(*)(::PVOID))((::PBYTE)hIl2Cpp + GHPHOEBCLFF_KODADAGONGH_OFFSET))(this);
	}
};
