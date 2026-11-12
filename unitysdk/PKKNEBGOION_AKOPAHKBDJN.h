#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
class PKKNEBGOION;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define PKKNEBGOION_AKOPAHKBDJN_CTOR_OFFSET UNITYSDK_OFFSET(0xCBFE2D0)
#define PKKNEBGOION_AKOPAHKBDJN_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xCBFE5E0)
#define PKKNEBGOION_AKOPAHKBDJN_MMMAJPKLFLH_OFFSET UNITYSDK_OFFSET(0xCBFE4C0)
#define PKKNEBGOION_AKOPAHKBDJN_NBNJIFPEMMH_OFFSET UNITYSDK_OFFSET(0xCBFE380)

inline static constexpr unsigned int PKKNEBGOION_AKOPAHKBDJN_TypeDefinitionIndex = 63589;

	class PKKNEBGOION_AKOPAHKBDJN : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* GFICKNNNFGD; // 0x10
		::PKKNEBGOION* LKGHPDODGDI; // 0x18
		::System::Boolean HIPFFICBFEA; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 EPFJBLDCENH; // 0x24
		::System::Void _ctor(::PKKNEBGOION* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKKNEBGOION*))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_CTOR_OFFSET))(this, a1);
		}

		::System::Void NBNJIFPEMMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_NBNJIFPEMMH_OFFSET))(this);
		}

		::System::Void MMMAJPKLFLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_MMMAJPKLFLH_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKNEBGOION_AKOPAHKBDJN_KHGIKBFDLFB_OFFSET))(this);
		}

	};
