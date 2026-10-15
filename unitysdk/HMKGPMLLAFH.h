#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APJDGABPDGH;
class FJFNJCPHFDM;
class GHGAFIIFPEC;
class MPHJECLHDKJ;
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define HMKGPMLLAFH_AKEFDNFBKNJ_OFFSET UNITYSDK_OFFSET(0x15D86240)
#define HMKGPMLLAFH_CTOR_OFFSET UNITYSDK_OFFSET(0x15D86230)
#define HMKGPMLLAFH_HNPLDOJBMDN_OFFSET UNITYSDK_OFFSET(0x15D86490)

	class HMKGPMLLAFH : public ::System::Object
	{
	public:
		::FJFNJCPHFDM* GKPHGLBPCKD; // 0x10
		::GHGAFIIFPEC* DOIMIHLLDGH; // 0x18
		::MPHJECLHDKJ* GFFCANAAGOJ; // 0x20
		::System::Void _ctor(::MPHJECLHDKJ* a1, ::FJFNJCPHFDM* a2, ::GHGAFIIFPEC* a3)
		{
			return ((::System::Void(*)(::PVOID, ::MPHJECLHDKJ*, ::FJFNJCPHFDM*, ::GHGAFIIFPEC*))((::PBYTE)hIl2Cpp + HMKGPMLLAFH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::Generic::IReadOnlyList_1<::APJDGABPDGH*>* AKEFDNFBKNJ(::System::Boolean a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::APJDGABPDGH*>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HMKGPMLLAFH_AKEFDNFBKNJ_OFFSET))(this, a1);
		}

		::System::UInt32 HNPLDOJBMDN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKGPMLLAFH_HNPLDOJBMDN_OFFSET))(this);
		}

	};
