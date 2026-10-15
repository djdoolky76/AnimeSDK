#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFIAIIJCJMP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BNLDPBNNINH_CTOR_OFFSET UNITYSDK_OFFSET(0xBDDD220)
#define BNLDPBNNINH_FFJNBOAKMKM_OFFSET UNITYSDK_OFFSET(0xBDDCDE0)
#define BNLDPBNNINH_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xBDDD480)
#define BNLDPBNNINH_LEHLPKNGEPH_OFFSET UNITYSDK_OFFSET(0xBDDCEF0)
#define BNLDPBNNINH_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xBDDD510)
#define BNLDPBNNINH_MLEDKHFFDAD_OFFSET UNITYSDK_OFFSET(0xBDDD110)
#define BNLDPBNNINH_OKBPOKCJFAH_OFFSET UNITYSDK_OFFSET(0xBDDD000)

inline static constexpr unsigned int BNLDPBNNINH_TypeDefinitionIndex = 63386;

	class BNLDPBNNINH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::OFIAIIJCJMP*>* DPHNABJHCFI; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLDPBNNINH_CTOR_OFFSET))(this);
		}

		::System::UInt32 FFJNBOAKMKM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLDPBNNINH_FFJNBOAKMKM_OFFSET))(this);
		}

		::System::UInt32 LEHLPKNGEPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLDPBNNINH_LEHLPKNGEPH_OFFSET))(this);
		}

		::System::UInt32 OKBPOKCJFAH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLDPBNNINH_OKBPOKCJFAH_OFFSET))(this);
		}

		::System::UInt32 MLEDKHFFDAD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLDPBNNINH_MLEDKHFFDAD_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNLDPBNNINH_HADOHLNHHGB_OFFSET))(this);
		}

		::OFIAIIJCJMP* LMBKNCAIDLC(::System::UInt32 a1)
		{
			return ((::OFIAIIJCJMP*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BNLDPBNNINH_LMBKNCAIDLC_OFFSET))(this, a1);
		}

	};
