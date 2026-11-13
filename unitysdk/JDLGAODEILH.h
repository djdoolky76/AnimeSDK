#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class BillboardController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define JDLGAODEILH_BPIIOOFIDJC_OFFSET UNITYSDK_OFFSET(0x16998B50)
#define JDLGAODEILH_CCTOR_OFFSET UNITYSDK_OFFSET(0x169983D0)
#define JDLGAODEILH_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x16999090)
#define JDLGAODEILH_CLHDLMHCIGF_OFFSET UNITYSDK_OFFSET(0x169991B0)
#define JDLGAODEILH_CTOR_OFFSET UNITYSDK_OFFSET(0x1699A570)
#define JDLGAODEILH_EJDFCNLIAJC_OFFSET UNITYSDK_OFFSET(0x16998550)
#define JDLGAODEILH_ELKMGLNHEJF_OFFSET UNITYSDK_OFFSET(0x16998C20)
#define JDLGAODEILH_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x16998D90)
#define JDLGAODEILH_HKLFPDJACPF_OFFSET UNITYSDK_OFFSET(0x16999110)
#define JDLGAODEILH_HPJPMHKDIJF_OFFSET UNITYSDK_OFFSET(0x169997C0)
#define JDLGAODEILH_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x16999170)
#define JDLGAODEILH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16998B90)
#define JDLGAODEILH_LAPPMCNADCD_OFFSET UNITYSDK_OFFSET(0x16999EC0)
#define JDLGAODEILH_LLKIJKEANDP_OFFSET UNITYSDK_OFFSET(0x169985A0)
#define JDLGAODEILH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x16999000)
#define JDLGAODEILH_NEDELEMLCBG_OFFSET UNITYSDK_OFFSET(0x16998A30)
#define JDLGAODEILH_OCFJELBEKEK_OFFSET UNITYSDK_OFFSET(0x16999250)
#define JDLGAODEILH_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x16998C90)
#define JDLGAODEILH_PONNLAGFLIP_OFFSET UNITYSDK_OFFSET(0x16998A70)
#define JDLGAODEILH_TICK_OFFSET UNITYSDK_OFFSET(0x16998D30)

inline static constexpr unsigned int JDLGAODEILH_TypeDefinitionIndex = 72761;

	class JDLGAODEILH : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Transform* FINIFMOAEMK; // 0x38
		::UnityEngine::Material* ILKIEOPBAGE; // 0x40
		::UnityEngine::Transform* BFJOMBDJAGH; // 0x48
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x50
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x58
		::System::Single FHPCBOEPEKP; // 0x60
		::System::Single JKCALEMLIEE; // 0x64
		::System::Single CJCINIAFACG; // 0x68
		::System::Single MALJJHBHMHG; // 0x6C
		::System::Boolean HEBPLACLNGC; // 0x70
		::System::Boolean ACAPCHBDIBF; // 0x71
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 JIKBAIHEDIK; // 0x74
		static ::UnityEngine::Material** StaticGet_ANCBLNADNKF()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x67CE0);
		}

		static ::System::Int32* StaticGet_IKEBJGBKEFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14770);
		}

		static ::System::Int32* StaticGet_EHBPJJNEKFF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14774);
		}

		static ::System::Int32* StaticGet_MCPHJDHDMLE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14778);
		}

		static ::System::Int32* StaticGet_OOEPKNMIEPM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1477C);
		}

		static ::System::Int32* StaticGet_ICLIACKBCGK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14780);
		}

		static ::System::Int32* StaticGet_LFGDDPEIELP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14784);
		}

		static ::System::Int32* StaticGet_HKMIOIEJKJD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14788);
		}

		static ::System::Int32* StaticGet_GFFMELBCGJL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1478C);
		}

		static ::System::Int32* StaticGet_LGKPCJBHFMB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14790);
		}

		static ::System::Int32* StaticGet_FAIDGANDEJF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14794);
		}

		static ::System::Int32* StaticGet_GAPPGFFPNAG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x14798);
		}

		static ::System::Int32* StaticGet_OAMALOGFAAH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1479C);
		}

		static ::System::Int32* StaticGet_EEJDJNCLILA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147A0);
		}

		static ::System::Int32* StaticGet_EMAICDBDNNB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147A4);
		}

		static ::System::Int32* StaticGet_OANIFFAPPED()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147A8);
		}

		static ::System::Int32* StaticGet_IOIIJGDFLIF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147AC);
		}

		static ::System::Int32* StaticGet_GIHHBHAJPGG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147B0);
		}

		static ::System::Int32* StaticGet_GHGIJLMGPHE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147B4);
		}

		static ::System::Int32* StaticGet_ALPDOFBNEON()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x147B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDLGAODEILH_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_CTOR_OFFSET))(this);
		}

		::System::Void EJDFCNLIAJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_EJDFCNLIAJC_OFFSET))(this);
		}

		::System::Void NEDELEMLCBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_NEDELEMLCBG_OFFSET))(this);
		}

		::System::Void PONNLAGFLIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_PONNLAGFLIP_OFFSET))(this);
		}

		::System::Void BPIIOOFIDJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_BPIIOOFIDJC_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JDLGAODEILH_TICK_OFFSET))(this, a1);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void ELKMGLNHEJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_ELKMGLNHEJF_OFFSET))(this);
		}

		::System::Void HKLFPDJACPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_HKLFPDJACPF_OFFSET))(this);
		}

		::System::Void LLKIJKEANDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_LLKIJKEANDP_OFFSET))(this);
		}

		::UnityEngine::Material* CLHDLMHCIGF(::UnityEngine::Renderer* a1)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::UnityEngine::Renderer*))((::PBYTE)hIl2Cpp + JDLGAODEILH_CLHDLMHCIGF_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void OCFJELBEKEK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDLGAODEILH_OCFJELBEKEK_OFFSET))(this, a1);
		}

		::System::Void HPJPMHKDIJF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDLGAODEILH_HPJPMHKDIJF_OFFSET))(this, a1);
		}

		::System::Void LAPPMCNADCD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JDLGAODEILH_LAPPMCNADCD_OFFSET))(this, a1);
		}

		::RPG::Client::BillboardController* JJINILFDJOF()
		{
			return ((::RPG::Client::BillboardController*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDLGAODEILH_JJINILFDJOF_OFFSET))(this);
		}

	};
