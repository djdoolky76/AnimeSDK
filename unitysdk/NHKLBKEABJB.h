#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NHKLBKEABJB_JOJDEGMHKKD_OFFSET UNITYSDK_OFFSET(0x630730)
#define NHKLBKEABJB__CCTOR_OFFSET UNITYSDK_OFFSET(0x105BA090)

inline static constexpr unsigned int NHKLBKEABJB_TypeDefinitionIndex = 91324;

struct alignas(4) NHKLBKEABJB
{
	static ::NHKLBKEABJB* StaticGet_FLFDAKGMMKJ()
	{
		return (::NHKLBKEABJB*)Il2CppClass::FromTypeDefinitionIndex(NHKLBKEABJB_TypeDefinitionIndex)->GetStaticField(0xE0F0);
	}
	::UnityEngine::Vector3 BKDBPNNGNPA; // 0x10
	::UnityEngine::Vector3 CONBBLDCMED; // 0x1C
	::UnityEngine::Vector3 LKCGCKABIOH; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHKLBKEABJB__CCTOR_OFFSET))();
	}

	::UnityEngine::Vector3 JOJDEGMHKKD()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NHKLBKEABJB_JOJDEGMHKKD_OFFSET))(this);
	}
};
