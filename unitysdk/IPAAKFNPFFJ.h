#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGNPKGEKGA;
class NJMLJBNICND;
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IPAAKFNPFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8509F0)
#define IPAAKFNPFFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB8506E0)
#define IPAAKFNPFFJ_DLPJABADHDE_OFFSET UNITYSDK_OFFSET(0xB850730)
#define IPAAKFNPFFJ_EECHFFJMFLM_OFFSET UNITYSDK_OFFSET(0xB850850)
#define IPAAKFNPFFJ_GHOEHMALIHM_OFFSET UNITYSDK_OFFSET(0xB8507C0)
#define IPAAKFNPFFJ_GMBOECMOMNA_OFFSET UNITYSDK_OFFSET(0xB850720)
#define IPAAKFNPFFJ_NGMGCMKLALC_OFFSET UNITYSDK_OFFSET(0xB8508E0)

inline static constexpr unsigned int IPAAKFNPFFJ_TypeDefinitionIndex = 80174;

	class IPAAKFNPFFJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::Queue_1<::IDGNPKGEKGA*>* OJFECHILFHG; // 0x10
		::NJMLJBNICND* NIHJGJMOEGB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_DISPOSE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::IDGNPKGEKGA*>* GMBOECMOMNA()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::IDGNPKGEKGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_GMBOECMOMNA_OFFSET))(this);
		}

		::System::Void DLPJABADHDE(::IDGNPKGEKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGNPKGEKGA*))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_DLPJABADHDE_OFFSET))(this, a1);
		}

		::IDGNPKGEKGA* GHOEHMALIHM()
		{
			return ((::IDGNPKGEKGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_GHOEHMALIHM_OFFSET))(this);
		}

		::IDGNPKGEKGA* EECHFFJMFLM()
		{
			return ((::IDGNPKGEKGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_EECHFFJMFLM_OFFSET))(this);
		}

		::NJMLJBNICND* NGMGCMKLALC()
		{
			return ((::NJMLJBNICND*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPAAKFNPFFJ_NGMGCMKLALC_OFFSET))(this);
		}

	};
