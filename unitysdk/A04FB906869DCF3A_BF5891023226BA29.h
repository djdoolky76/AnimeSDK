#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { class String; }
namespace UnityEngine { class Animation; }

#define A04FB906869DCF3A_BF5891023226BA29_F2E38EB638F8E2C6_OFFSET UNITYSDK_OFFSET(0x1F05390)
#define A04FB906869DCF3A_BF5891023226BA29__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A04FB906869DCF3A_BF5891023226BA29_TypeDefinitionIndex = 7438;

class A04FB906869DCF3A_BF5891023226BA29 : public ::System::Object
{
public:
	::UnityEngine::Animation* A1BFFB1E0339BC80; // 0x10
	::System::String* A6689282F43EA627; // 0x18
	::A04FB906869DCF3A* A544919C800E2923; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A04FB906869DCF3A_BF5891023226BA29__CTOR_OFFSET))(this);
	}

	::System::Boolean F2E38EB638F8E2C6(::System::Single BAF8A3E3C5E8EAEF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + A04FB906869DCF3A_BF5891023226BA29_F2E38EB638F8E2C6_OFFSET))(this, BAF8A3E3C5E8EAEF);
	}
};
