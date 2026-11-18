#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PCMENEMPLGF;
namespace System { class String; }

#define PCMENEMPLGF_CFIAOAKGFCO_AHNFOGPNFML_OFFSET UNITYSDK_OFFSET(0x16001200)
#define PCMENEMPLGF_CFIAOAKGFCO_OFGEIENBMME_OFFSET UNITYSDK_OFFSET(0x160013F0)
#define PCMENEMPLGF_CFIAOAKGFCO_POAHOPINMON_OFFSET UNITYSDK_OFFSET(0x16001030)
#define PCMENEMPLGF_CFIAOAKGFCO__CTOR_OFFSET UNITYSDK_OFFSET(0x16001020)

inline static constexpr unsigned int PCMENEMPLGF_CFIAOAKGFCO_TypeDefinitionIndex = 62875;

class PCMENEMPLGF_CFIAOAKGFCO : public ::System::Object
{
public:
	::System::String* BABJLGEJPMG; // 0x10
	::PCMENEMPLGF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CFIAOAKGFCO__CTOR_OFFSET))(this);
	}

	::System::Boolean POAHOPINMON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CFIAOAKGFCO_POAHOPINMON_OFFSET))(this);
	}

	::System::String* AHNFOGPNFML()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CFIAOAKGFCO_AHNFOGPNFML_OFFSET))(this);
	}

	::System::String* OFGEIENBMME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_CFIAOAKGFCO_OFGEIENBMME_OFFSET))(this);
	}
};
