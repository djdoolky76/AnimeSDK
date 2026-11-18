#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define HLLMHIAANOG_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x773450)
#define HLLMHIAANOG_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x773440)
#define HLLMHIAANOG_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7733A0)

inline static constexpr unsigned int HLLMHIAANOG_TypeDefinitionIndex = 59823;

struct alignas(8) HLLMHIAANOG
{
	::System::Int32 DFOGMAHNMLK; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* GKOEFPJEPHM; // 0x18
	::OMGFCFDABLN EOIOBFDDDHN; // 0x20
	::System::Int32 COMIBBNLGMK; // 0x38
	::System::Boolean CNFAAKBNDBA; // 0x3C

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HLLMHIAANOG_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLMHIAANOG_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HLLMHIAANOG_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
