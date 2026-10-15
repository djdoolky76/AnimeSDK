#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
class PKKNEBGOION;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKKNEBGOION_AKOPAHKBDJN_CTOR_OFFSET UNITYSDK_OFFSET(0xC2C7D70)
#define PKKNEBGOION_AKOPAHKBDJN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC2C2050)

inline static constexpr unsigned int PKKNEBGOION_AKOPAHKBDJN_TypeDefinitionIndex = 62176;

	class PKKNEBGOION_AKOPAHKBDJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* GFICKNNNFGD; // 0x10
		::PKKNEBGOION* LKGHPDODGDI; // 0x18
		::System::Void _ctor(::PKKNEBGOION* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKKNEBGOION*))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
