#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class CJGNCPIDGNH;
class MBJOEPEGLII;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T> class Func_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD20EA40)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xD210590)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xD210770)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET UNITYSDK_OFFSET(0xD210710)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET UNITYSDK_OFFSET(0xD210730)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET UNITYSDK_OFFSET(0xD210750)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass13_0_TypeDefinitionIndex = 80267;

	class CJGNCPIDGNH___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__7; // 0x10
		::MBJOEPEGLII* session; // 0x18
		::CJGNCPIDGNH* __4__this; // 0x20
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__3; // 0x28
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__5; // 0x30
		::FJPMJPEKLJL gameMode; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__0(::System::ValueTuple a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__3()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__5()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__7()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET))(this);
		}

		::System::Void _CheckReconnectToFight_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET))(this, a1);
		}

	};
