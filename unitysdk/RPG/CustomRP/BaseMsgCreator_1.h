#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }

namespace RPG::CustomRP
{
	template <typename T>
	class BaseMsgCreator_1 : public ::System::Object
	{
	public:
		::System::String* m_MessageType; // 0x0
	};
}
