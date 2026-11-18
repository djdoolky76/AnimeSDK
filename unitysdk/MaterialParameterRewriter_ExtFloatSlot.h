#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MaterialParameterRewriter_ApplicationScope.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int MaterialParameterRewriter_ExtFloatSlot_TypeDefinitionIndex = 26450;

struct alignas(8) MaterialParameterRewriter_ExtFloatSlot
{
	::System::Boolean enabled; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* paramName; // 0x18
	::System::Single value; // 0x20
	::MaterialParameterRewriter_ApplicationScope scope; // 0x24
	::UnityEngine::Transform* targetNode; // 0x28
	::System::Boolean includeChildren; // 0x30
};
