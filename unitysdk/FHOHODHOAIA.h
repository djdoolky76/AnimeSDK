#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLMLPKBGGE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FHOHODHOAIA_APMCLPDGNGF_OFFSET UNITYSDK_OFFSET(0x15792C70)
#define FHOHODHOAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x15792370)
#define FHOHODHOAIA_GET_CURRENTDATA_OFFSET UNITYSDK_OFFSET(0x15792350)
#define FHOHODHOAIA_GHHNEKPECCA_OFFSET UNITYSDK_OFFSET(0x15792910)
#define FHOHODHOAIA_GMMDJMOCOPN_OFFSET UNITYSDK_OFFSET(0x15792560)
#define FHOHODHOAIA_JMEGMOMICHD_OFFSET UNITYSDK_OFFSET(0x15792BA0)
#define FHOHODHOAIA_MJNHFDONPON_OFFSET UNITYSDK_OFFSET(0x15792760)
#define FHOHODHOAIA_MPIMGNCGLBE_OFFSET UNITYSDK_OFFSET(0x157929E0)
#define FHOHODHOAIA_NBIJCAIDJPN_OFFSET UNITYSDK_OFFSET(0x15792D90)
#define FHOHODHOAIA_NNOJOMDLGPP_OFFSET UNITYSDK_OFFSET(0x157924B0)
#define FHOHODHOAIA_OEMEMGAJAGB_OFFSET UNITYSDK_OFFSET(0x15792AD0)
#define FHOHODHOAIA_OFAFHAOHOGF_OFFSET UNITYSDK_OFFSET(0x15793370)
#define FHOHODHOAIA_SET_CURRENTDATA_OFFSET UNITYSDK_OFFSET(0x15792360)
#define FHOHODHOAIA__GETDIRTYDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x15793460)

inline static constexpr unsigned int FHOHODHOAIA_TypeDefinitionIndex = 80222;

	class FHOHODHOAIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GPLMLPKBGGE*>* AMMBPPIHFBM; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HDKCACBMAMC; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GPLMLPKBGGE*>* NMDFMJLBBEJ; // 0x20
		::GPLMLPKBGGE* JHLGENNBJDK; // 0x28
		::GPLMLPKBGGE* _CurrentData_k__BackingField; // 0x30
		::System::Void _ctor(::GPLMLPKBGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + FHOHODHOAIA_CTOR_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* get_CurrentData()
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOHODHOAIA_GET_CURRENTDATA_OFFSET))(this);
		}

		::System::Void set_CurrentData(::GPLMLPKBGGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + FHOHODHOAIA_SET_CURRENTDATA_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* NNOJOMDLGPP(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHOHODHOAIA_NNOJOMDLGPP_OFFSET))(this, a1);
		}

		::System::Void GMMDJMOCOPN(::GPLMLPKBGGE* a1, ::GPLMLPKBGGE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::GPLMLPKBGGE*, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + FHOHODHOAIA_GMMDJMOCOPN_OFFSET))(this, a1, a2);
		}

		::GPLMLPKBGGE* GHHNEKPECCA(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHOHODHOAIA_GHHNEKPECCA_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* OEMEMGAJAGB(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHOHODHOAIA_OEMEMGAJAGB_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* JMEGMOMICHD(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHOHODHOAIA_JMEGMOMICHD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::GPLMLPKBGGE*>* APMCLPDGNGF()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::GPLMLPKBGGE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOHODHOAIA_APMCLPDGNGF_OFFSET))(this);
		}

		::System::Void NBIJCAIDJPN(::System::Collections::Generic::IEnumerable_1<::GPLMLPKBGGE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GPLMLPKBGGE*>*))((::PBYTE)hIl2Cpp + FHOHODHOAIA_NBIJCAIDJPN_OFFSET))(this, a1);
		}

		::System::Boolean OFAFHAOHOGF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHOHODHOAIA_OFAFHAOHOGF_OFFSET))(this);
		}

		::GPLMLPKBGGE* MPIMGNCGLBE(::GPLMLPKBGGE* a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::GPLMLPKBGGE*))((::PBYTE)hIl2Cpp + FHOHODHOAIA_MPIMGNCGLBE_OFFSET))(this, a1);
		}

		::System::Void MJNHFDONPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHOHODHOAIA_MJNHFDONPON_OFFSET))(this, a1);
		}

		::GPLMLPKBGGE* _GetDirtyData_b__14_0(::System::UInt32 a1)
		{
			return ((::GPLMLPKBGGE*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHOHODHOAIA__GETDIRTYDATA_B__14_0_OFFSET))(this, a1);
		}

	};
