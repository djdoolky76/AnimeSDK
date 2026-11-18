#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"

class AGJFJGEMIPB;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsWorld; }

#define PGNFPEFOACA_AHDLBAAJCCC_OFFSET UNITYSDK_OFFSET(0x178CA290)
#define PGNFPEFOACA_ALMPNBEMIML_OFFSET UNITYSDK_OFFSET(0x178CA780)
#define PGNFPEFOACA_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x178CC1E0)
#define PGNFPEFOACA_BDNKNBAIHMJ_OFFSET UNITYSDK_OFFSET(0x178C96A0)
#define PGNFPEFOACA_BFIMCBDPJPC_OFFSET UNITYSDK_OFFSET(0x178CB5E0)
#define PGNFPEFOACA_CFOHPJBMOMI_OFFSET UNITYSDK_OFFSET(0x178CC2B0)
#define PGNFPEFOACA_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x178C95C0)
#define PGNFPEFOACA_DIPEGGKADJF_OFFSET UNITYSDK_OFFSET(0x178CA320)
#define PGNFPEFOACA_FJLCBEKIOCH_OFFSET UNITYSDK_OFFSET(0x178C9AB0)
#define PGNFPEFOACA_HMFEFLHGHJD_OFFSET UNITYSDK_OFFSET(0x178CACB0)
#define PGNFPEFOACA_IMCDOOPHALM_OFFSET UNITYSDK_OFFSET(0x178CA820)
#define PGNFPEFOACA_IPNHCGJNMCL_OFFSET UNITYSDK_OFFSET(0x178CB150)
#define PGNFPEFOACA_JDOPJKMFLNC_OFFSET UNITYSDK_OFFSET(0x178CAFB0)
#define PGNFPEFOACA_JGCMKMMFNJM_OFFSET UNITYSDK_OFFSET(0x178CC180)
#define PGNFPEFOACA_KCECDPBLEED_OFFSET UNITYSDK_OFFSET(0x178CBC50)
#define PGNFPEFOACA_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x178CC220)
#define PGNFPEFOACA_NKJCICGADIL_OFFSET UNITYSDK_OFFSET(0x178CADD0)
#define PGNFPEFOACA_OBECOHNCFMK_OFFSET UNITYSDK_OFFSET(0x178CB680)
#define PGNFPEFOACA_PMHJBNNPCLB_OFFSET UNITYSDK_OFFSET(0x178CC310)
#define PGNFPEFOACA_POSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x178C9610)
#define PGNFPEFOACA__CCTOR_OFFSET UNITYSDK_OFFSET(0x178C9A90)
#define PGNFPEFOACA__CTOR_OFFSET UNITYSDK_OFFSET(0x178C9A40)

inline static constexpr unsigned int PGNFPEFOACA_TypeDefinitionIndex = 83308;

class PGNFPEFOACA : public ::OAOOLPCNHKA
{
public:
	static ::System::Boolean* StaticGet_ENHHJDHBDEO()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PGNFPEFOACA_TypeDefinitionIndex)->GetStaticField(0x107D0);
	}
	static ::System::Boolean* StaticGet_LLADNJHIOMI()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PGNFPEFOACA_TypeDefinitionIndex)->GetStaticField(0x107D1);
	}
	static ::System::Int32* StaticGet_LLHOABLDDDL()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PGNFPEFOACA_TypeDefinitionIndex)->GetStaticField(0x107D4);
	}
	static ::System::Int32* StaticGet_ANCLEICOKLN()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PGNFPEFOACA_TypeDefinitionIndex)->GetStaticField(0x107D8);
	}
	static ::System::Int32* StaticGet_KKKBMLNBFEK()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PGNFPEFOACA_TypeDefinitionIndex)->GetStaticField(0x107DC);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFPEFOACA__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNFPEFOACA__CCTOR_OFFSET))();
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void PostLateUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFPEFOACA_POSTLATEUPDATE_OFFSET))(this);
	}

	static ::System::Boolean FJLCBEKIOCH(::System::UInt32 MEHIKNLAGJF, ::AGJFJGEMIPB* CENFDFIKBDC)
	{
		return ((::System::Boolean(*)(::System::UInt32, ::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_FJLCBEKIOCH_OFFSET))(MEHIKNLAGJF, CENFDFIKBDC);
	}

	::System::Void AHDLBAAJCCC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGNFPEFOACA_AHDLBAAJCCC_OFFSET))(this);
	}

	static ::System::Void DIPEGGKADJF(::AGJFJGEMIPB* FDPMONDMGII)
	{
		return ((::System::Void(*)(::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_DIPEGGKADJF_OFFSET))(FDPMONDMGII);
	}

	static ::System::Void IPNHCGJNMCL(::AGJFJGEMIPB* CENFDFIKBDC)
	{
		return ((::System::Void(*)(::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_IPNHCGJNMCL_OFFSET))(CENFDFIKBDC);
	}

	static ::System::Void OBECOHNCFMK(::AGJFJGEMIPB* FDPMONDMGII)
	{
		return ((::System::Void(*)(::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_OBECOHNCFMK_OFFSET))(FDPMONDMGII);
	}

	static ::System::Void JGCMKMMFNJM(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PGNFPEFOACA_JGCMKMMFNJM_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Boolean NKJCICGADIL(::MoleMole::Battle::Entity* FINEANOLAPH)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_NKJCICGADIL_OFFSET))(FINEANOLAPH);
	}

	static ::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_APAGIJMHEAK_OFFSET))(MNGHGOLKKNO);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void BDNKNBAIHMJ()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGNFPEFOACA_BDNKNBAIHMJ_OFFSET))();
	}

	static ::System::Boolean ALMPNBEMIML()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGNFPEFOACA_ALMPNBEMIML_OFFSET))();
	}

	static ::System::Void CFOHPJBMOMI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + PGNFPEFOACA_CFOHPJBMOMI_OFFSET))(EGEGIMGMJHN);
	}

	static ::System::Void IMCDOOPHALM(::AGJFJGEMIPB* JCNBNNJDKJD)
	{
		return ((::System::Void(*)(::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_IMCDOOPHALM_OFFSET))(JCNBNNJDKJD);
	}

	static ::System::Void JDOPJKMFLNC(::MoleMole::Battle::Entity* FINEANOLAPH, ::AGJFJGEMIPB* JCNBNNJDKJD)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_JDOPJKMFLNC_OFFSET))(FINEANOLAPH, JCNBNNJDKJD);
	}

	static ::System::Boolean KCECDPBLEED(::System::Boolean LODKHFELMFB, ::System::Int32 GJMLMHNLHAA)
	{
		return ((::System::Boolean(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + PGNFPEFOACA_KCECDPBLEED_OFFSET))(LODKHFELMFB, GJMLMHNLHAA);
	}

	static ::System::Void PMHJBNNPCLB(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_PMHJBNNPCLB_OFFSET))(MNGHGOLKKNO);
	}

	static ::System::Boolean BFIMCBDPJPC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + PGNFPEFOACA_BFIMCBDPJPC_OFFSET))();
	}

	static ::System::Boolean HMFEFLHGHJD(::MoleMole::Battle::Entity* FINEANOLAPH, ::AGJFJGEMIPB* JCNBNNJDKJD)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::AGJFJGEMIPB*))((::PBYTE)hIl2Cpp + PGNFPEFOACA_HMFEFLHGHJD_OFFSET))(FINEANOLAPH, JCNBNNJDKJD);
	}
};
