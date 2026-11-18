#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define DNJGCKKGBKH_EPLHDHDHPOD_ECGNIOLCBPB_OFFSET UNITYSDK_OFFSET(0x1545BF40)
#define DNJGCKKGBKH_EPLHDHDHPOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1545B660)

inline static constexpr unsigned int DNJGCKKGBKH_EPLHDHDHPOD_TypeDefinitionIndex = 76755;

class DNJGCKKGBKH_EPLHDHDHPOD : public ::System::Object
{
public:
	::UnityEngine::GameObject* JEIDPPCEHLD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGCKKGBKH_EPLHDHDHPOD__CTOR_OFFSET))(this);
	}

	::System::Void ECGNIOLCBPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNJGCKKGBKH_EPLHDHDHPOD_ECGNIOLCBPB_OFFSET))(this);
	}
};
