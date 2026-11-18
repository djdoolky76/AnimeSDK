#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

inline static constexpr unsigned int AKFCOMPHBLJ_GJJLCMBEHME_TypeDefinitionIndex = 77063;

struct alignas(8) AKFCOMPHBLJ_GJJLCMBEHME
{
	::System::Boolean KLLBKLCMOJJ; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::GameObject* KGJNEJMKIJK; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* OPOJFBLAALI; // 0x20
};
