#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define KGNAEHLANOG_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7680A0)
#define KGNAEHLANOG_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x768090)
#define KGNAEHLANOG_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x767FF0)

inline static constexpr unsigned int KGNAEHLANOG_TypeDefinitionIndex = 38606;

struct alignas(4) KGNAEHLANOG
{
	::System::Int32 JGLFLHIJJGN; // 0x10
	::System::Int32 PENKJLGJAKK; // 0x14

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + KGNAEHLANOG_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGNAEHLANOG_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + KGNAEHLANOG_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
