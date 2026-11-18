#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define AHDNMGDDINH_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x706340)
#define AHDNMGDDINH_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x706330)
#define AHDNMGDDINH_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x706290)

inline static constexpr unsigned int AHDNMGDDINH_TypeDefinitionIndex = 65066;

struct alignas(8) AHDNMGDDINH
{
	::System::String* DJJGLILJKEA; // 0x10
	::System::Int32 DNHBLFJEOJN; // 0x18
	::System::Int32 CANFFIBPIHM; // 0x1C
	::UnityEngine::Vector2 OFCDEEGKPPJ; // 0x20
	::UnityEngine::Vector2 ONMLJFDHMDN; // 0x28
	::System::Boolean JFNLEJCADCM; // 0x30

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + AHDNMGDDINH_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHDNMGDDINH_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + AHDNMGDDINH_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
