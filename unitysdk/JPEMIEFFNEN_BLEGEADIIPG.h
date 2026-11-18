#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AJJMHOGKDNF.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/HDNPAPNHIIG.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

class ONDCMMIBPHD;

#define JPEMIEFFNEN_BLEGEADIIPG_HHANBFBHFBK_OFFSET UNITYSDK_OFFSET(0x1C373EB0)
#define JPEMIEFFNEN_BLEGEADIIPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1C373EA0)

inline static constexpr unsigned int JPEMIEFFNEN_BLEGEADIIPG_TypeDefinitionIndex = 68746;

class JPEMIEFFNEN_BLEGEADIIPG : public ::System::Object
{
public:
	::AJJMHOGKDNF EJFGMAHJMHK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_BLEGEADIIPG__CTOR_OFFSET))(this);
	}

	::System::Boolean HHANBFBHFBK(::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*> DLBHJOGKNOC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::HDNPAPNHIIG, ::ONDCMMIBPHD*>))((::PBYTE)hIl2Cpp + JPEMIEFFNEN_BLEGEADIIPG_HHANBFBHFBK_OFFSET))(this, DLBHJOGKNOC);
	}
};
