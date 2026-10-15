#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class EventHandler; }
namespace System::Xml::Linq { class XObjectChangeEventArgs; }

namespace System::Xml::Linq
{
	class XObjectChangeAnnotation : public ::System::Object
	{
	public:
		::System::EventHandler* changed; // 0x10
		::System::EventHandler* changing; // 0x18
	};
}
