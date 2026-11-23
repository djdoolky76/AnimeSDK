#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

inline static constexpr unsigned int FB4A4690786FB51A_TypeDefinitionIndex = 8429;

struct alignas(8) FB4A4690786FB51A
{
	::System::Boolean F68A7C0319B8A5BB; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* A7CCBCE1FE4450B0; // 0x18
	::System::Boolean B87E1C4B37594185; // 0x20
	::System::Byte _padding1[0x3];
	::UnityEngine::Vector3 FD3325F8E72B031E; // 0x24
	::UnityEngine::Quaternion AEDDA199B2B1FBFD; // 0x30
	::System::Boolean EFDD34033E93BE30; // 0x40
	::System::Boolean BA9ACE8A1C61CE18; // 0x41
};
