#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class APKEHDDPGOD;

#define OMGAIHDFKIN_ODKJJOPMJPK_BJHJOLJEMJG_OFFSET UNITYSDK_OFFSET(0x16C1DF50)
#define OMGAIHDFKIN_ODKJJOPMJPK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1DF40)

inline static constexpr unsigned int OMGAIHDFKIN_ODKJJOPMJPK_TypeDefinitionIndex = 89340;

class OMGAIHDFKIN_ODKJJOPMJPK : public ::System::Object
{
public:
	::System::Int32 PKMFBJMJCOO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_ODKJJOPMJPK__CTOR_OFFSET))(this);
	}

	::System::Boolean BJHJOLJEMJG(::APKEHDDPGOD* MOBNMDEDJIP)
	{
		return ((::System::Boolean(*)(::PVOID, ::APKEHDDPGOD*))((::PBYTE)hIl2Cpp + OMGAIHDFKIN_ODKJJOPMJPK_BJHJOLJEMJG_OFFSET))(this, MOBNMDEDJIP);
	}
};
