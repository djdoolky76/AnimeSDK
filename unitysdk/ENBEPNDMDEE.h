#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GOGALMLABHE.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define ENBEPNDMDEE_JBFBKGBKMIL_OFFSET UNITYSDK_OFFSET(0x7074F0)
#define ENBEPNDMDEE_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x707420)
#define ENBEPNDMDEE_JEBAEDHLENK_OFFSET UNITYSDK_OFFSET(0x707510)
#define ENBEPNDMDEE_KLPCCJEDJDK_OFFSET UNITYSDK_OFFSET(0x369FB0)
#define ENBEPNDMDEE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x7073D0)
#define ENBEPNDMDEE__CTOR_OFFSET UNITYSDK_OFFSET(0x707360)

inline static constexpr unsigned int ENBEPNDMDEE_TypeDefinitionIndex = 83393;

struct alignas(4) ENBEPNDMDEE
{
	::UnityEngine::Bounds _NMFKFCIBLGJ_k__BackingField; // 0x10
	::GOGALMLABHE _OODPPJGCIKF_k__BackingField; // 0x28
	::GOGALMLABHE _EEJMCMAALGF_k__BackingField; // 0x58

	::System::Void _ctor(::UnityEngine::Bounds CILGJGGKAGM, ::GOGALMLABHE FDCGJNLIJMH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::GOGALMLABHE))((::PBYTE)hIl2Cpp + ENBEPNDMDEE__CTOR_OFFSET))(this, CILGJGGKAGM, FDCGJNLIJMH);
	}

	::System::Void _ctor_1(::UnityEngine::Bounds CILGJGGKAGM, ::GOGALMLABHE FDCGJNLIJMH, ::System::Single BOGPAHGJOJK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::GOGALMLABHE, ::System::Single))((::PBYTE)hIl2Cpp + ENBEPNDMDEE__CTOR_1_OFFSET))(this, CILGJGGKAGM, FDCGJNLIJMH, BOGPAHGJOJK);
	}

	::UnityEngine::Bounds KLPCCJEDJDK()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBEPNDMDEE_KLPCCJEDJDK_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBEPNDMDEE_JDAPDDEOCEA_OFFSET))(this);
	}

	::GOGALMLABHE JBFBKGBKMIL()
	{
		return ((::GOGALMLABHE(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBEPNDMDEE_JBFBKGBKMIL_OFFSET))(this);
	}

	::GOGALMLABHE JEBAEDHLENK()
	{
		return ((::GOGALMLABHE(*)(::PVOID))((::PBYTE)hIl2Cpp + ENBEPNDMDEE_JEBAEDHLENK_OFFSET))(this);
	}
};
