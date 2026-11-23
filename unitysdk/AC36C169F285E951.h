#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAE593DDBDB916FA.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define AC36C169F285E951_BC627BFA937AF175_OFFSET UNITYSDK_OFFSET(0x17D7670)
#define AC36C169F285E951_FCC7443573DD0222_OFFSET UNITYSDK_OFFSET(0x17D75C0)
#define AC36C169F285E951__CTOR_OFFSET UNITYSDK_OFFSET(0x17D7720)

inline static constexpr unsigned int AC36C169F285E951_TypeDefinitionIndex = 978;

class AC36C169F285E951 : public ::AAE593DDBDB916FA
{
public:
	::System::Void _ctor(::UnityEngine::GameObject* A6BEFB09A5DF1AF7, ::UnityEngine::RectTransform* F9E6A5ABE3F78299)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + AC36C169F285E951__CTOR_OFFSET))(this, A6BEFB09A5DF1AF7, F9E6A5ABE3F78299);
	}

	::System::Void BC627BFA937AF175(::UnityEngine::Vector2 BFDC0BA71944D9AA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AC36C169F285E951_BC627BFA937AF175_OFFSET))(this, BFDC0BA71944D9AA);
	}

	::System::Void FCC7443573DD0222()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC36C169F285E951_FCC7443573DD0222_OFFSET))(this);
	}
};
