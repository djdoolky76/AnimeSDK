#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IDGNPKGEKGA;
class NJMLJBNICND;
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IPAAKFNPFFJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1650E270)
#define IPAAKFNPFFJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1650DF60)
#define IPAAKFNPFFJ_DLPJABADHDE_OFFSET UNITYSDK_OFFSET(0x1650DFB0)
#define IPAAKFNPFFJ_EECHFFJMFLM_OFFSET UNITYSDK_OFFSET(0x1650E0D0)
#define IPAAKFNPFFJ_GHOEHMALIHM_OFFSET UNITYSDK_OFFSET(0x1650E040)
#define IPAAKFNPFFJ_GMBOECMOMNA_OFFSET UNITYSDK_OFFSET(0x1650DFA0)
#define IPAAKFNPFFJ_NGMGCMKLALC_OFFSET UNITYSDK_OFFSET(0x1650E160)

inline static constexpr unsigned int IPAAKFNPFFJ_TypeDefinitionIndex = 77438;

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
