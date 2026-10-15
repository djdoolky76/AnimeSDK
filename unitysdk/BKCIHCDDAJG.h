#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCLLCONFADM;
class JCAOAPBEMJD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BKCIHCDDAJG_CMICFEJGGAN_OFFSET UNITYSDK_OFFSET(0xB7AD940)
#define BKCIHCDDAJG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7AD3C0)
#define BKCIHCDDAJG_JEKDFLAMJON_OFFSET UNITYSDK_OFFSET(0xB7AD9F0)
#define BKCIHCDDAJG_PIMCHDILMMJ_OFFSET UNITYSDK_OFFSET(0xB7AD890)

	class BKCIHCDDAJG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::HCLLCONFADM*>* JOJNHBFJNNH; // 0x10
		::System::Collections::Generic::List_1<::HCLLCONFADM*>* GFIMIKPFFLC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCIHCDDAJG_CTOR_OFFSET))(this);
		}

		::HCLLCONFADM* CMICFEJGGAN(::System::UInt32 a1)
		{
			return ((::HCLLCONFADM*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BKCIHCDDAJG_CMICFEJGGAN_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HCLLCONFADM*>* JEKDFLAMJON()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HCLLCONFADM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKCIHCDDAJG_JEKDFLAMJON_OFFSET))(this);
		}

		static ::HCLLCONFADM* PIMCHDILMMJ(::JCAOAPBEMJD* a1)
		{
			return ((::HCLLCONFADM*(*)(::JCAOAPBEMJD*))((::PBYTE)hIl2Cpp + BKCIHCDDAJG_PIMCHDILMMJ_OFFSET))(a1);
		}

	};
