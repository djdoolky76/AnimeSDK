#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IDCBNMIJMCN_BBJOOLHHHKN_OFFSET UNITYSDK_OFFSET(0x188EAAC0)
#define IDCBNMIJMCN_BIDDGGLKMIH_OFFSET UNITYSDK_OFFSET(0x188EAB20)
#define IDCBNMIJMCN_CMEJAFMFALP_OFFSET UNITYSDK_OFFSET(0x188EB1E0)
#define IDCBNMIJMCN_CTOR_OFFSET UNITYSDK_OFFSET(0x188EACC0)
#define IDCBNMIJMCN_EMFBFDKFCID_OFFSET UNITYSDK_OFFSET(0x188EAF60)
#define IDCBNMIJMCN_FEFDGGEEAFK_OFFSET UNITYSDK_OFFSET(0x188EB050)
#define IDCBNMIJMCN_FNIECDJALKE_OFFSET UNITYSDK_OFFSET(0x188EA900)
#define IDCBNMIJMCN_GAIOFNIPIPF_OFFSET UNITYSDK_OFFSET(0x188EB160)
#define IDCBNMIJMCN_GET_GROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x188EA130)
#define IDCBNMIJMCN_GHCFPFELMMF_OFFSET UNITYSDK_OFFSET(0x188EA800)
#define IDCBNMIJMCN_GHPGIMAJMLN_OFFSET UNITYSDK_OFFSET(0x188EAFC0)
#define IDCBNMIJMCN_HCNFCKEACJJ_OFFSET UNITYSDK_OFFSET(0x188EA970)
#define IDCBNMIJMCN_IEIEJLOJCKI_OFFSET UNITYSDK_OFFSET(0x188EA1A0)
#define IDCBNMIJMCN_IGNPNPIAOPP_OFFSET UNITYSDK_OFFSET(0x188EAB80)
#define IDCBNMIJMCN_IOELFOPPKGI_OFFSET UNITYSDK_OFFSET(0x188EA9D0)
#define IDCBNMIJMCN_JMLFIFNOAIK_OFFSET UNITYSDK_OFFSET(0x188EAC30)
#define IDCBNMIJMCN_KPLOPPMKKHA_OFFSET UNITYSDK_OFFSET(0x188EA150)
#define IDCBNMIJMCN_LEHMDNIBLHK_OFFSET UNITYSDK_OFFSET(0x188EB0E0)
#define IDCBNMIJMCN_LJGIJEPICCM_OFFSET UNITYSDK_OFFSET(0x188EA870)
#define IDCBNMIJMCN_MJDIMMEBOFA_OFFSET UNITYSDK_OFFSET(0x188EAF00)
#define IDCBNMIJMCN_NOCPEMJPIFF_OFFSET UNITYSDK_OFFSET(0x188EAE90)
#define IDCBNMIJMCN_OPLBLMFAIKA_OFFSET UNITYSDK_OFFSET(0x188EAA30)
#define IDCBNMIJMCN_PCHMLFKBNNN_OFFSET UNITYSDK_OFFSET(0x188EA230)
#define IDCBNMIJMCN_SET_GROWTHTARGET_OFFSET UNITYSDK_OFFSET(0x188EA140)

inline static constexpr unsigned int IDCBNMIJMCN_TypeDefinitionIndex = 64190;

	class IDCBNMIJMCN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::System::UInt64>* OEJPOGAOGBF; // 0x10
		::System::Collections::Generic::HashSet_1<::DNFDBKCPBNM>* LKBBAFCFKGM; // 0x18
		::System::Collections::Generic::Dictionary_2<::OIPMNNAHIFP, ::System::UInt32>* LJKDLPGPGJE; // 0x20
		::System::Collections::Generic::Dictionary_2<::DNFDBKCPBNM, ::System::Collections::Generic::HashSet_1<::System::UInt32>*>* CEOIECDOAEO; // 0x28
		::System::Collections::Generic::HashSet_1<::DNFDBKCPBNM>* FPOLOABBAPA; // 0x30
		::OIPMNNAHIFP _GrowthTarget_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_CTOR_OFFSET))(this);
		}

		::OIPMNNAHIFP get_GrowthTarget()
		{
			return ((::OIPMNNAHIFP(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_GET_GROWTHTARGET_OFFSET))(this);
		}

		::System::Void set_GrowthTarget(::OIPMNNAHIFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_SET_GROWTHTARGET_OFFSET))(this, a1);
		}

		::System::Void KPLOPPMKKHA(::OIPMNNAHIFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_KPLOPPMKKHA_OFFSET))(this, a1);
		}

		::System::Void IEIEJLOJCKI(::DNFDBKCPBNM a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_IEIEJLOJCKI_OFFSET))(this, a1, a2);
		}

		::System::Void PCHMLFKBNNN(::DNFDBKCPBNM a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_PCHMLFKBNNN_OFFSET))(this, a1, a2);
		}

		::System::Void GHCFPFELMMF(::DNFDBKCPBNM a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt64))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_GHCFPFELMMF_OFFSET))(this, a1, a2);
		}

		::System::Void LJGIJEPICCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_LJGIJEPICCM_OFFSET))(this);
		}

		::System::Void FNIECDJALKE(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_FNIECDJALKE_OFFSET))(this, a1, a2);
		}

		::System::Void HCNFCKEACJJ(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_HCNFCKEACJJ_OFFSET))(this, a1);
		}

		::System::Void IOELFOPPKGI(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_IOELFOPPKGI_OFFSET))(this, a1);
		}

		::System::UInt32 OPLBLMFAIKA(::OIPMNNAHIFP a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_OPLBLMFAIKA_OFFSET))(this, a1);
		}

		::System::Boolean BBJOOLHHHKN(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_BBJOOLHHHKN_OFFSET))(this, a1);
		}

		::System::Boolean BIDDGGLKMIH(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_BIDDGGLKMIH_OFFSET))(this, a1);
		}

		::System::Boolean IGNPNPIAOPP(::DNFDBKCPBNM a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt32))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_IGNPNPIAOPP_OFFSET))(this, a1, a2);
		}

		::System::UInt64 JMLFIFNOAIK(::DNFDBKCPBNM a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_JMLFIFNOAIK_OFFSET))(this, a1);
		}

		::System::Void NOCPEMJPIFF(::OIPMNNAHIFP a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_NOCPEMJPIFF_OFFSET))(this, a1);
		}

		::System::Void MJDIMMEBOFA(::DNFDBKCPBNM a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::Boolean))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_MJDIMMEBOFA_OFFSET))(this, a1, a2);
		}

		::System::Void EMFBFDKFCID(::DNFDBKCPBNM a1, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::Collections::Generic::IEnumerable_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_EMFBFDKFCID_OFFSET))(this, a1, a2);
		}

		::System::Void GHPGIMAJMLN(::DNFDBKCPBNM a1, ::System::UInt64 a2)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM, ::System::UInt64))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_GHPGIMAJMLN_OFFSET))(this, a1, a2);
		}

		::System::Void FEFDGGEEAFK(::OIPMNNAHIFP a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::OIPMNNAHIFP, ::System::UInt32))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_FEFDGGEEAFK_OFFSET))(this, a1, a2);
		}

		::System::Void LEHMDNIBLHK(::DNFDBKCPBNM a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_LEHMDNIBLHK_OFFSET))(this, a1);
		}

		::System::Boolean GAIOFNIPIPF(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_GAIOFNIPIPF_OFFSET))(this, a1);
		}

		::System::Boolean CMEJAFMFALP(::DNFDBKCPBNM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNFDBKCPBNM))((::PBYTE)hIl2Cpp + IDCBNMIJMCN_CMEJAFMFALP_OFFSET))(this, a1);
		}

	};
