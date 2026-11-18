#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MaterialParameterRewriter_ApplicationScope.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine { class Transform; }

inline static constexpr unsigned int MaterialParameterRewriter_ExtColorSlot_TypeDefinitionIndex = 26452;

struct alignas(8) MaterialParameterRewriter_ExtColorSlot
{
	::System::Boolean enabled; // 0x10
	::System::Byte _padding0[0x7];
	::System::String* paramName; // 0x18
	::UnityEngine::Color value; // 0x20
	::System::Single colorIntensity; // 0x30
	::MaterialParameterRewriter_ApplicationScope scope; // 0x34
	::UnityEngine::Transform* targetNode; // 0x38
	::System::Boolean includeChildren; // 0x40
};
