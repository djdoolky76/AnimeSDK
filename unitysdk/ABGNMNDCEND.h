#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Color.h"
class IDGOINOHFEE;
class KDIIINMLMNC;
namespace RPG::Client::LiteInstancedItem { class ItemPrototype; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define ABGNMNDCEND_ABKBOGIGAEH_OFFSET UNITYSDK_OFFSET(0xB0F3B40)
#define ABGNMNDCEND_AHEMNJEGOIO_OFFSET UNITYSDK_OFFSET(0xB0F48E0)
#define ABGNMNDCEND_AJIHGLFALCB_OFFSET UNITYSDK_OFFSET(0xB0F3A70)
#define ABGNMNDCEND_BDHFNGPBBHL_1_OFFSET UNITYSDK_OFFSET(0xB0F5440)
#define ABGNMNDCEND_BDHFNGPBBHL_2_OFFSET UNITYSDK_OFFSET(0xB0F55A0)
#define ABGNMNDCEND_BDHFNGPBBHL_3_OFFSET UNITYSDK_OFFSET(0xB0F5700)
#define ABGNMNDCEND_BDHFNGPBBHL_OFFSET UNITYSDK_OFFSET(0xB0F52E0)
#define ABGNMNDCEND_BHFPILLOKEB_OFFSET UNITYSDK_OFFSET(0xB0F49E0)
#define ABGNMNDCEND_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0F79D0)
#define ABGNMNDCEND_CKDAJLOOIJO_OFFSET UNITYSDK_OFFSET(0xB0F6890)
#define ABGNMNDCEND_CLNEAOEENDE_OFFSET UNITYSDK_OFFSET(0xB0F22F0)
#define ABGNMNDCEND_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB0F3880)
#define ABGNMNDCEND_CTOR_OFFSET UNITYSDK_OFFSET(0xB0F3240)
#define ABGNMNDCEND_DALAGAHMNCN_OFFSET UNITYSDK_OFFSET(0xB0F7870)
#define ABGNMNDCEND_EDNIMMABBDJ_OFFSET UNITYSDK_OFFSET(0xB0F4BD0)
#define ABGNMNDCEND_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB0F2110)
#define ABGNMNDCEND_FDMNDEDEDOD_OFFSET UNITYSDK_OFFSET(0xB0F59E0)
#define ABGNMNDCEND_GDMFGCNEKLG_OFFSET UNITYSDK_OFFSET(0xB0F7960)
#define ABGNMNDCEND_GET_KEY_OFFSET UNITYSDK_OFFSET(0xB0F2100)
#define ABGNMNDCEND_GKBJNGEJNDL_OFFSET UNITYSDK_OFFSET(0xB0F2660)
#define ABGNMNDCEND_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB0F4600)
#define ABGNMNDCEND_IAEBAPMFBNC_OFFSET UNITYSDK_OFFSET(0xB0F6A90)
#define ABGNMNDCEND_IBDPGFEPEGL_OFFSET UNITYSDK_OFFSET(0xB0F5BE0)
#define ABGNMNDCEND_IHCFOHDDAMN_OFFSET UNITYSDK_OFFSET(0xB0F2370)
#define ABGNMNDCEND_JCIONHHNLPD_OFFSET UNITYSDK_OFFSET(0xB0F39A0)
#define ABGNMNDCEND_KHPMFBPOFEG_OFFSET UNITYSDK_OFFSET(0xB0F78C0)
#define ABGNMNDCEND_LMEDFANCLHE_OFFSET UNITYSDK_OFFSET(0xB0F6AE0)
#define ABGNMNDCEND_LOEDIDACDLD_OFFSET UNITYSDK_OFFSET(0xB0F68F0)
#define ABGNMNDCEND_NBDCEHAOGLM_OFFSET UNITYSDK_OFFSET(0xB0F6A10)
#define ABGNMNDCEND_NEGJMLILOKL_OFFSET UNITYSDK_OFFSET(0xB0F4D30)
#define ABGNMNDCEND_NEGNNGDGAEC_OFFSET UNITYSDK_OFFSET(0xB0F79C0)
#define ABGNMNDCEND_NEJNJOFHOHK_OFFSET UNITYSDK_OFFSET(0xB0F7530)
#define ABGNMNDCEND_NHEBOACBDBE_OFFSET UNITYSDK_OFFSET(0xB0F5900)
#define ABGNMNDCEND_NJLLHJAIPKM_OFFSET UNITYSDK_OFFSET(0xB0F4740)
#define ABGNMNDCEND_OFKMOGHDAEL_OFFSET UNITYSDK_OFFSET(0xB0F4860)
#define ABGNMNDCEND_OIKKKPGAPJD_OFFSET UNITYSDK_OFFSET(0xB0F5EC0)
#define ABGNMNDCEND_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xB0F3350)
#define ABGNMNDCEND_ONFEIIIFCOK_OFFSET UNITYSDK_OFFSET(0xB0F4370)
#define ABGNMNDCEND_PELNIEMFJNM_OFFSET UNITYSDK_OFFSET(0xB0F69A0)
#define ABGNMNDCEND_PHKCMLOLDJO_OFFSET UNITYSDK_OFFSET(0xB0F6F40)
#define ABGNMNDCEND_PNFPMIDNFNK_OFFSET UNITYSDK_OFFSET(0xB0F6B30)

inline static constexpr unsigned int ABGNMNDCEND_TypeDefinitionIndex = 73711;

	class ABGNMNDCEND : public ::System::Object
	{
	public:
		::UnityEngine::ComputeBuffer* JNGOJOFAANB; // 0x10
		::UnityEngine::ComputeBuffer* JMAFHECEMLM; // 0x18
		::Il2CppArray<::UnityEngine::Plane>* FIFAJNAGPGI; // 0x20
		::System::String* EIDNPHOGODK; // 0x28
		::UnityEngine::ComputeShader* KPAEGELHHGN; // 0x30
		::UnityEngine::RenderTexture* KOHFOKGFDGC; // 0x38
		::UnityEngine::ComputeBuffer* HDLKFHBFIMP; // 0x40
		::Il2CppArray<::UnityEngine::Vector4>* JIFEBPMDCGN; // 0x48
		::UnityEngine::RenderTexture* KCDEFIDFNMB; // 0x50
		::UnityEngine::ComputeBuffer* BKHGMFPNHEP; // 0x58
		::System::Collections::Generic::List_1<::KDIIINMLMNC*>* EGMLIDBLHBC; // 0x60
		::UnityEngine::ComputeBuffer* CANLEJJHFLB; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LiteInstancedItem::ItemPrototype*, ::KDIIINMLMNC*>* ANLAECLABEO; // 0x70
		::Il2CppArray<::IDGOINOHFEE*>* CCECMIKFAME; // 0x78
		::UnityEngine::ComputeBuffer* JJJNPJEKIJC; // 0x80
		::UnityEngine::ComputeBuffer* LMGFDDLIEOC; // 0x88
		::Il2CppArray<::System::UInt32>* BMNACADOALP; // 0x90
		::UnityEngine::ComputeBuffer* AAGICOCOAND; // 0x98
		::Il2CppArray<::System::UInt32>* GODCEIKHPLF; // 0xA0
		::Il2CppArray<::UnityEngine::Vector4>* BGGMKGMCHDA; // 0xA8
		::Unity::Collections::NativeArray_1<::System::UInt32> DMFFMEFMHHD; // 0xB0
		::System::Byte _padding0[0x8];
		::System::Int32 KEDDFGADBIA; // 0xC0
		::UnityEngine::Vector3 NCFCNIGFCDK; // 0xC4
		::System::Boolean DOFJLCMOJML; // 0xD0
		::System::Boolean CAKGIPPNJBC; // 0xD1
		::System::Boolean FHMBDPHBEOH; // 0xD2
		::System::Boolean LHOLLFDKIMO; // 0xD3
		::System::Int32 FDLEPKMIJJA; // 0xD4
		::UnityEngine::Quaternion DIHINKIBJNL; // 0xD8
		::System::Int32 OKPGILGHOIJ; // 0xE8
		::System::Boolean DKDPAENPLGM; // 0xEC
		::System::Boolean MNHAIJDCHMN; // 0xED
		::System::Boolean NADCIIPNHNM; // 0xEE
		::System::Boolean AIIHABOJFEP; // 0xEF
		::Unity::Collections::NativeArray_1<::UnityEngine::Vector4> EFGGMOEMJEH; // 0xF0
		::System::Byte _padding1[0x8];
		::System::Int32 JIENLAIMKBD; // 0x100
		::System::Int32 EBJKGILBDML; // 0x104
		::Unity::Collections::NativeArray_1<::UnityEngine::Matrix4x4> JCPFEKHCHGI; // 0x108
		::System::Byte _padding2[0x8];
		::System::Int32 FLDELBDMDKL; // 0x118
		::System::Boolean KCFMLIOCGCF; // 0x11C
		::System::Boolean LBMLKACIFPN; // 0x11D
		::System::Byte _padding3[0x2];
		::System::Int32 NAGELHKPMLK; // 0x120
		::UnityEngine::Matrix4x4 GFKMOPACLIP; // 0x124
		::System::Int32 OPHONBBGLGI; // 0x164
		::System::Int32 EIOIIKONHLM; // 0x168
		static ::System::Single* StaticGet_FEFMIELKCIF()
		{
			return (::System::Single*)UnitySDK::FromName("", "ABGNMNDCEND")->GetStaticField(0xF040);
		}

		static ::System::Single* StaticGet_CJNBKHLKNLB()
		{
			return (::System::Single*)UnitySDK::FromName("", "ABGNMNDCEND")->GetStaticField(0xF044);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABGNMNDCEND_CCTOR_OFFSET))();
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + ABGNMNDCEND_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Void JCIONHHNLPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_JCIONHHNLPD_OFFSET))(this);
		}

		::System::Void AJIHGLFALCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_AJIHGLFALCB_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_OINBDMGFFJL_OFFSET))(this);
		}

		::System::Void ABKBOGIGAEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_ABKBOGIGAEH_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void BHFPILLOKEB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_BHFPILLOKEB_OFFSET))(this);
		}

		::System::Void BDHFNGPBBHL(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + ABGNMNDCEND_BDHFNGPBBHL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BDHFNGPBBHL_1(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + ABGNMNDCEND_BDHFNGPBBHL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BDHFNGPBBHL_2(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::UnityEngine::Color a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ABGNMNDCEND_BDHFNGPBBHL_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BDHFNGPBBHL_3(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::Int32 a2, ::UnityEngine::Matrix4x4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + ABGNMNDCEND_BDHFNGPBBHL_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NHEBOACBDBE(::RPG::Client::LiteInstancedItem::ItemPrototype* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + ABGNMNDCEND_NHEBOACBDBE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FDMNDEDEDOD(::IDGOINOHFEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGOINOHFEE*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_FDMNDEDEDOD_OFFSET))(this, a1);
		}

		::System::Void ONFEIIIFCOK(::IDGOINOHFEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDGOINOHFEE*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_ONFEIIIFCOK_OFFSET))(this, a1);
		}

		::System::Void CKDAJLOOIJO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABGNMNDCEND_CKDAJLOOIJO_OFFSET))(this, a1);
		}

		::System::Void LOEDIDACDLD(::System::Int32 a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + ABGNMNDCEND_LOEDIDACDLD_OFFSET))(this, a1, a2);
		}

		::System::Void PELNIEMFJNM(::System::Int32 a1, ::UnityEngine::Vector4 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + ABGNMNDCEND_PELNIEMFJNM_OFFSET))(this, a1, a2);
		}

		::System::Void NBDCEHAOGLM(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ABGNMNDCEND_NBDCEHAOGLM_OFFSET))(this, a1, a2);
		}

		::System::Void IAEBAPMFBNC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_IAEBAPMFBNC_OFFSET))(this, a1);
		}

		::System::Void LMEDFANCLHE(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_LMEDFANCLHE_OFFSET))(this, a1);
		}

		::KDIIINMLMNC* IBDPGFEPEGL(::RPG::Client::LiteInstancedItem::ItemPrototype* a1)
		{
			return ((::KDIIINMLMNC*(*)(::PVOID, ::RPG::Client::LiteInstancedItem::ItemPrototype*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_IBDPGFEPEGL_OFFSET))(this, a1);
		}

		::System::Void PNFPMIDNFNK(::KDIIINMLMNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDIIINMLMNC*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_PNFPMIDNFNK_OFFSET))(this, a1);
		}

		::System::Void PHKCMLOLDJO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABGNMNDCEND_PHKCMLOLDJO_OFFSET))(this, a1);
		}

		::System::Void NEJNJOFHOHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_NEJNJOFHOHK_OFFSET))(this);
		}

		::System::Void NJLLHJAIPKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_NJLLHJAIPKM_OFFSET))(this);
		}

		::System::Void AHEMNJEGOIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_AHEMNJEGOIO_OFFSET))(this);
		}

		::System::Void OFKMOGHDAEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_OFKMOGHDAEL_OFFSET))(this);
		}

		::System::Void EDNIMMABBDJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_EDNIMMABBDJ_OFFSET))(this);
		}

		::System::Void OIKKKPGAPJD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABGNMNDCEND_OIKKKPGAPJD_OFFSET))(this, a1);
		}

		::System::Void GKBJNGEJNDL(::UnityEngine::Rendering::CommandBuffer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_GKBJNGEJNDL_OFFSET))(this, a1);
		}

		::System::Void NEGJMLILOKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_NEGJMLILOKL_OFFSET))(this);
		}

		::System::Void IHCFOHDDAMN(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ABGNMNDCEND_IHCFOHDDAMN_OFFSET))(this, a1);
		}

		::System::Int32 DALAGAHMNCN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_DALAGAHMNCN_OFFSET))(this);
		}

		::UnityEngine::Camera* CLNEAOEENDE()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_CLNEAOEENDE_OFFSET))(this);
		}

		::System::Int32 KHPMFBPOFEG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_KHPMFBPOFEG_OFFSET))(this);
		}

		::System::Boolean GDMFGCNEKLG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_GDMFGCNEKLG_OFFSET))(this);
		}

		::System::String* NEGNNGDGAEC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABGNMNDCEND_NEGNNGDGAEC_OFFSET))(this);
		}

	};
