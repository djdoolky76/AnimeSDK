#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class CJGNCPIDGNH;
class MBJOEPEGLII;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Exception; }
namespace System { template <typename T> class Func_1; }

#define CJGNCPIDGNH___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD207840)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET UNITYSDK_OFFSET(0xD209390)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__1_OFFSET UNITYSDK_OFFSET(0xD209570)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__3_OFFSET UNITYSDK_OFFSET(0xD209510)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__5_OFFSET UNITYSDK_OFFSET(0xD209530)
#define CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__7_OFFSET UNITYSDK_OFFSET(0xD209550)

inline static constexpr unsigned int CJGNCPIDGNH___c__DisplayClass13_0_TypeDefinitionIndex = 80266;

	class CJGNCPIDGNH___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::CJGNCPIDGNH* __4__this; // 0x10
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__3; // 0x18
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__5; // 0x20
		::System::Func_1<::RPG::Client::Promises::IPromise*>* __9__7; // 0x28
		::MBJOEPEGLII* session; // 0x30
		::FJPMJPEKLJL gameMode; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckReconnectToFight_b__0(::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL> a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::ValueTuple_2<::System::Boolean, ::FJPMJPEKLJL>))((::PBYTE)hIl2Cpp + CJGNCPIDGNH___C__DISPLAYCLASS13_0__CHECKRECONNECTTOFIGHT_B__0_OFFSET))(this, a1);
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
