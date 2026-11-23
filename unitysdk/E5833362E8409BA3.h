#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define E5833362E8409BA3_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x197ADF0)
#define E5833362E8409BA3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16514A0)
#define E5833362E8409BA3__CTOR_OFFSET UNITYSDK_OFFSET(0x197AEB0)

inline static constexpr unsigned int E5833362E8409BA3_TypeDefinitionIndex = 1663;

class E5833362E8409BA3 : public ::A375536B9B082594
{
public:
	::UnityEngine::Vector3 EF5E788F79595BE7; // 0x10
	::System::Boolean EEAA05D6771662EF; // 0x1C
	::System::Byte _padding0[0x3];
	::UnityEngine::Quaternion B14F5F733E2AD130; // 0x20
	::System::Single EFD7DBDE5BF28F03; // 0x30

	::System::Void _ctor(::E5833362E8409BA3* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::E5833362E8409BA3*))((::PBYTE)hIl2Cpp + E5833362E8409BA3__CTOR_OFFSET))(this, BEEE7A5A60941632);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + E5833362E8409BA3_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5833362E8409BA3__CTOR_1_OFFSET))(this);
	}
};
