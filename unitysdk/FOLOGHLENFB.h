#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIMOCFJBCGD.h"
#include "unitysdk/Share/EItemType.h"
#include "unitysdk/JGLPBGDHHPG.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FOLOGHLENFB_DLIPMGPPCFN_OFFSET UNITYSDK_OFFSET(0x152C64D0)
#define FOLOGHLENFB_KLHHNLNMFCA_OFFSET UNITYSDK_OFFSET(0x152C6430)
#define FOLOGHLENFB__CTOR_OFFSET UNITYSDK_OFFSET(0x152C6420)

inline static constexpr unsigned int FOLOGHLENFB_TypeDefinitionIndex = 10594;

class FOLOGHLENFB : public ::MIMOCFJBCGD
{
public:
	::System::Void _ctor(::JGLPBGDHHPG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JGLPBGDHHPG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FOLOGHLENFB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KLHHNLNMFCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLOGHLENFB_KLHHNLNMFCA_OFFSET))(this);
	}

	::Share::EItemType DLIPMGPPCFN()
	{
		return ((::Share::EItemType(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLOGHLENFB_DLIPMGPPCFN_OFFSET))(this);
	}
};
