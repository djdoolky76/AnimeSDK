#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define CEOPMCHBGNM_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x78F8D0)
#define CEOPMCHBGNM_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x78F8C0)
#define CEOPMCHBGNM_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x78F820)

inline static constexpr unsigned int CEOPMCHBGNM_TypeDefinitionIndex = 63818;

struct alignas(8) CEOPMCHBGNM
{
	::System::String* MGEDBKBHJPM; // 0x10
	::System::Int32 DFOGMAHNMLK; // 0x18

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CEOPMCHBGNM_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOPMCHBGNM_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CEOPMCHBGNM_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
