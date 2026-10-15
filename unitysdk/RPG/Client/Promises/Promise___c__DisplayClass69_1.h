#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBE4420)
#define RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_1__RACE_B__1_OFFSET UNITYSDK_OFFSET(0x1CBE4490)

namespace RPG::Client::Promises
{
	template <typename T>
	class Promise___c__DisplayClass69_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Int32 index; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_1_CTOR_OFFSET))(this);
		}

		::System::Void _Race_b__1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROMISES_PROMISE___C__DISPLAYCLASS69_1__RACE_B__1_OFFSET))(this, a1);
		}

	};
}
