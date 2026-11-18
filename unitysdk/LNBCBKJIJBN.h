#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTag.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Nap/NapECS/EcsComponentTask_1.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/System/Span_1_9011FAD97750D224.h"

class DOCIGCANGFO;
class LNBCBKJIJBN_DHBPBLCGGGJ;
class LNBCBKJIJBN_HHMMEPEPCAK;
namespace Foundation::Unreal { class FGameplayTagQuery; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNBCBKJIJBN_ADJNPIDCDNF_1_OFFSET UNITYSDK_OFFSET(0x15671950)
#define LNBCBKJIJBN_ADJNPIDCDNF_OFFSET UNITYSDK_OFFSET(0x156703A0)
#define LNBCBKJIJBN_ADPHACKJAOE_1_OFFSET UNITYSDK_OFFSET(0x15671D50)
#define LNBCBKJIJBN_ADPHACKJAOE_OFFSET UNITYSDK_OFFSET(0x1566DC00)
#define LNBCBKJIJBN_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x15671390)
#define LNBCBKJIJBN_AJLFELDKLCA_OFFSET UNITYSDK_OFFSET(0x1566D170)
#define LNBCBKJIJBN_BEIJAGJEJNF_OFFSET UNITYSDK_OFFSET(0x1566F5A0)
#define LNBCBKJIJBN_BOLIKOCLLDC_1_OFFSET UNITYSDK_OFFSET(0x1566FF30)
#define LNBCBKJIJBN_BOLIKOCLLDC_OFFSET UNITYSDK_OFFSET(0x1566FBB0)
#define LNBCBKJIJBN_CNNFAKMPEAP_OFFSET UNITYSDK_OFFSET(0x1566D510)
#define LNBCBKJIJBN_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x15669AB0)
#define LNBCBKJIJBN_DFKEPEMOJFH_OFFSET UNITYSDK_OFFSET(0x1566C9B0)
#define LNBCBKJIJBN_DGBBMHKFDHG_1_OFFSET UNITYSDK_OFFSET(0x15670500)
#define LNBCBKJIJBN_DGBBMHKFDHG_OFFSET UNITYSDK_OFFSET(0x1566C7D0)
#define LNBCBKJIJBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1566A240)
#define LNBCBKJIJBN_EBPEIBLMPKP_OFFSET UNITYSDK_OFFSET(0x1566E850)
#define LNBCBKJIJBN_FIKEOKFDCGE_1_OFFSET UNITYSDK_OFFSET(0x15670730)
#define LNBCBKJIJBN_FIKEOKFDCGE_OFFSET UNITYSDK_OFFSET(0x1566B450)
#define LNBCBKJIJBN_FLBAFNHEDGH_OFFSET UNITYSDK_OFFSET(0x156700E0)
#define LNBCBKJIJBN_FPBOPLONJEB_1_OFFSET UNITYSDK_OFFSET(0x1566E480)
#define LNBCBKJIJBN_FPBOPLONJEB_OFFSET UNITYSDK_OFFSET(0x1566CFC0)
#define LNBCBKJIJBN_GBKFLBFPDKD_OFFSET UNITYSDK_OFFSET(0x1566BBB0)
#define LNBCBKJIJBN_GCEPBFEPPFO_OFFSET UNITYSDK_OFFSET(0x1566D640)
#define LNBCBKJIJBN_GFOHHEFCFAI_OFFSET UNITYSDK_OFFSET(0x1566ABF0)
#define LNBCBKJIJBN_GLAGMLDNHMD_OFFSET UNITYSDK_OFFSET(0x1566E2A0)
#define LNBCBKJIJBN_GPKMPDHNCGL_OFFSET UNITYSDK_OFFSET(0x1566B3A0)
#define LNBCBKJIJBN_HBADNCJHEOJ_1_OFFSET UNITYSDK_OFFSET(0x156717B0)
#define LNBCBKJIJBN_HBADNCJHEOJ_OFFSET UNITYSDK_OFFSET(0x15670F70)
#define LNBCBKJIJBN_HMCDFPFFGBC_1_OFFSET UNITYSDK_OFFSET(0x15670CA0)
#define LNBCBKJIJBN_HMCDFPFFGBC_OFFSET UNITYSDK_OFFSET(0x1566D9F0)
#define LNBCBKJIJBN_HNFAPPAHNKF_1_OFFSET UNITYSDK_OFFSET(0x15672040)
#define LNBCBKJIJBN_HNFAPPAHNKF_OFFSET UNITYSDK_OFFSET(0x15671420)
#define LNBCBKJIJBN_HPOGHLNPHHE_OFFSET UNITYSDK_OFFSET(0x15670180)
#define LNBCBKJIJBN_IDHOMHHFPOH_1_OFFSET UNITYSDK_OFFSET(0x15671180)
#define LNBCBKJIJBN_IDHOMHHFPOH_OFFSET UNITYSDK_OFFSET(0x15670B00)
#define LNBCBKJIJBN_IDIACLKBHHO_1_OFFSET UNITYSDK_OFFSET(0x15671B20)
#define LNBCBKJIJBN_IDIACLKBHHO_OFFSET UNITYSDK_OFFSET(0x1566F830)
#define LNBCBKJIJBN_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x1566F490)
#define LNBCBKJIJBN_IOHBDJJAIJH_1_OFFSET UNITYSDK_OFFSET(0x1566CD40)
#define LNBCBKJIJBN_IOHBDJJAIJH_OFFSET UNITYSDK_OFFSET(0x1566DFE0)
#define LNBCBKJIJBN_IPAJBJINFLN_OFFSET UNITYSDK_OFFSET(0x1566AB20)
#define LNBCBKJIJBN_JBNDGJJEBGE_1_OFFSET UNITYSDK_OFFSET(0x1566B820)
#define LNBCBKJIJBN_JBNDGJJEBGE_OFFSET UNITYSDK_OFFSET(0x1566B670)
#define LNBCBKJIJBN_JCLHAFOMMON_OFFSET UNITYSDK_OFFSET(0x1566E6A0)
#define LNBCBKJIJBN_JENEMNEANMJ_OFFSET UNITYSDK_OFFSET(0x1566CA20)
#define LNBCBKJIJBN_JHEGCLGOKEA_OFFSET UNITYSDK_OFFSET(0x1566F520)
#define LNBCBKJIJBN_JLMFEKLPCKP_OFFSET UNITYSDK_OFFSET(0x1566A4B0)
#define LNBCBKJIJBN_MCJGGBMPMKC_1_OFFSET UNITYSDK_OFFSET(0x1566D2C0)
#define LNBCBKJIJBN_MCJGGBMPMKC_OFFSET UNITYSDK_OFFSET(0x1566B1C0)
#define LNBCBKJIJBN_MNCMIJLDOGJ_1_OFFSET UNITYSDK_OFFSET(0x15671600)
#define LNBCBKJIJBN_MNCMIJLDOGJ_OFFSET UNITYSDK_OFFSET(0x1566E080)
#define LNBCBKJIJBN_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1566FB20)
#define LNBCBKJIJBN_MODDIEPFDMH_1_OFFSET UNITYSDK_OFFSET(0x1566D970)
#define LNBCBKJIJBN_MODDIEPFDMH_OFFSET UNITYSDK_OFFSET(0x1566D7E0)
#define LNBCBKJIJBN_MPIBPBGIMJM_OFFSET UNITYSDK_OFFSET(0x1566E830)
#define LNBCBKJIJBN_NGJBHIHJLCA_1_OFFSET UNITYSDK_OFFSET(0x1566FDD0)
#define LNBCBKJIJBN_NGJBHIHJLCA_OFFSET UNITYSDK_OFFSET(0x1566F450)
#define LNBCBKJIJBN_NMDKMCHJEJO_1_OFFSET UNITYSDK_OFFSET(0x156708E0)
#define LNBCBKJIJBN_NMDKMCHJEJO_OFFSET UNITYSDK_OFFSET(0x1566DE30)
#define LNBCBKJIJBN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1566BA50)
#define LNBCBKJIJBN_ODNFNHNFLDG_OFFSET UNITYSDK_OFFSET(0x15669AA0)
#define LNBCBKJIJBN_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1566A8E0)
#define LNBCBKJIJBN_PEHEBDJPOPF_1_OFFSET UNITYSDK_OFFSET(0x1566C620)
#define LNBCBKJIJBN_PEHEBDJPOPF_OFFSET UNITYSDK_OFFSET(0x1566AFA0)
#define LNBCBKJIJBN_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1566A960)
#define LNBCBKJIJBN__CTOR_OFFSET UNITYSDK_OFFSET(0x15669C40)

inline static constexpr unsigned int LNBCBKJIJBN_TypeDefinitionIndex = 80949;

class LNBCBKJIJBN : public ::OAOOLPCNHKA
{
public:
	static ::LNBCBKJIJBN** StaticGet_PMKINFHDLFD()
	{
		return (::LNBCBKJIJBN**)Il2CppClass::FromTypeDefinitionIndex(LNBCBKJIJBN_TypeDefinitionIndex)->GetStaticField(0x52020);
	}
	::Nap::NapECS::EcsComponentTask_1<::DOCIGCANGFO*> LJEOAAMKIFK; // 0x20
	::System::Byte _padding0[0x88];
	::System::Collections::Generic::Dictionary_2<::System::UInt64, ::Il2CppArray<::Foundation::Unreal::FGameplayTagContainer>*>* EGENKJPKJEI; // 0xB0
	::System::Collections::Generic::Dictionary_2<::MoleMole::EntityHandle, ::System::Collections::Generic::HashSet_1<::Foundation::Unreal::FGameplayTag>*>* OLJKNKNPEBB; // 0xB8
	::System::Collections::Generic::Dictionary_2<::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::HashSet_1<::MoleMole::EntityHandle>*>* LNFDJAMMGCF; // 0xC0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0xC8
	::System::Boolean IFHPNDPONAL; // 0xD0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN__CTOR_OFFSET))(this);
	}

	::Nap::NapECS::EcsFilter* ODNFNHNFLDG()
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_ODNFNHNFLDG_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DISPOSE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_ONDESTROY_OFFSET))(this);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_POSTLATEUPDATE_OFFSET))(this);
	}

	::System::Void IPAJBJINFLN(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::LNBCBKJIJBN_HHMMEPEPCAK* GJOMMBMFKNB, ::Foundation::Unreal::FGameplayTagContainer& EMHCILLIIGE)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32, ::LNBCBKJIJBN_HHMMEPEPCAK*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IPAJBJINFLN_OFFSET))(this, GEEHGDABNJF, BKLGNCBNEGM, GJOMMBMFKNB, EMHCILLIIGE);
	}

	static ::System::Boolean PEHEBDJPOPF(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_PEHEBDJPOPF_OFFSET))(KECKGDFIALJ, HDALMGJCBLF);
	}

	static ::System::Void MCJGGBMPMKC(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MCJGGBMPMKC_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, AELLPLBJELA);
	}

	static ::System::Boolean FIKEOKFDCGE(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_FIKEOKFDCGE_OFFSET))(KECKGDFIALJ, JNMIIDIDEGJ);
	}

	static ::System::Boolean JBNDGJJEBGE(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagQuery* OBIPHBKODPP)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_JBNDGJJEBGE_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, OBIPHBKODPP);
	}

	static ::System::Boolean JBNDGJJEBGE_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagQuery* OBIPHBKODPP)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagQuery*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_JBNDGJJEBGE_1_OFFSET))(KECKGDFIALJ, OBIPHBKODPP);
	}

	static ::System::Void NPOLNFDBOOD(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_NPOLNFDBOOD_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean PEHEBDJPOPF_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_PEHEBDJPOPF_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, HDALMGJCBLF);
	}

	static ::System::Boolean DGBBMHKFDHG(::Foundation::Unreal::FGameplayTagContainer JFPDJGAMELP, ::System::Int32 KFPBPEHKEAC)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTagContainer, ::System::Int32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DGBBMHKFDHG_OFFSET))(JFPDJGAMELP, KFPBPEHKEAC);
	}

	static ::LNBCBKJIJBN* GPKMPDHNCGL(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::LNBCBKJIJBN*(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_GPKMPDHNCGL_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* JENEMNEANMJ(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_JENEMNEANMJ_OFFSET))(AELLPLBJELA);
	}

	static ::System::Boolean FPBOPLONJEB(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_FPBOPLONJEB_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, HDALMGJCBLF);
	}

	static ::System::Void AJLFELDKLCA(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_AJLFELDKLCA_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	static ::System::Void MCJGGBMPMKC_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MCJGGBMPMKC_1_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	::System::Void CNNFAKMPEAP(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_CNNFAKMPEAP_OFFSET))(this, MNGHGOLKKNO);
	}

	::Foundation::Unreal::FGameplayTagContainer& GCEPBFEPPFO(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer&(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_GCEPBFEPPFO_OFFSET))(this, GEEHGDABNJF, BKLGNCBNEGM);
	}

	static ::System::Void MODDIEPFDMH(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MODDIEPFDMH_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}

	static ::Foundation::Unreal::FGameplayTagContainer HMCDFPFFGBC(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HMCDFPFFGBC_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM);
	}

	static ::Foundation::Unreal::FGameplayTagContainer ADPHACKJAOE(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_ADPHACKJAOE_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, JFPDJGAMELP);
	}

	static ::System::Boolean NMDKMCHJEJO(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_NMDKMCHJEJO_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, HDALMGJCBLF);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* IOHBDJJAIJH(::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*(*)(::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IOHBDJJAIJH_OFFSET))(AELLPLBJELA);
	}

	static ::System::Boolean MNCMIJLDOGJ(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MNCMIJLDOGJ_OFFSET))(KECKGDFIALJ, HDALMGJCBLF);
	}

	static ::System::Boolean GLAGMLDNHMD(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_GLAGMLDNHMD_OFFSET))(KECKGDFIALJ, JNMIIDIDEGJ);
	}

	static ::System::Boolean FPBOPLONJEB_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_FPBOPLONJEB_1_OFFSET))(KECKGDFIALJ, HDALMGJCBLF);
	}

	::System::Void JCLHAFOMMON(::Foundation::Unreal::FGameplayTag AELLPLBJELA, ::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_JCLHAFOMMON_OFFSET))(this, AELLPLBJELA, PHHDHIBOCKA);
	}

	static ::System::UInt64 MPIBPBGIMJM(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::UInt64(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MPIBPBGIMJM_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM);
	}

	::System::Void EBPEIBLMPKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_EBPEIBLMPKP_OFFSET))(this);
	}

	static ::System::Void NGJBHIHJLCA(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_NGJBHIHJLCA_OFFSET))(KECKGDFIALJ, JFPDJGAMELP);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void JHEGCLGOKEA(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_JHEGCLGOKEA_OFFSET))(this, MNGHGOLKKNO);
	}

	::System::Void BEIJAGJEJNF(::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_BEIJAGJEJNF_OFFSET))(this, PHHDHIBOCKA);
	}

	static ::System::Void MODDIEPFDMH_1(::DOCIGCANGFO* HBNBIBADGNH, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::DOCIGCANGFO*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MODDIEPFDMH_1_OFFSET))(HBNBIBADGNH, AELLPLBJELA);
	}

	static ::Foundation::Unreal::FGameplayTagContainer IDIACLKBHHO(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IDIACLKBHHO_OFFSET))(KECKGDFIALJ, JFPDJGAMELP);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Boolean BOLIKOCLLDC(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_BOLIKOCLLDC_OFFSET))(KECKGDFIALJ, JNMIIDIDEGJ);
	}

	static ::System::Void NGJBHIHJLCA_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_NGJBHIHJLCA_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, JFPDJGAMELP);
	}

	static ::System::Boolean BOLIKOCLLDC_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_BOLIKOCLLDC_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, JNMIIDIDEGJ);
	}

	::System::Void GBKFLBFPDKD(::DOCIGCANGFO* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::DOCIGCANGFO*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_GBKFLBFPDKD_OFFSET))(this, GBELIHABEDH);
	}

	static ::System::Void ADJNPIDCDNF(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_ADJNPIDCDNF_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, JFPDJGAMELP);
	}

	::System::Void HPOGHLNPHHE(::Foundation::Unreal::FGameplayTag AELLPLBJELA, ::MoleMole::EntityHandle PHHDHIBOCKA)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FGameplayTag, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HPOGHLNPHHE_OFFSET))(this, AELLPLBJELA, PHHDHIBOCKA);
	}

	static ::System::Boolean DGBBMHKFDHG_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::System::Int32 KFPBPEHKEAC)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::System::Int32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DGBBMHKFDHG_1_OFFSET))(KECKGDFIALJ, KFPBPEHKEAC);
	}

	static ::System::Boolean FIKEOKFDCGE_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTag JNMIIDIDEGJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_FIKEOKFDCGE_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, JNMIIDIDEGJ);
	}

	static ::System::Boolean NMDKMCHJEJO_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_NMDKMCHJEJO_1_OFFSET))(KECKGDFIALJ, HDALMGJCBLF);
	}

	static ::System::Boolean IDHOMHHFPOH(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IDHOMHHFPOH_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM);
	}

	::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FGameplayTagContainer> GFOHHEFCFAI(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Span_1_9011FAD97750D224<::Foundation::Unreal::FGameplayTagContainer>(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_GFOHHEFCFAI_OFFSET))(this, GEEHGDABNJF, BKLGNCBNEGM);
	}

	static ::Foundation::Unreal::FGameplayTagContainer HMCDFPFFGBC_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HMCDFPFFGBC_1_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Int32 HBADNCJHEOJ(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HBADNCJHEOJ_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Boolean IDHOMHHFPOH_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IDHOMHHFPOH_1_OFFSET))(KECKGDFIALJ);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_AHDLBAAJCCC_OFFSET))(this);
	}

	static ::System::Boolean IOHBDJJAIJH_1(::Foundation::Unreal::FGameplayTag AELLPLBJELA, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>* IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::Foundation::Unreal::FGameplayTag, ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IOHBDJJAIJH_1_OFFSET))(AELLPLBJELA, IGAAKDOIPNN);
	}

	static ::LNBCBKJIJBN_DHBPBLCGGGJ* FLBAFNHEDGH()
	{
		return ((::LNBCBKJIJBN_DHBPBLCGGGJ*(*)())((::PBYTE)hIl2Cpp + LNBCBKJIJBN_FLBAFNHEDGH_OFFSET))();
	}

	static ::System::Void HNFAPPAHNKF(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HNFAPPAHNKF_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, AELLPLBJELA);
	}

	static ::System::Boolean MNCMIJLDOGJ_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& HDALMGJCBLF)
	{
		return ((::System::Boolean(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_MNCMIJLDOGJ_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, HDALMGJCBLF);
	}

	static ::System::Int32 HBADNCJHEOJ_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Int32(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HBADNCJHEOJ_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM);
	}

	::System::Boolean DFKEPEMOJFH(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsWorld*, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_DFKEPEMOJFH_OFFSET))(this, GEEHGDABNJF, BKLGNCBNEGM);
	}

	static ::System::Void ADJNPIDCDNF_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_ADJNPIDCDNF_1_OFFSET))(KECKGDFIALJ, JFPDJGAMELP);
	}

	static ::Foundation::Unreal::FGameplayTagContainer IDIACLKBHHO_1(::Nap::NapECS::EcsWorld* GEEHGDABNJF, ::System::UInt32 BKLGNCBNEGM, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsWorld*, ::System::UInt32, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_IDIACLKBHHO_1_OFFSET))(GEEHGDABNJF, BKLGNCBNEGM, JFPDJGAMELP);
	}

	static ::Foundation::Unreal::FGameplayTagContainer ADPHACKJAOE_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTagContainer& JFPDJGAMELP)
	{
		return ((::Foundation::Unreal::FGameplayTagContainer(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTagContainer&))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_ADPHACKJAOE_1_OFFSET))(KECKGDFIALJ, JFPDJGAMELP);
	}

	::System::Void JLMFEKLPCKP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_JLMFEKLPCKP_OFFSET))(this);
	}

	static ::System::Void HNFAPPAHNKF_1(::Nap::NapECS::EcsEntity* KECKGDFIALJ, ::Foundation::Unreal::FGameplayTag AELLPLBJELA)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*, ::Foundation::Unreal::FGameplayTag))((::PBYTE)hIl2Cpp + LNBCBKJIJBN_HNFAPPAHNKF_1_OFFSET))(KECKGDFIALJ, AELLPLBJELA);
	}
};
