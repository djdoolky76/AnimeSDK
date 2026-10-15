#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }

#define NLHACPDMPIC___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6A1A0)
#define NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__0_OFFSET UNITYSDK_OFFSET(0xBC6B7C0)
#define NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__1_OFFSET UNITYSDK_OFFSET(0xBC6BA10)
#define NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__2_OFFSET UNITYSDK_OFFSET(0xBC6B9D0)
#define NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__3_OFFSET UNITYSDK_OFFSET(0xBC6B9F0)

inline static constexpr unsigned int NLHACPDMPIC___c__DisplayClass37_0_TypeDefinitionIndex = 76189;

	class NLHACPDMPIC___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action* __9__2; // 0x10
		::System::Action* __9__3; // 0x18
		::RPG::Client::Promises::Promise* promise; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Void _HandleStartPVPMatch_b__0(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleStartPVPMatch_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__2_OFFSET))(this);
		}

		::System::Void _HandleStartPVPMatch_b__3(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__3_OFFSET))(this, a1);
		}

		::System::Void _HandleStartPVPMatch_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHACPDMPIC___C__DISPLAYCLASS37_0__HANDLESTARTPVPMATCH_B__1_OFFSET))(this);
		}

	};
