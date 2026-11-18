#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMGFCFDABLN.h"
#include "unitysdk/System/ValueType.h"

class LCFAKNCOMEF;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define HFPLNFLBBKI_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7B3E70)
#define HFPLNFLBBKI_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7B3E60)
#define HFPLNFLBBKI_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7B3DC0)

inline static constexpr unsigned int HFPLNFLBBKI_TypeDefinitionIndex = 47523;

struct alignas(8) HFPLNFLBBKI
{
	::System::String* MGEDBKBHJPM; // 0x10
	::System::Int32 IBGCODGDJOA; // 0x18
	::System::Byte _padding0[0x4];
	::OMGFCFDABLN NOOLOILNGPL; // 0x20
	::LCFAKNCOMEF* GPIOJBLKFAJ; // 0x38
	::System::String* NLHHNCBHNDO; // 0x40
	::System::String* MMBEPFEDOEC; // 0x48

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HFPLNFLBBKI_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFPLNFLBBKI_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + HFPLNFLBBKI_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
