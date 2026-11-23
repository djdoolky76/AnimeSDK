#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B69B3F729FD95A92_A4AC4311C5D5F7C6_OFFSET UNITYSDK_OFFSET(0x201F660)
#define B69B3F729FD95A92_BC855F51B3A4DA36_OFFSET UNITYSDK_OFFSET(0x201F5A0)
#define B69B3F729FD95A92__CTOR_OFFSET UNITYSDK_OFFSET(0x201F720)

inline static constexpr unsigned int B69B3F729FD95A92_TypeDefinitionIndex = 8208;

class B69B3F729FD95A92 : public ::System::Object
{
public:
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x10
	::System::Single BB3358D08F4B5900; // 0x1C
	::System::Single E8908CB4C4784B4B; // 0x20
	::System::Single F90AB8CA5E25D301; // 0x24
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* E61AE0A1D04637AD; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Single>* ADAAF82B3DD62CE7; // 0x30
	::System::Single EC9562F5657777CA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B69B3F729FD95A92__CTOR_OFFSET))(this);
	}

	::System::Single BC855F51B3A4DA36(::System::UInt32 A98376F87C577798)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B69B3F729FD95A92_BC855F51B3A4DA36_OFFSET))(this, A98376F87C577798);
	}

	::System::Single A4AC4311C5D5F7C6(::System::UInt32 A0E15746C5AB2C92)
	{
		return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + B69B3F729FD95A92_A4AC4311C5D5F7C6_OFFSET))(this, A0E15746C5AB2C92);
	}
};
