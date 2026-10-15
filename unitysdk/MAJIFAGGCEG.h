#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
class OFAGKOLPCFP;
class PEDNMPONAAO;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAJIFAGGCEG_AIEHPMGLBDM_OFFSET UNITYSDK_OFFSET(0xB849A60)
#define MAJIFAGGCEG_CNMEIHNPBLL_OFFSET UNITYSDK_OFFSET(0xB849AB0)
#define MAJIFAGGCEG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8498A0)
#define MAJIFAGGCEG_DBHLDBCDFEM_OFFSET UNITYSDK_OFFSET(0xB84A340)
#define MAJIFAGGCEG_EKFCGHGGIGL_OFFSET UNITYSDK_OFFSET(0xB849BD0)
#define MAJIFAGGCEG_FCCPKAOMHIN_OFFSET UNITYSDK_OFFSET(0xB849E40)
#define MAJIFAGGCEG_FMNIAPMBNIP_OFFSET UNITYSDK_OFFSET(0xB84A4C0)
#define MAJIFAGGCEG_GJCJABBKHHO_OFFSET UNITYSDK_OFFSET(0xB849DB0)
#define MAJIFAGGCEG_HCKCAJINPOE_OFFSET UNITYSDK_OFFSET(0xB849C70)
#define MAJIFAGGCEG_ICEOMPFIBIB_OFFSET UNITYSDK_OFFSET(0xB84A400)
#define MAJIFAGGCEG_KBKJKAIOKAG_OFFSET UNITYSDK_OFFSET(0xB84A1C0)
#define MAJIFAGGCEG_KPGFIDGDPIG_OFFSET UNITYSDK_OFFSET(0xB84A510)
#define MAJIFAGGCEG_NFHKKGPKIKH_OFFSET UNITYSDK_OFFSET(0xB849B40)
#define MAJIFAGGCEG_ODJPDDAPNAH_OFFSET UNITYSDK_OFFSET(0xB849D10)

inline static constexpr unsigned int MAJIFAGGCEG_TypeDefinitionIndex = 62661;

	class MAJIFAGGCEG : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::OIPMNNAHIFP, ::PEDNMPONAAO*>* DNJLAHPLLFB; // 0x10
		::System::Collections::Generic::Dictionary_2<::OIPMNNAHIFP, ::OIPMNNAHIFP>* MIOGFAJCGHD; // 0x18
		::OFAGKOLPCFP* GKDPCDDEDOG; // 0x20
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::System::Collections::Generic::List_1<::PEDNMPONAAO*>*>* PMCJCPBGMAF; // 0x28
		::System::Void _ctor(::OFAGKOLPCFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFAGKOLPCFP*))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_CTOR_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::PEDNMPONAAO*>* CNMEIHNPBLL()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::PEDNMPONAAO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_CNMEIHNPBLL_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::PEDNMPONAAO*>* NFHKKGPKIKH(::DNFDBKCPBNM a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::PEDNMPONAAO*>*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_NFHKKGPKIKH_OFFSET))(this, a1);
		}

		::System::Boolean EKFCGHGGIGL(::OIPMNNAHIFP a1, ::PEDNMPONAAO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP, ::PEDNMPONAAO*))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_EKFCGHGGIGL_OFFSET))(this, a1, a2);
		}

		::System::Boolean HCKCAJINPOE(::OIPMNNAHIFP a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_HCKCAJINPOE_OFFSET))(this, a1, a2);
		}

		::System::Int32 ODJPDDAPNAH(::DNFDBKCPBNM a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_ODJPDDAPNAH_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PEDNMPONAAO*>* GJCJABBKHHO(::DNFDBKCPBNM a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PEDNMPONAAO*>*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_GJCJABBKHHO_OFFSET))(this, a1);
		}

		::System::Void AIEHPMGLBDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_AIEHPMGLBDM_OFFSET))(this);
		}

		::System::Void FCCPKAOMHIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_FCCPKAOMHIN_OFFSET))(this);
		}

		::System::Void KBKJKAIOKAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_KBKJKAIOKAG_OFFSET))(this);
		}

		::System::Boolean DBHLDBCDFEM(::OIPMNNAHIFP a1, ::PEDNMPONAAO* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP, ::PEDNMPONAAO*))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_DBHLDBCDFEM_OFFSET))(this, a1, a2);
		}

		::System::Boolean ICEOMPFIBIB(::OIPMNNAHIFP a1, ::OIPMNNAHIFP a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIPMNNAHIFP, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_ICEOMPFIBIB_OFFSET))(this, a1, a2);
		}

		::System::Int32 FMNIAPMBNIP(::DNFDBKCPBNM a1)
		{
			return ((::System::Int32(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_FMNIAPMBNIP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::PEDNMPONAAO*>* KPGFIDGDPIG(::DNFDBKCPBNM a1)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::PEDNMPONAAO*>*(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + MAJIFAGGCEG_KPGFIDGDPIG_OFFSET))(this, a1);
		}

	};
