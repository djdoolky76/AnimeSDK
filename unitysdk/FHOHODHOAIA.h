#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPLMLPKBGGE;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FHOHODHOAIA_APMCLPDGNGF_OFFSET UNITYSDK_OFFSET(0x166B3D50)
#define FHOHODHOAIA_CTOR_OFFSET UNITYSDK_OFFSET(0x166B3450)
#define FHOHODHOAIA_GET_CURRENTDATA_OFFSET UNITYSDK_OFFSET(0x166B3430)
#define FHOHODHOAIA_GHHNEKPECCA_OFFSET UNITYSDK_OFFSET(0x166B39F0)
#define FHOHODHOAIA_GMMDJMOCOPN_OFFSET UNITYSDK_OFFSET(0x166B3640)
#define FHOHODHOAIA_JMEGMOMICHD_OFFSET UNITYSDK_OFFSET(0x166B3C80)
#define FHOHODHOAIA_MJNHFDONPON_OFFSET UNITYSDK_OFFSET(0x166B3840)
#define FHOHODHOAIA_MPIMGNCGLBE_OFFSET UNITYSDK_OFFSET(0x166B3AC0)
#define FHOHODHOAIA_NBIJCAIDJPN_OFFSET UNITYSDK_OFFSET(0x166B3E70)
#define FHOHODHOAIA_NNOJOMDLGPP_OFFSET UNITYSDK_OFFSET(0x166B3590)
#define FHOHODHOAIA_OEMEMGAJAGB_OFFSET UNITYSDK_OFFSET(0x166B3BB0)
#define FHOHODHOAIA_OFAFHAOHOGF_OFFSET UNITYSDK_OFFSET(0x166B4450)
#define FHOHODHOAIA_SET_CURRENTDATA_OFFSET UNITYSDK_OFFSET(0x166B3440)
#define FHOHODHOAIA__GETDIRTYDATA_B__14_0_OFFSET UNITYSDK_OFFSET(0x166B4540)

inline static constexpr unsigned int FHOHODHOAIA_TypeDefinitionIndex = 82999;

	class FHOHODHOAIA : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GPLMLPKBGGE*>* AMMBPPIHFBM; // 0x10
		::GPLMLPKBGGE* _CurrentData_k__BackingField; // 0x18
		::GPLMLPKBGGE* JHLGENNBJDK; // 0x20
		::System::Collections::Generic::HashSet_1<::System::UInt32>* HDKCACBMAMC; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::GPLMLPKBGGE*>* NMDFMJLBBEJ; // 0x30
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
