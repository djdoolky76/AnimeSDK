#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }

#define KMHNILEOAPL_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x6EC7D0)
#define KMHNILEOAPL_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x6EC7C0)
#define KMHNILEOAPL_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x6EC720)

inline static constexpr unsigned int KMHNILEOAPL_TypeDefinitionIndex = 58256;

struct alignas(4) KMHNILEOAPL
{
	::UnityEngine::Vector2 DKGLIDNIGBK; // 0x10
	::System::Single PNKFHLKDFOB; // 0x18

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + KMHNILEOAPL_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHNILEOAPL_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + KMHNILEOAPL_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
