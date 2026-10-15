#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ADHEOIELCKB_NIEDLNHBNAM.h"
#include "unitysdk/CriWare/CriMana/Player_Status.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace CriWare { class CriManaMovieController; }
namespace RPG::Client { class VideoTexture; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshRenderer; }

#define ADHEOIELCKB_AFIBJFHPHDD_OFFSET UNITYSDK_OFFSET(0xB139520)
#define ADHEOIELCKB_CCTOR_OFFSET UNITYSDK_OFFSET(0xB13B430)
#define ADHEOIELCKB_CFOGDEPOJIP_OFFSET UNITYSDK_OFFSET(0xB13A010)
#define ADHEOIELCKB_CTOR_OFFSET UNITYSDK_OFFSET(0xB13B3A0)
#define ADHEOIELCKB_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0xB13A230)
#define ADHEOIELCKB_FAHMCPCMIGK_OFFSET UNITYSDK_OFFSET(0xB13AE60)
#define ADHEOIELCKB_FKGAGDHOPLK_OFFSET UNITYSDK_OFFSET(0xB139570)
#define ADHEOIELCKB_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0xB139CD0)
#define ADHEOIELCKB_HBCAMLHKGHD_OFFSET UNITYSDK_OFFSET(0xB139AF0)
#define ADHEOIELCKB_HDDLLNAKJDL_OFFSET UNITYSDK_OFFSET(0xB139A30)
#define ADHEOIELCKB_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB13B0E0)
#define ADHEOIELCKB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB1394B0)
#define ADHEOIELCKB_JDAGFHEPMHF_OFFSET UNITYSDK_OFFSET(0xB13A4C0)
#define ADHEOIELCKB_KPKAHDPJPAE_OFFSET UNITYSDK_OFFSET(0xB13AF00)
#define ADHEOIELCKB_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xB139930)
#define ADHEOIELCKB_MPINDLOMCJL_OFFSET UNITYSDK_OFFSET(0xB139F20)
#define ADHEOIELCKB_MPMDDCLLPNB_OFFSET UNITYSDK_OFFSET(0xB139870)
#define ADHEOIELCKB_NEACLNIKMHO_OFFSET UNITYSDK_OFFSET(0xB139E30)
#define ADHEOIELCKB_NJHOAIFGNNH_OFFSET UNITYSDK_OFFSET(0xB13B330)
#define ADHEOIELCKB_OBCNGEPFKHB_OFFSET UNITYSDK_OFFSET(0xB13A280)
#define ADHEOIELCKB_OJANPJEFLDL_OFFSET UNITYSDK_OFFSET(0xB13A780)
#define ADHEOIELCKB_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xB139DD0)
#define ADHEOIELCKB_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xB139820)
#define ADHEOIELCKB_PICDOIMIDKM_OFFSET UNITYSDK_OFFSET(0xB13A3E0)

	class ADHEOIELCKB : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Action* ANIGFHANAOC; // 0x18
		::System::String* MBLBBFFOBAE; // 0x20
		::UnityEngine::Material* AFEOLEJMGFO; // 0x28
		::CriWare::CriManaMovieController* PONBMNDNPIF; // 0x30
		::UnityEngine::MeshRenderer* OMDMGANEANA; // 0x38
		::ADHEOIELCKB_NIEDLNHBNAM HABJDONNBAN; // 0x40
		::System::Int32 BLMMNEOJCGP; // 0x90
		::CriWare::CriMana::Player_Status LPJOODAMFIB; // 0x94
		::System::Boolean BILGFCCLPNF; // 0x98
		::System::Boolean LAOELKCFKBL; // 0x99
		::System::Boolean KHIJJOIKKAH; // 0x9A
		::System::Byte _padding0[0x1];
		::System::UInt32 IMBEEHLLOHD; // 0x9C
		static ::System::Int32* StaticGet_ONPGPMDKJMK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ADHEOIELCKB")->GetStaticField(0x11580);
		}

		static ::System::Int32* StaticGet_MIEGJCJLKOP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "ADHEOIELCKB")->GetStaticField(0x11584);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADHEOIELCKB_CCTOR_OFFSET))();
		}

		::RPG::Client::VideoTexture* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::VideoTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_HPNDIIPEFLJ_OFFSET))(this);
		}

		::System::Void AFIBJFHPHDD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_AFIBJFHPHDD_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_DFFCHNLKELO_OFFSET))(this);
		}

		::System::Void PICDOIMIDKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_PICDOIMIDKM_OFFSET))(this);
		}

		::System::Void JDAGFHEPMHF(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + ADHEOIELCKB_JDAGFHEPMHF_OFFSET))(this, a1);
		}

		::System::Void OJANPJEFLDL(::ADHEOIELCKB_NIEDLNHBNAM a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADHEOIELCKB_NIEDLNHBNAM))((::PBYTE)hIl2Cpp + ADHEOIELCKB_OJANPJEFLDL_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void NJHOAIFGNNH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADHEOIELCKB_NJHOAIFGNNH_OFFSET))(this, a1);
		}

		::System::Void FKGAGDHOPLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_FKGAGDHOPLK_OFFSET))(this);
		}

		::System::Void CFOGDEPOJIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_CFOGDEPOJIP_OFFSET))(this);
		}

		::System::Void KPKAHDPJPAE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ADHEOIELCKB_KPKAHDPJPAE_OFFSET))(this, a1);
		}

		::System::Void MPMDDCLLPNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_MPMDDCLLPNB_OFFSET))(this);
		}

		::System::Void HBCAMLHKGHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_HBCAMLHKGHD_OFFSET))(this);
		}

		::System::Void OBCNGEPFKHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_OBCNGEPFKHB_OFFSET))(this);
		}

		::System::Void HDDLLNAKJDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_HDDLLNAKJDL_OFFSET))(this);
		}

		::System::Void NEACLNIKMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_NEACLNIKMHO_OFFSET))(this);
		}

		::System::Void FAHMCPCMIGK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_FAHMCPCMIGK_OFFSET))(this);
		}

		::System::Void MPINDLOMCJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADHEOIELCKB_MPINDLOMCJL_OFFSET))(this);
		}

	};
