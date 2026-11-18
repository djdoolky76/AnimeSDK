#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define JCNPEEBMGLH_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7CF3E0)
#define JCNPEEBMGLH_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7CF3B0)
#define JCNPEEBMGLH_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x7CF3C0)
#define JCNPEEBMGLH_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7CF310)

inline static constexpr unsigned int JCNPEEBMGLH_TypeDefinitionIndex = 86861;

struct alignas(8) JCNPEEBMGLH
{
	::System::String* OFNFILMCLIC; // 0x10
	::System::String* EIEMKJKMBOC; // 0x18

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + JCNPEEBMGLH_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNPEEBMGLH_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JCNPEEBMGLH_OAJEIDFGCII_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + JCNPEEBMGLH_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
