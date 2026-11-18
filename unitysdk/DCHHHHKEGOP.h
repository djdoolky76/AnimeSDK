#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class RectTransform; }

#define DCHHHHKEGOP_BNOJFOHCMED_OFFSET UNITYSDK_OFFSET(0x193F8B30)
#define DCHHHHKEGOP__CTOR_OFFSET UNITYSDK_OFFSET(0x193F8B20)

inline static constexpr unsigned int DCHHHHKEGOP_TypeDefinitionIndex = 75744;

class DCHHHHKEGOP : public ::System::Object
{
public:
	::UnityEngine::RectTransform* ADEENCEMEEF; // 0x10
	::System::Single GDIPJHMLFHD; // 0x18

	::System::Void _ctor(::UnityEngine::RectTransform* MGOFOAFCFIJ, ::System::Single GDIPJHMLFHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::System::Single))((::PBYTE)hIl2Cpp + DCHHHHKEGOP__CTOR_OFFSET))(this, MGOFOAFCFIJ, GDIPJHMLFHD);
	}

	::UnityEngine::Vector2 BNOJFOHCMED(::System::Int32 ABHBKFJKINO, ::UnityEngine::RectTransform* EMDOIDLAFDB)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + DCHHHHKEGOP_BNOJFOHCMED_OFFSET))(this, ABHBKFJKINO, EMDOIDLAFDB);
	}
};
