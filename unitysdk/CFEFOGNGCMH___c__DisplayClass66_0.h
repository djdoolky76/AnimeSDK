#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFEFOGNGCMH;
class HBFPEEPJOPK;
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }

#define CFEFOGNGCMH___C__DISPLAYCLASS66_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCA11360)
#define CFEFOGNGCMH___C__DISPLAYCLASS66_0___STARTFINISHEDENDMATCHPROMISE_B__1_OFFSET UNITYSDK_OFFSET(0xCA115E0)

inline static constexpr unsigned int CFEFOGNGCMH___c__DisplayClass66_0_TypeDefinitionIndex = 81868;

	class CFEFOGNGCMH___c__DisplayClass66_0 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::IPromise_1<::HBFPEEPJOPK*>* promise; // 0x10
		::CFEFOGNGCMH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C__DISPLAYCLASS66_0_CTOR_OFFSET))(this);
		}

		::System::Void __StartFinishedEndMatchPromise_b__1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CFEFOGNGCMH___C__DISPLAYCLASS66_0___STARTFINISHEDENDMATCHPROMISE_B__1_OFFSET))(this, a1);
		}

	};
