#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLGKMCLAIID;
class MOJFFDOILBN;
namespace RPG::Client::Promises { class IPromise; }

#define GLGKMCLAIID___C__DISPLAYCLASS2_0_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB2490)
#define GLGKMCLAIID___C__DISPLAYCLASS2_0__ONENTER_B__0_OFFSET UNITYSDK_OFFSET(0x15AB2B90)
#define GLGKMCLAIID___C__DISPLAYCLASS2_0__ONENTER_B__1_OFFSET UNITYSDK_OFFSET(0x15AB2C60)
#define GLGKMCLAIID___C__DISPLAYCLASS2_0__ONENTER_B__2_OFFSET UNITYSDK_OFFSET(0x15AB2C90)

	class GLGKMCLAIID___c__DisplayClass2_0 : public ::System::Object
	{
	public:
		::MOJFFDOILBN* phaseData; // 0x10
		::GLGKMCLAIID* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID___C__DISPLAYCLASS2_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnEnter_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID___C__DISPLAYCLASS2_0__ONENTER_B__0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnEnter_b__1()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID___C__DISPLAYCLASS2_0__ONENTER_B__1_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnEnter_b__2()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLGKMCLAIID___C__DISPLAYCLASS2_0__ONENTER_B__2_OFFSET))(this);
		}

	};
