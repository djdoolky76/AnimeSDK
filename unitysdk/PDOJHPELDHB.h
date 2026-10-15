#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKNPMFDGADK.h"
class AAFIACIMMHE;
class CCEIJBFAOAI;
class JLNEKELMDNJ;
class KAIMFCNPLCN;
class LOLCJIIIHIM;
class MEGIEBCBOCI;
class OBJANKHLNGO;
namespace RPG::Client::Promises { class IPromise; }

#define PDOJHPELDHB_CTOR_OFFSET UNITYSDK_OFFSET(0xC021AD0)
#define PDOJHPELDHB_EAMMBKNABNJ_OFFSET UNITYSDK_OFFSET(0xC021B20)
#define PDOJHPELDHB___SUBMITIMPL_B__5_0_OFFSET UNITYSDK_OFFSET(0xC021E10)

	class PDOJHPELDHB : public ::IKNPMFDGADK
	{
	public:
		::JLNEKELMDNJ* MIFKDCNLNNI; // 0x68
		::KAIMFCNPLCN* GNPGOPAPJAB; // 0x70
		::LOLCJIIIHIM* MPFFGNPIDOA; // 0x78
		::System::Void _ctor(::KAIMFCNPLCN* a1, ::LOLCJIIIHIM* a2, ::CCEIJBFAOAI* a3, ::JLNEKELMDNJ* a4, ::AAFIACIMMHE* a5, ::OBJANKHLNGO* a6)
		{
			return ((::System::Void(*)(::PVOID, ::KAIMFCNPLCN*, ::LOLCJIIIHIM*, ::CCEIJBFAOAI*, ::JLNEKELMDNJ*, ::AAFIACIMMHE*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + PDOJHPELDHB_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::RPG::Client::Promises::IPromise* EAMMBKNABNJ()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDOJHPELDHB_EAMMBKNABNJ_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* __SubmitImpl_b__5_0(::MEGIEBCBOCI* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::MEGIEBCBOCI*))((::PBYTE)hIl2Cpp + PDOJHPELDHB___SUBMITIMPL_B__5_0_OFFSET))(this, a1);
		}

	};
