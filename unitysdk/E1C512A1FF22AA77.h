#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABEBA93AD61764EF.h"

namespace UnityEngine { class VirtualShadowMap; }

#define E1C512A1FF22AA77_FC3208D7B8C7EE04_OFFSET UNITYSDK_OFFSET(0x2865850)
#define E1C512A1FF22AA77__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E1C512A1FF22AA77_TypeDefinitionIndex = 15997;

class E1C512A1FF22AA77 : public ::ABEBA93AD61764EF
{
public:
	::UnityEngine::VirtualShadowMap* E5C9A257CB05A2CC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1C512A1FF22AA77__CTOR_OFFSET))(this);
	}

	::System::Boolean FC3208D7B8C7EE04(::E1C512A1FF22AA77* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::E1C512A1FF22AA77*))((::PBYTE)hIl2Cpp + E1C512A1FF22AA77_FC3208D7B8C7EE04_OFFSET))(this, BEEE7A5A60941632);
	}
};
