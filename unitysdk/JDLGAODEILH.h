#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class BillboardController; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }

#define JDLGAODEILH_BPIIOOFIDJC_OFFSET UNITYSDK_OFFSET(0x165D62C0)
#define JDLGAODEILH_CCTOR_OFFSET UNITYSDK_OFFSET(0x165D5B40)
#define JDLGAODEILH_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0x165D6800)
#define JDLGAODEILH_CLHDLMHCIGF_OFFSET UNITYSDK_OFFSET(0x165D6920)
#define JDLGAODEILH_CTOR_OFFSET UNITYSDK_OFFSET(0x165D7CE0)
#define JDLGAODEILH_EJDFCNLIAJC_OFFSET UNITYSDK_OFFSET(0x165D5CC0)
#define JDLGAODEILH_ELKMGLNHEJF_OFFSET UNITYSDK_OFFSET(0x165D6390)
#define JDLGAODEILH_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x165D6500)
#define JDLGAODEILH_HKLFPDJACPF_OFFSET UNITYSDK_OFFSET(0x165D6880)
#define JDLGAODEILH_HPJPMHKDIJF_OFFSET UNITYSDK_OFFSET(0x165D6F30)
#define JDLGAODEILH_JJINILFDJOF_OFFSET UNITYSDK_OFFSET(0x165D68E0)
#define JDLGAODEILH_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x165D6300)
#define JDLGAODEILH_LAPPMCNADCD_OFFSET UNITYSDK_OFFSET(0x165D7630)
#define JDLGAODEILH_LLKIJKEANDP_OFFSET UNITYSDK_OFFSET(0x165D5D10)
#define JDLGAODEILH_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x165D6770)
#define JDLGAODEILH_NEDELEMLCBG_OFFSET UNITYSDK_OFFSET(0x165D61A0)
#define JDLGAODEILH_OCFJELBEKEK_OFFSET UNITYSDK_OFFSET(0x165D69C0)
#define JDLGAODEILH_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x165D6400)
#define JDLGAODEILH_PONNLAGFLIP_OFFSET UNITYSDK_OFFSET(0x165D61E0)
#define JDLGAODEILH_TICK_OFFSET UNITYSDK_OFFSET(0x165D64A0)

inline static constexpr unsigned int JDLGAODEILH_TypeDefinitionIndex = 70782;

	class JDLGAODEILH : public ::RPG::Client::TABehaviorBase
	{
	public:
		::UnityEngine::Transform* BFJOMBDJAGH; // 0x38
		::UnityEngine::Transform* FINIFMOAEMK; // 0x40
		::Il2CppArray<::UnityEngine::Renderer*>* MOECGMPCECP; // 0x48
		::UnityEngine::Material* ILKIEOPBAGE; // 0x50
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x58
		::UnityEngine::Vector3 JIKBAIHEDIK; // 0x60
		::System::Boolean ACAPCHBDIBF; // 0x6C
		::System::Boolean HEBPLACLNGC; // 0x6D
		::System::Byte _padding0[0x2];
		::System::Single MALJJHBHMHG; // 0x70
		::System::Single JKCALEMLIEE; // 0x74
		::System::Single FHPCBOEPEKP; // 0x78
		::System::Single CJCINIAFACG; // 0x7C
		static ::UnityEngine::Material** StaticGet_ANCBLNADNKF()
		{
			return (::UnityEngine::Material**)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x6F1D0);
		}

		static ::System::Int32* StaticGet_HKMIOIEJKJD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15830);
		}

		static ::System::Int32* StaticGet_ALPDOFBNEON()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15834);
		}

		static ::System::Int32* StaticGet_EEJDJNCLILA()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15838);
		}

		static ::System::Int32* StaticGet_ICLIACKBCGK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1583C);
		}

		static ::System::Int32* StaticGet_FAIDGANDEJF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15840);
		}

		static ::System::Int32* StaticGet_EHBPJJNEKFF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15844);
		}

		static ::System::Int32* StaticGet_IOIIJGDFLIF()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15848);
		}

		static ::System::Int32* StaticGet_IKEBJGBKEFJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1584C);
		}

		static ::System::Int32* StaticGet_OOEPKNMIEPM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15850);
		}

		static ::System::Int32* StaticGet_OAMALOGFAAH()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15854);
		}

		static ::System::Int32* StaticGet_GIHHBHAJPGG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15858);
		}

		static ::System::Int32* StaticGet_MCPHJDHDMLE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1585C);
		}

		static ::System::Int32* StaticGet_EMAICDBDNNB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15860);
		}

		static ::System::Int32* StaticGet_LGKPCJBHFMB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15864);
		}

		static ::System::Int32* StaticGet_GAPPGFFPNAG()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15868);
		}

		static ::System::Int32* StaticGet_LFGDDPEIELP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x1586C);
		}

		static ::System::Int32* StaticGet_GFFMELBCGJL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15870);
		}

		static ::System::Int32* StaticGet_OANIFFAPPED()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15874);
		}

		static ::System::Int32* StaticGet_GHGIJLMGPHE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JDLGAODEILH")->GetStaticField(0x15878);
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
