#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MThreadRunState.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Threading { class Thread; }

#define LCBKCCPECEN_BLGJKDMKFKO_OFFSET UNITYSDK_OFFSET(0xB60B7C0)
#define LCBKCCPECEN_CIHAECGDADP_OFFSET UNITYSDK_OFFSET(0xB60B890)
#define LCBKCCPECEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB60ABF0)
#define LCBKCCPECEN_EBLKGDNNOAG_OFFSET UNITYSDK_OFFSET(0xB60BA30)
#define LCBKCCPECEN_FHDMIIFONFC_OFFSET UNITYSDK_OFFSET(0xB60BBA0)
#define LCBKCCPECEN_FLIMKAIKKMH_OFFSET UNITYSDK_OFFSET(0xB60B840)
#define LCBKCCPECEN_GDKEMLOODOA_OFFSET UNITYSDK_OFFSET(0xB60B650)
#define LCBKCCPECEN_GJAIBOJJCFA_OFFSET UNITYSDK_OFFSET(0xB60B600)
#define LCBKCCPECEN_GKAOMIJAKFA_OFFSET UNITYSDK_OFFSET(0xB60AD40)
#define LCBKCCPECEN_GKLEHMHPNCD_OFFSET UNITYSDK_OFFSET(0xB60B470)
#define LCBKCCPECEN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xB60AC80)
#define LCBKCCPECEN_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xB60B1C0)
#define LCBKCCPECEN_IECIAPPANHI_OFFSET UNITYSDK_OFFSET(0xB60B420)
#define LCBKCCPECEN_IGDPMGKNFGN_OFFSET UNITYSDK_OFFSET(0xB60ADE0)
#define LCBKCCPECEN_IPIMJAFLCAI_OFFSET UNITYSDK_OFFSET(0xB60B2F0)
#define LCBKCCPECEN_JIBIHEOICOO_OFFSET UNITYSDK_OFFSET(0xB60B290)
#define LCBKCCPECEN_JINOGIOBNCK_OFFSET UNITYSDK_OFFSET(0xB60AEC0)
#define LCBKCCPECEN_JNACBACPDEM_OFFSET UNITYSDK_OFFSET(0xB60AE80)
#define LCBKCCPECEN_KDHCICFNAOC_OFFSET UNITYSDK_OFFSET(0xB60AD90)
#define LCBKCCPECEN_KEDIGGJPHAO_OFFSET UNITYSDK_OFFSET(0xB60B960)
#define LCBKCCPECEN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB60AC40)
#define LCBKCCPECEN_LHNMLKNGGOF_OFFSET UNITYSDK_OFFSET(0xB60BC20)
#define LCBKCCPECEN_LPFNFOPFAJF_OFFSET UNITYSDK_OFFSET(0xB60B720)
#define LCBKCCPECEN_MCKLMJLCMHN_OFFSET UNITYSDK_OFFSET(0xB60B770)
#define LCBKCCPECEN_NLKPKABOIPJ_OFFSET UNITYSDK_OFFSET(0xB60AE30)
#define LCBKCCPECEN_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB60AF10)
#define LCBKCCPECEN_OEOAFGKOFCF_OFFSET UNITYSDK_OFFSET(0xB60BC70)
#define LCBKCCPECEN_OHMHJFANEIF_OFFSET UNITYSDK_OFFSET(0xB60B3D0)
#define LCBKCCPECEN_OKIBPJGMIBM_OFFSET UNITYSDK_OFFSET(0xB60BCC0)

inline static constexpr unsigned int LCBKCCPECEN_TypeDefinitionIndex = 59443;

	class LCBKCCPECEN : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* EDCBDIHKDMG; // 0x10
		::System::Object* DMFEKIIDMFL; // 0x18
		::System::String* GIDAEFPOGHI; // 0x20
		::System::Threading::Thread* LFBNDFLKAJP; // 0x28
		::System::Int32 IIDLHLOOAGD; // 0x30
		::RPG::Client::MThreadRunState CEAMEHKPBOJ; // 0x34
		::System::Boolean NAPAEAKJAEI; // 0x38
		::System::Boolean JMDGOBHBIIG; // 0x39
		static ::System::Int32* StaticGet_BMCJKDMCDAL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "LCBKCCPECEN")->GetStaticField(0x12E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Boolean GKAOMIJAKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_GKAOMIJAKFA_OFFSET))(this);
		}

		::System::Boolean KDHCICFNAOC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_KDHCICFNAOC_OFFSET))(this);
		}

		::System::Void IGDPMGKNFGN(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + LCBKCCPECEN_IGDPMGKNFGN_OFFSET))(this, a1);
		}

		::System::Void NLKPKABOIPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LCBKCCPECEN_NLKPKABOIPJ_OFFSET))(this, a1);
		}

		::System::String* JNACBACPDEM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_JNACBACPDEM_OFFSET))(this);
		}

		::System::Void JINOGIOBNCK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LCBKCCPECEN_JINOGIOBNCK_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void JIBIHEOICOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_JIBIHEOICOO_OFFSET))(this);
		}

		::System::Void IPIMJAFLCAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_IPIMJAFLCAI_OFFSET))(this);
		}

		::System::Void OHMHJFANEIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_OHMHJFANEIF_OFFSET))(this);
		}

		::System::Void IECIAPPANHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_IECIAPPANHI_OFFSET))(this);
		}

		::System::Void GKLEHMHPNCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_GKLEHMHPNCD_OFFSET))(this);
		}

		::System::Void GDKEMLOODOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_GDKEMLOODOA_OFFSET))(this);
		}

		::System::Boolean LPFNFOPFAJF(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LCBKCCPECEN_LPFNFOPFAJF_OFFSET))(this, a1);
		}

		::System::Void GJAIBOJJCFA(::RPG::Client::MThreadRunState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MThreadRunState))((::PBYTE)hIl2Cpp + LCBKCCPECEN_GJAIBOJJCFA_OFFSET))(this, a1);
		}

		::System::Boolean MCKLMJLCMHN(::RPG::Client::MThreadRunState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MThreadRunState))((::PBYTE)hIl2Cpp + LCBKCCPECEN_MCKLMJLCMHN_OFFSET))(this, a1);
		}

		::System::Void BLGJKDMKFKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_BLGJKDMKFKO_OFFSET))(this);
		}

		::System::Boolean FLIMKAIKKMH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LCBKCCPECEN_FLIMKAIKKMH_OFFSET))(this);
		}

		static ::System::Void CIHAECGDADP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCBKCCPECEN_CIHAECGDADP_OFFSET))();
		}

		static ::System::Boolean KEDIGGJPHAO()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + LCBKCCPECEN_KEDIGGJPHAO_OFFSET))();
		}

		static ::System::Void EBLKGDNNOAG()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LCBKCCPECEN_EBLKGDNNOAG_OFFSET))();
		}

		static ::System::Void FHDMIIFONFC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + LCBKCCPECEN_FHDMIIFONFC_OFFSET))(a1);
		}

		static ::System::Int32 LHNMLKNGGOF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LCBKCCPECEN_LHNMLKNGGOF_OFFSET))();
		}

		static ::System::Int32 OEOAFGKOFCF()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LCBKCCPECEN_OEOAFGKOFCF_OFFSET))();
		}

		static ::System::Int32 OKIBPJGMIBM()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + LCBKCCPECEN_OKIBPJGMIBM_OFFSET))();
		}

	};
