#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDOANFNDFEM.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

inline static constexpr unsigned int ILNNGINIHDO_TypeDefinitionIndex = 95008;

struct alignas(8) ILNNGINIHDO
{
	::UnityEngine::Vector2 EFEJBBFGKDH; // 0x10
	::UnityEngine::Vector2 KOLDDNPLOAP; // 0x18
	::System::Boolean KKMMIJOEMDL; // 0x20
	::System::Byte _padding0[0x7];
	::Il2CppArray<::BDOANFNDFEM>* DCFEOAFCCDP; // 0x28
	::System::Boolean ILKJAINKMJA; // 0x30
};
