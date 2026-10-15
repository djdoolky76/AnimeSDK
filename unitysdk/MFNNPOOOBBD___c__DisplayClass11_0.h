#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKMFECNJFBG;
class AOBDHCFGGBH;
class MEGIEBCBOCI;
class MFNNPOOOBBD;
namespace RPG::Client::Promises { class IPromise; }

#define MFNNPOOOBBD___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB90DE20)
#define MFNNPOOOBBD___C__DISPLAYCLASS11_0__SUBMITORDER_B__0_OFFSET UNITYSDK_OFFSET(0xB90F790)

	class MFNNPOOOBBD___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::MFNNPOOOBBD* __4__this; // 0x10
		::AKMFECNJFBG* productStats; // 0x18
		::System::UInt32 orderID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFNNPOOOBBD___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _SubmitOrder_b__0(::AOBDHCFGGBH* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::AOBDHCFGGBH*))((::PBYTE)hIl2Cpp + MFNNPOOOBBD___C__DISPLAYCLASS11_0__SUBMITORDER_B__0_OFFSET))(this, a1);
		}

	};
