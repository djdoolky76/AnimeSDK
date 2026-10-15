#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }

#define ANLGFGNKPHL___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1589A470)
#define ANLGFGNKPHL___C__DISPLAYCLASS1_0__CREATE_B__0_OFFSET UNITYSDK_OFFSET(0x1589ACF0)
#define ANLGFGNKPHL___C__DISPLAYCLASS1_0__CREATE_B__1_OFFSET UNITYSDK_OFFSET(0x1589AD10)

inline static constexpr unsigned int ANLGFGNKPHL___c__DisplayClass1_0_TypeDefinitionIndex = 78396;

	class ANLGFGNKPHL___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::System::Action* onFinishAll; // 0x10
		::RPG::Client::Promises::Promise* promise; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGFGNKPHL___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::Void _Create_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANLGFGNKPHL___C__DISPLAYCLASS1_0__CREATE_B__0_OFFSET))(this);
		}

		::System::Void _Create_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + ANLGFGNKPHL___C__DISPLAYCLASS1_0__CREATE_B__1_OFFSET))(this, a1);
		}

	};
