#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class EventHandler; }
namespace System::Xml::Linq { class XObjectChangeEventArgs; }

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XObjectChangeAnnotation_TypeDefinitionIndex = 3887;

	class XObjectChangeAnnotation : public ::System::Object
	{
	public:
		::System::EventHandler* changed; // 0x10
		::System::EventHandler* changing; // 0x18
	};
}
