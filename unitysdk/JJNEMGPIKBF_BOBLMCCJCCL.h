#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JJNEMGPIKBF_LGFPLGEEBHG;
namespace System { class String; }

#define JJNEMGPIKBF_BOBLMCCJCCL_DFEPENNJKME_OFFSET UNITYSDK_OFFSET(0x19460090)
#define JJNEMGPIKBF_BOBLMCCJCCL_NIBGOKFGNAH_OFFSET UNITYSDK_OFFSET(0x1945FF80)
#define JJNEMGPIKBF_BOBLMCCJCCL__CTOR_OFFSET UNITYSDK_OFFSET(0x1945FF70)

inline static constexpr unsigned int JJNEMGPIKBF_BOBLMCCJCCL_TypeDefinitionIndex = 65491;

class JJNEMGPIKBF_BOBLMCCJCCL : public ::System::Object
{
public:
	::JJNEMGPIKBF_LGFPLGEEBHG* EEMOEMFLABI; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNEMGPIKBF_BOBLMCCJCCL__CTOR_OFFSET))(this);
	}

	::System::String* NIBGOKFGNAH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNEMGPIKBF_BOBLMCCJCCL_NIBGOKFGNAH_OFFSET))(this);
	}

	::System::String* DFEPENNJKME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJNEMGPIKBF_BOBLMCCJCCL_DFEPENNJKME_OFFSET))(this);
	}
};
