#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JCJHGBANDKO;

#define JCJHGBANDKO_KCOACCELGJB_HHLOOHCMFBB_OFFSET UNITYSDK_OFFSET(0x1382F7E0)
#define JCJHGBANDKO_KCOACCELGJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1382F7D0)

inline static constexpr unsigned int JCJHGBANDKO_KCOACCELGJB_TypeDefinitionIndex = 85316;

class JCJHGBANDKO_KCOACCELGJB : public ::System::Object
{
public:
	::JCJHGBANDKO* KLHPEBKNIFB; // 0x10
	::System::Single CGDOFPGLLLF; // 0x18
	::UnityEngine::Bounds HMOFJMCHBBO; // 0x1C
	::System::Single FJDMDOONDFG; // 0x34
	::UnityEngine::Vector2 LDAAJPFPMEJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCJHGBANDKO_KCOACCELGJB__CTOR_OFFSET))(this);
	}

	::System::Boolean HHLOOHCMFBB(::UnityEngine::Vector2 CKPGOKHECCH)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JCJHGBANDKO_KCOACCELGJB_HHLOOHCMFBB_OFFSET))(this, CKPGOKHECCH);
	}
};
