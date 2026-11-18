#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNODOBIKMBK.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MNJDFBMAPCJ_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7AF780)
#define MNJDFBMAPCJ_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7AF770)
#define MNJDFBMAPCJ_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7AF6D0)

inline static constexpr unsigned int MNJDFBMAPCJ_TypeDefinitionIndex = 89627;

struct alignas(8) MNJDFBMAPCJ
{
	::System::String* DJJGLILJKEA; // 0x10
	::System::Int32 DNHBLFJEOJN; // 0x18
	::System::Int32 CANFFIBPIHM; // 0x1C
	::System::Collections::Generic::List_1<::KNODOBIKMBK>* BNKEEHDFLAG; // 0x20

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MNJDFBMAPCJ_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNJDFBMAPCJ_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + MNJDFBMAPCJ_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
