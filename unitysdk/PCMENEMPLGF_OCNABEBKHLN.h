#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define PCMENEMPLGF_OCNABEBKHLN_ANCFMBMLFPB_OFFSET UNITYSDK_OFFSET(0x1AFD6CD0)
#define PCMENEMPLGF_OCNABEBKHLN_JAPDKOBMHIA_OFFSET UNITYSDK_OFFSET(0x1AFD6CB0)
#define PCMENEMPLGF_OCNABEBKHLN_OOAMJNJIJCH_OFFSET UNITYSDK_OFFSET(0x1AFD6CC0)
#define PCMENEMPLGF_OCNABEBKHLN__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD6CA0)

inline static constexpr unsigned int PCMENEMPLGF_OCNABEBKHLN_TypeDefinitionIndex = 62829;

class PCMENEMPLGF_OCNABEBKHLN : public ::System::Object
{
public:
	::System::String* FNJPKKAHJAJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OCNABEBKHLN__CTOR_OFFSET))(this);
	}

	::System::String* JAPDKOBMHIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OCNABEBKHLN_JAPDKOBMHIA_OFFSET))(this);
	}

	::System::String* OOAMJNJIJCH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OCNABEBKHLN_OOAMJNJIJCH_OFFSET))(this);
	}

	::System::String* ANCFMBMLFPB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCMENEMPLGF_OCNABEBKHLN_ANCFMBMLFPB_OFFSET))(this);
	}
};
