#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABNAJNBCHNL.h"
class BCIKJINCAFN;
class EAGPPDDBBIM;
namespace System::Collections::Generic { template <typename T> class ICollection_1; }

#define MPFHMOIAHFL_ACODKNBDJNM_OFFSET UNITYSDK_OFFSET(0xC2FC530)
#define MPFHMOIAHFL_CTOR_OFFSET UNITYSDK_OFFSET(0xC2FC170)
#define MPFHMOIAHFL_KNPBPBDPEKA_OFFSET UNITYSDK_OFFSET(0xC2FC260)
#define MPFHMOIAHFL_MEKANKHILOI_OFFSET UNITYSDK_OFFSET(0xC2FC4F0)

inline static constexpr unsigned int MPFHMOIAHFL_TypeDefinitionIndex = 80063;

	class MPFHMOIAHFL : public ::ABNAJNBCHNL
	{
	public:
		::BCIKJINCAFN* AONGLKNKJNA; // 0x18
		::BCIKJINCAFN* MNCBELIGINF; // 0x20
		::System::Void _ctor(::EAGPPDDBBIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + MPFHMOIAHFL_CTOR_OFFSET))(this, a1);
		}

		::System::Void KNPBPBDPEKA(::System::Collections::Generic::ICollection_1<::BCIKJINCAFN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::BCIKJINCAFN*>*))((::PBYTE)hIl2Cpp + MPFHMOIAHFL_KNPBPBDPEKA_OFFSET))(this, a1);
		}

		::BCIKJINCAFN* MEKANKHILOI()
		{
			return ((::BCIKJINCAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFHMOIAHFL_MEKANKHILOI_OFFSET))(this);
		}

		::BCIKJINCAFN* ACODKNBDJNM()
		{
			return ((::BCIKJINCAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPFHMOIAHFL_ACODKNBDJNM_OFFSET))(this);
		}

	};
