#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MaterialParameterRewriter_ApplicationScope.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int MaterialParameterRewriter_ExtVectorSlot_TypeDefinitionIndex = 26449;

struct alignas(8) MaterialParameterRewriter_ExtVectorSlot
{
	::System::Boolean enabled; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* paramName; // 0x18
	::UnityEngine::Vector4 value; // 0x20
	::MaterialParameterRewriter_ApplicationScope scope; // 0x30
	::System::Byte _padding1[0x4];
	::UnityEngine::Transform* targetNode; // 0x38
	::System::Boolean includeChildren; // 0x40
};
