#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace System::Threading
{
	template <typename T>
	class ThreadLocal_1_LinkedSlot : public ::System::Object
	{
	public:
		::System::Object* Next; // 0x0
		::System::Object* Previous; // 0x0
		::Il2CppArray<::System::Object*>* SlotArray; // 0x0
		T Value; // 0x0
	};
}
