#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define LICBJOLGMLE_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x749900)
#define LICBJOLGMLE_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7498F0)
#define LICBJOLGMLE_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x749850)

inline static constexpr unsigned int LICBJOLGMLE_TypeDefinitionIndex = 69910;

struct alignas(8) LICBJOLGMLE
{
	::System::Int32 DJJGLILJKEA; // 0x10
	::UnityEngine::Vector2 ILOJFPNKJII; // 0x14
	::System::Byte _padding0[0x4];
	::System::String* MMBEPFEDOEC; // 0x20
	::System::Boolean HIEHIBAAOLC; // 0x28

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LICBJOLGMLE_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + LICBJOLGMLE_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + LICBJOLGMLE_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
