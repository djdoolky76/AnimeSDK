#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCIKJINCAFN;
class CNBNJLFNHKG;
class EAGPPDDBBIM;
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define ABNAJNBCHNL_AACKADADDCH_OFFSET UNITYSDK_OFFSET(0xB772150)
#define ABNAJNBCHNL_ACODKNBDJNM_OFFSET UNITYSDK_OFFSET(0xB772570)
#define ABNAJNBCHNL_CTOR_OFFSET UNITYSDK_OFFSET(0xB771B40)
#define ABNAJNBCHNL_DGGJOPGNJPP_OFFSET UNITYSDK_OFFSET(0xB771B50)
#define ABNAJNBCHNL_IPJPBGAFOMH_OFFSET UNITYSDK_OFFSET(0xB7721D0)
#define ABNAJNBCHNL_KNPBPBDPEKA_OFFSET UNITYSDK_OFFSET(0xB7724E0)
#define ABNAJNBCHNL_MEKANKHILOI_OFFSET UNITYSDK_OFFSET(0xB772530)
#define ABNAJNBCHNL_OPGAAFBOAAG_OFFSET UNITYSDK_OFFSET(0xB7725B0)

inline static constexpr unsigned int ABNAJNBCHNL_TypeDefinitionIndex = 80061;

	class ABNAJNBCHNL : public ::System::Object
	{
	public:
		::EAGPPDDBBIM* EFCOEOGMHPO; // 0x10
		::System::Void _ctor(::EAGPPDDBBIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGPPDDBBIM*))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_CTOR_OFFSET))(this, a1);
		}

		::CNBNJLFNHKG* DGGJOPGNJPP()
		{
			return ((::CNBNJLFNHKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_DGGJOPGNJPP_OFFSET))(this);
		}

		::System::Void KNPBPBDPEKA(::System::Collections::Generic::ICollection_1<::BCIKJINCAFN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::BCIKJINCAFN*>*))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_KNPBPBDPEKA_OFFSET))(this, a1);
		}

		::BCIKJINCAFN* MEKANKHILOI()
		{
			return ((::BCIKJINCAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_MEKANKHILOI_OFFSET))(this);
		}

		::BCIKJINCAFN* ACODKNBDJNM()
		{
			return ((::BCIKJINCAFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_ACODKNBDJNM_OFFSET))(this);
		}

		::System::Boolean OPGAAFBOAAG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_OPGAAFBOAAG_OFFSET))(this);
		}

		static ::System::Boolean AACKADADDCH(::BCIKJINCAFN* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::BCIKJINCAFN*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_AACKADADDCH_OFFSET))(a1, a2);
		}

		static ::System::Void IPJPBGAFOMH(::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::BCIKJINCAFN*>*))((::PBYTE)hIl2Cpp + ABNAJNBCHNL_IPJPBGAFOMH_OFFSET))(a1);
		}

	};
