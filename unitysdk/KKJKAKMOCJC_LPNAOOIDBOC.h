#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BFFHHODMHKH;
class KKJKAKMOCJC_DMINKNAAPLH;

#define KKJKAKMOCJC_LPNAOOIDBOC_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x157F34B0)
#define KKJKAKMOCJC_LPNAOOIDBOC__CTOR_OFFSET UNITYSDK_OFFSET(0x157F34A0)

inline static constexpr unsigned int KKJKAKMOCJC_LPNAOOIDBOC_TypeDefinitionIndex = 66244;

class KKJKAKMOCJC_LPNAOOIDBOC : public ::System::Object
{
public:
	::KKJKAKMOCJC_DMINKNAAPLH* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_LPNAOOIDBOC__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::BFFHHODMHKH* KEFDNGODJFE)
	{
		return ((::System::Void(*)(::PVOID, ::BFFHHODMHKH*))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_LPNAOOIDBOC_OKKMJKOAIKG_OFFSET))(this, KEFDNGODJFE);
	}
};
