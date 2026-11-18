#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class BFFHHODMHKH;
class KKJKAKMOCJC_CMLFKBPLGCG;

#define KKJKAKMOCJC_PJANKKAFIJF_CLGFKBLCPBH_OFFSET UNITYSDK_OFFSET(0x15168680)
#define KKJKAKMOCJC_PJANKKAFIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x15168670)

inline static constexpr unsigned int KKJKAKMOCJC_PJANKKAFIJF_TypeDefinitionIndex = 66236;

class KKJKAKMOCJC_PJANKKAFIJF : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::KKJKAKMOCJC_CMLFKBPLGCG* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_PJANKKAFIJF__CTOR_OFFSET))(this);
	}

	::System::Void CLGFKBLCPBH(::BFFHHODMHKH* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::BFFHHODMHKH*))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_PJANKKAFIJF_CLGFKBLCPBH_OFFSET))(this, DFMKILICPFB);
	}
};
