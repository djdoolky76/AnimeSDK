#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define JKKJJHBHFOE_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x71FEC0)
#define JKKJJHBHFOE_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x71FEB0)
#define JKKJJHBHFOE_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x71FE10)

inline static constexpr unsigned int JKKJJHBHFOE_TypeDefinitionIndex = 57930;

struct alignas(4) JKKJJHBHFOE
{
	::System::Int32 HOJDOJJGOBO; // 0x10
	::System::Int32 PENKJLGJAKK; // 0x14

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + JKKJJHBHFOE_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKJJHBHFOE_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + JKKJJHBHFOE_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
