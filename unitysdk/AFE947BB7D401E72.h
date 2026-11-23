#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B0798DBF7CDAA4F7.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define AFE947BB7D401E72_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x166BD50)
#define AFE947BB7D401E72__CTOR_OFFSET UNITYSDK_OFFSET(0x166BDD0)

inline static constexpr unsigned int AFE947BB7D401E72_TypeDefinitionIndex = 65;

class AFE947BB7D401E72 : public ::B0798DBF7CDAA4F7
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AFE947BB7D401E72__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFE947BB7D401E72_FCC7443573DD0222_OFFSET))(this);
	}
};
