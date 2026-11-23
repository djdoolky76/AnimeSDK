#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFC4AEA2121EC272.h"

namespace UnityEngine { class Animator; }

#define AAA02BC7D1701550_EC3033C0485522FB_OFFSET UNITYSDK_OFFSET(0x21F37E0)
#define AAA02BC7D1701550_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x21F3740)
#define AAA02BC7D1701550__CTOR_OFFSET UNITYSDK_OFFSET(0x16665F0)

inline static constexpr unsigned int AAA02BC7D1701550_TypeDefinitionIndex = 8986;

class AAA02BC7D1701550 : public ::EFC4AEA2121EC272
{
public:
	::UnityEngine::Animator* A6E0C410734A354A; // 0x80

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAA02BC7D1701550_FFE59D93BEA6E2CA_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAA02BC7D1701550__CTOR_OFFSET))(this);
	}

	::System::Void EC3033C0485522FB(::System::Boolean F474C6F7BB48F31C)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AAA02BC7D1701550_EC3033C0485522FB_OFFSET))(this, F474C6F7BB48F31C);
	}
};
