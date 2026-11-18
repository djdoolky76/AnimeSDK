#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define KNOHFGCKLFA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18648E90)
#define KNOHFGCKLFA__CTOR_OFFSET UNITYSDK_OFFSET(0x7CE3F0)

inline static constexpr unsigned int KNOHFGCKLFA_TypeDefinitionIndex = 66363;

struct alignas(4) KNOHFGCKLFA
{
	static ::KNOHFGCKLFA* StaticGet_CDLDFCAJEKI()
	{
		return (::KNOHFGCKLFA*)Il2CppClass::FromTypeDefinitionIndex(KNOHFGCKLFA_TypeDefinitionIndex)->GetStaticField(0xDAF0);
	}
	::UnityEngine::Vector3 KBHFBLJPFJH; // 0x10
	::UnityEngine::Vector3 CFJFMMGPGKE; // 0x1C
	::UnityEngine::Vector3 BBCODANAFGI; // 0x28

	::System::Void _ctor(::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 BBCODANAFGI, ::UnityEngine::Vector3 CFJFMMGPGKE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KNOHFGCKLFA__CTOR_OFFSET))(this, KBHFBLJPFJH, BBCODANAFGI, CFJFMMGPGKE);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNOHFGCKLFA__CCTOR_OFFSET))();
	}
};
