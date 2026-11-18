#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DBPDOLCMLDP.h"
#include "unitysdk/LABOFABFALH.h"
#include "unitysdk/NHOJFODAIIC.h"
#include "unitysdk/Share/EItemType.h"

class GGBFMMDGBLG;
class KHJJLCPFGAO_AKCBIDKEODA;
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define NCLLKAIFDGO_ALDLIPDJNLD_1_OFFSET UNITYSDK_OFFSET(0xE570F60)
#define NCLLKAIFDGO_ALDLIPDJNLD_OFFSET UNITYSDK_OFFSET(0xE571200)
#define NCLLKAIFDGO_BGCNIOKALDF_1_OFFSET UNITYSDK_OFFSET(0xE572470)
#define NCLLKAIFDGO_BGCNIOKALDF_OFFSET UNITYSDK_OFFSET(0xE572240)
#define NCLLKAIFDGO_BLODHBEJEGL_OFFSET UNITYSDK_OFFSET(0xE572520)
#define NCLLKAIFDGO_COHDMPBBMPO_1_OFFSET UNITYSDK_OFFSET(0xE572350)
#define NCLLKAIFDGO_COHDMPBBMPO_OFFSET UNITYSDK_OFFSET(0xE5722F0)
#define NCLLKAIFDGO_DBHOHNLKBMA_OFFSET UNITYSDK_OFFSET(0xE571B10)
#define NCLLKAIFDGO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5708D0)
#define NCLLKAIFDGO_DKDJDEJHABH_1_OFFSET UNITYSDK_OFFSET(0xE571710)
#define NCLLKAIFDGO_DKDJDEJHABH_2_OFFSET UNITYSDK_OFFSET(0xE571060)
#define NCLLKAIFDGO_DKDJDEJHABH_OFFSET UNITYSDK_OFFSET(0xE570E60)
#define NCLLKAIFDGO_FLHNGDLANDC_1_OFFSET UNITYSDK_OFFSET(0xE571810)
#define NCLLKAIFDGO_FLHNGDLANDC_2_OFFSET UNITYSDK_OFFSET(0xE571310)
#define NCLLKAIFDGO_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0xE571180)
#define NCLLKAIFDGO_HAFGPJABDPG_OFFSET UNITYSDK_OFFSET(0xE571480)
#define NCLLKAIFDGO_HENEEJEMIBD_OFFSET UNITYSDK_OFFSET(0xE572060)
#define NCLLKAIFDGO_IMHJMPJBIBC_OFFSET UNITYSDK_OFFSET(0xE571CA0)
#define NCLLKAIFDGO_JJFFAAGIFMF_OFFSET UNITYSDK_OFFSET(0xE571430)
#define NCLLKAIFDGO_KKFNPONHGEM_1_OFFSET UNITYSDK_OFFSET(0xE5714E0)
#define NCLLKAIFDGO_KKFNPONHGEM_2_OFFSET UNITYSDK_OFFSET(0xE571A90)
#define NCLLKAIFDGO_KKFNPONHGEM_OFFSET UNITYSDK_OFFSET(0xE571890)
#define NCLLKAIFDGO_LCCNCOMPOCD_OFFSET UNITYSDK_OFFSET(0xE5716B0)
#define NCLLKAIFDGO_LEHHIGFMHFN_OFFSET UNITYSDK_OFFSET(0xE571E20)
#define NCLLKAIFDGO_MIOLMLPHIAJ_OFFSET UNITYSDK_OFFSET(0xE572180)
#define NCLLKAIFDGO_MPNEPOAIIKG_OFFSET UNITYSDK_OFFSET(0xE571910)
#define NCLLKAIFDGO_ONCREATE_OFFSET UNITYSDK_OFFSET(0xE570890)
#define NCLLKAIFDGO__CTOR_OFFSET UNITYSDK_OFFSET(0xE570BE0)

inline static constexpr unsigned int NCLLKAIFDGO_TypeDefinitionIndex = 80721;

class NCLLKAIFDGO
{
public:
	::System::Collections::Generic::Dictionary_2<::NHOJFODAIIC, ::System::Int32>* NGPCHMPNCAO; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Object*>* IECBHBJFLBH; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::GGBFMMDGBLG*>* NNKIDGCEACP; // 0x20
	::System::Collections::Generic::Dictionary_2<::LABOFABFALH, ::System::Int32>* OEBMCKNPHJB; // 0x28
	::System::Int32 EJPOBJGFLIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLKAIFDGO__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_DISPOSE_OFFSET))(this);
	}

	::System::Void DKDJDEJHABH(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ, ::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_DKDJDEJHABH_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ, KOIBHLHLMFC);
	}

	::System::Void FLHNGDLANDC(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_FLHNGDLANDC_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH, PHHDHIBOCKA);
	}

	::System::Int32 ALDLIPDJNLD(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Int32(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_ALDLIPDJNLD_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH);
	}

	::System::Int32 ALDLIPDJNLD_1(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Int32(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_ALDLIPDJNLD_1_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ);
	}

	::System::Void HAFGPJABDPG(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_HAFGPJABDPG_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void LCCNCOMPOCD(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_LCCNCOMPOCD_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void DKDJDEJHABH_1(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH, ::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_DKDJDEJHABH_1_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH, KOIBHLHLMFC);
	}

	::System::Void FLHNGDLANDC_1(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_FLHNGDLANDC_1_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ, PHHDHIBOCKA);
	}

	::System::Void KKFNPONHGEM(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_KKFNPONHGEM_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ, PHHDHIBOCKA);
	}

	::System::Int32 JJFFAAGIFMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_JJFFAAGIFMF_OFFSET))(this);
	}

	::System::Void MPNEPOAIIKG(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 DNMOAEFBDFK, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_MPNEPOAIIKG_OFFSET))(this, KAMJLKGLFDB, DNMOAEFBDFK, PHHDHIBOCKA);
	}

	::System::Void DBHOHNLKBMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_DBHOHNLKBMA_OFFSET))(this);
	}

	::System::Void IMHJMPJBIBC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_IMHJMPJBIBC_OFFSET))(this);
	}

	::System::Boolean LEHHIGFMHFN(::System::Int32 GEPABHJBIAH, ::DBPDOLCMLDP& KAMJLKGLFDB, ::Share::EItemType& JCHOHDBNCKJ, ::System::Int32& KCNOHOOPNAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::DBPDOLCMLDP&, ::Share::EItemType&, ::System::Int32&))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_LEHHIGFMHFN_OFFSET))(this, GEPABHJBIAH, KAMJLKGLFDB, JCHOHDBNCKJ, KCNOHOOPNAH);
	}

	::System::Void DKDJDEJHABH_2(::System::Int32 GEPABHJBIAH, ::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::EventArgs*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_DKDJDEJHABH_2_OFFSET))(this, GEPABHJBIAH, KOIBHLHLMFC);
	}

	::System::Void KKFNPONHGEM_1(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_KKFNPONHGEM_1_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Boolean HENEEJEMIBD(::System::Int32 GEPABHJBIAH, ::GGBFMMDGBLG*& DJLOKMMLFJC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::GGBFMMDGBLG*&))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_HENEEJEMIBD_OFFSET))(this, GEPABHJBIAH, DJLOKMMLFJC);
	}

	::System::Void FLHNGDLANDC_2(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_FLHNGDLANDC_2_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Void MIOLMLPHIAJ(::KHJJLCPFGAO_AKCBIDKEODA* NFBLPECBPKE)
	{
		return ((::System::Void(*)(::PVOID, ::KHJJLCPFGAO_AKCBIDKEODA*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_MIOLMLPHIAJ_OFFSET))(this, NFBLPECBPKE);
	}

	::System::Boolean BGCNIOKALDF(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH)
	{
		return ((::System::Boolean(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_BGCNIOKALDF_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH);
	}

	::System::Boolean COHDMPBBMPO(::Share::EItemType JCHOHDBNCKJ, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::Share::EItemType, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_COHDMPBBMPO_OFFSET))(this, JCHOHDBNCKJ, PHHDHIBOCKA);
	}

	::System::Void KKFNPONHGEM_2(::DBPDOLCMLDP KAMJLKGLFDB, ::System::Int32 KCNOHOOPNAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::DBPDOLCMLDP, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_KKFNPONHGEM_2_OFFSET))(this, KAMJLKGLFDB, KCNOHOOPNAH, PHHDHIBOCKA);
	}

	::System::Boolean COHDMPBBMPO_1(::System::Int32 GEPABHJBIAH, ::System::Action_1<::System::EventArgs*>* PHHDHIBOCKA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::EventArgs*>*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_COHDMPBBMPO_1_OFFSET))(this, GEPABHJBIAH, PHHDHIBOCKA);
	}

	::System::Boolean BGCNIOKALDF_1(::DBPDOLCMLDP KAMJLKGLFDB, ::Share::EItemType JCHOHDBNCKJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::DBPDOLCMLDP, ::Share::EItemType))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_BGCNIOKALDF_1_OFFSET))(this, KAMJLKGLFDB, JCHOHDBNCKJ);
	}

	::System::Void BLODHBEJEGL(::KHJJLCPFGAO_AKCBIDKEODA* NFBLPECBPKE)
	{
		return ((::System::Void(*)(::PVOID, ::KHJJLCPFGAO_AKCBIDKEODA*))((::PBYTE)hIl2Cpp + NCLLKAIFDGO_BLODHBEJEGL_OFFSET))(this, NFBLPECBPKE);
	}
};
