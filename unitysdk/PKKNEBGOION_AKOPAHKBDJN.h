#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
class PKKNEBGOION;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKKNEBGOION_AKOPAHKBDJN_CTOR_OFFSET UNITYSDK_OFFSET(0xC2CF710)
#define PKKNEBGOION_AKOPAHKBDJN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC2C9A20)

	class PKKNEBGOION_AKOPAHKBDJN : public ::System::Object
	{
	public:
		::PKKNEBGOION* LKGHPDODGDI; // 0x10
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* GFICKNNNFGD; // 0x18
		::System::Void _ctor(::PKKNEBGOION* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKKNEBGOION*))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
