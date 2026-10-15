#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFKFJCPELEM;
class AKMFECNJFBG;
class CGEOCOPMJGI;
class MFFPHMCGEOJ;
namespace RPG::Client::Promises { class IPromise; }

#define MFFPHMCGEOJ___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB8F4F00)
#define MFFPHMCGEOJ___C__DISPLAYCLASS8_0__SUBMITEXAM_B__0_OFFSET UNITYSDK_OFFSET(0xB8F5990)

	class MFFPHMCGEOJ___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::AKMFECNJFBG* productStats; // 0x10
		::MFFPHMCGEOJ* __4__this; // 0x18
		::System::UInt32 examID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SubmitExam_b__0(::AFKFJCPELEM* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::AFKFJCPELEM*))((::PBYTE)hIl2Cpp + MFFPHMCGEOJ___C__DISPLAYCLASS8_0__SUBMITEXAM_B__0_OFFSET))(this, a1);
		}

	};
