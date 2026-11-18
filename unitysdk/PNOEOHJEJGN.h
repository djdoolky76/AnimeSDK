#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }

#define PNOEOHJEJGN_DILABNGJPMN_OFFSET UNITYSDK_OFFSET(0x8CCE00)
#define PNOEOHJEJGN_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x8CCE80)
#define PNOEOHJEJGN_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x8CCDF0)
#define PNOEOHJEJGN_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x8CCD50)

inline static constexpr unsigned int PNOEOHJEJGN_TypeDefinitionIndex = 61935;

struct alignas(4) PNOEOHJEJGN
{
	::System::Boolean CJFBJLKGGNG; // 0x10
	::System::Boolean NOKBBHKCGPH; // 0x11
	::System::Boolean MMMJAKKNAAB; // 0x12
	::System::Byte _padding0[0x5];
	::OMGFCFDABLN APKMGACELPI; // 0x18
	::OMGFCFDABLN AOOFEFPDMLF; // 0x30

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + PNOEOHJEJGN_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEOHJEJGN_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean DILABNGJPMN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PNOEOHJEJGN_DILABNGJPMN_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + PNOEOHJEJGN_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
