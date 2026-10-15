#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KJJMGKAEOED;
class LJFHKAJPFNE;
class NEIGAHPHPDO;
class NNBFOHOLBLK;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define EDJNAGDJEKB_AKBGELAKIMK_OFFSET UNITYSDK_OFFSET(0x13323960)
#define EDJNAGDJEKB_BAMPHDPPNMH_OFFSET UNITYSDK_OFFSET(0x13325120)
#define EDJNAGDJEKB_BCGBEGHOJPO_OFFSET UNITYSDK_OFFSET(0x133239C0)
#define EDJNAGDJEKB_CCTOR_OFFSET UNITYSDK_OFFSET(0x13325130)
#define EDJNAGDJEKB_CTOR_OFFSET UNITYSDK_OFFSET(0x13321D00)
#define EDJNAGDJEKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x13321EB0)
#define EDJNAGDJEKB_DOIHLHDNDOL_OFFSET UNITYSDK_OFFSET(0x13322660)
#define EDJNAGDJEKB_ECHBIALNJBN_OFFSET UNITYSDK_OFFSET(0x13325110)
#define EDJNAGDJEKB_EJANGIJGHDC_OFFSET UNITYSDK_OFFSET(0x133250B0)
#define EDJNAGDJEKB_ELHOLNIJLIO_OFFSET UNITYSDK_OFFSET(0x13323770)
#define EDJNAGDJEKB_FNIGAHFNIHJ_OFFSET UNITYSDK_OFFSET(0x13321FA0)
#define EDJNAGDJEKB_HENCHBDMDCG_OFFSET UNITYSDK_OFFSET(0x13325090)
#define EDJNAGDJEKB_HGAPGEFLBIK_OFFSET UNITYSDK_OFFSET(0x13325080)
#define EDJNAGDJEKB_IMLOCBDOGHE_1_OFFSET UNITYSDK_OFFSET(0x13323180)
#define EDJNAGDJEKB_IMLOCBDOGHE_OFFSET UNITYSDK_OFFSET(0x133243C0)
#define EDJNAGDJEKB_IPMANFEKGCM_OFFSET UNITYSDK_OFFSET(0x13323AF0)
#define EDJNAGDJEKB_JCAIMILHCDL_OFFSET UNITYSDK_OFFSET(0x13322CA0)
#define EDJNAGDJEKB_JPGCONHBMFO_OFFSET UNITYSDK_OFFSET(0x13323B90)
#define EDJNAGDJEKB_KKODBHOJIJO_OFFSET UNITYSDK_OFFSET(0x13322F90)
#define EDJNAGDJEKB_KOCCBIDNDFK_OFFSET UNITYSDK_OFFSET(0x13324D60)
#define EDJNAGDJEKB_KOEDLJMPLHM_OFFSET UNITYSDK_OFFSET(0x13322EF0)
#define EDJNAGDJEKB_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x133235F0)
#define EDJNAGDJEKB_LHHBFAAJHCI_OFFSET UNITYSDK_OFFSET(0x13323590)
#define EDJNAGDJEKB_LIDEGODOAIP_OFFSET UNITYSDK_OFFSET(0x133250A0)
#define EDJNAGDJEKB_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x13321DC0)
#define EDJNAGDJEKB_MGDBGNAFOKO_OFFSET UNITYSDK_OFFSET(0x13325040)
#define EDJNAGDJEKB_MPEMPMHGBBF_OFFSET UNITYSDK_OFFSET(0x13325030)
#define EDJNAGDJEKB_NIJPDLGBLHI_OFFSET UNITYSDK_OFFSET(0x133242C0)
#define EDJNAGDJEKB_OIBOPBADPEE_OFFSET UNITYSDK_OFFSET(0x13323670)
#define EDJNAGDJEKB_OMACFDBEAKO_OFFSET UNITYSDK_OFFSET(0x13323030)
#define EDJNAGDJEKB_OMDNGLENDGP_OFFSET UNITYSDK_OFFSET(0x13324E10)
#define EDJNAGDJEKB_ONMODELROOTLOADED_OFFSET UNITYSDK_OFFSET(0x13322A10)
#define EDJNAGDJEKB_ONMODELROOTUNLOADED_OFFSET UNITYSDK_OFFSET(0x13322E80)
#define EDJNAGDJEKB_PGLMEELLLOI_OFFSET UNITYSDK_OFFSET(0x13325050)
#define EDJNAGDJEKB_PJHKGEOENAE_OFFSET UNITYSDK_OFFSET(0x13323B40)
#define EDJNAGDJEKB_PJKKJBKNIBH_OFFSET UNITYSDK_OFFSET(0x13324F00)

inline static constexpr unsigned int EDJNAGDJEKB_TypeDefinitionIndex = 57075;

	class EDJNAGDJEKB : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::Collider* HGNKFKIBFGM; // 0x18
		::System::Action* NLOIDDNMFOP; // 0x20
		::LJFHKAJPFNE* DKIHLDAOIPN; // 0x28
		::RPG::GameCore::GameEntity* ANGPGEHPJPD; // 0x30
		::UnityEngine::Collider* LOPJEONAFBH; // 0x38
		::RPG::GameCore::TransformComponent* PLJPNMPJMJH; // 0x40
		::System::Action* IBJMGFCCEFK; // 0x48
		::NEIGAHPHPDO* GMNBNHFCMMN; // 0x50
		::System::Action_1<::RPG::GameCore::GameEntity*>* KBNBHMMIOIP; // 0x58
		::KJJMGKAEOED* MDOBEIPOEON; // 0x60
		::System::Action_2<::UnityEngine::Vector3, ::UnityEngine::Quaternion>* EHCFMGLAIFF; // 0x68
		::NNBFOHOLBLK* ICBMFGHKKLI; // 0x70
		::UnityEngine::Vector3 LPNNBBFOIAD; // 0x78
		::System::Boolean PMMIMFDJJMC; // 0x84
		::System::Boolean KCCHNDJMOKE; // 0x85
		::System::Boolean HEODKNPDLKG; // 0x86
		::System::Byte _padding0[0x1];
		::UnityEngine::RaycastHit HNMGAGFMIFN; // 0x88
		::UnityEngine::Vector3 KBCKIAMJKIF; // 0xB8
		::System::Boolean KFMPCPBPLHA; // 0xC4
		::System::Boolean BFCDDGNPFPC; // 0xC5
		::System::Byte _padding1[0x2];
		::System::Int32 AJGAFBFBDEC; // 0xC8
		::System::Int32 OLHKBFJJDNJ; // 0xCC
		::System::Int32 IINLNILNJCD; // 0xD0
		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_FENJLMIKLKC()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "EDJNAGDJEKB")->GetStaticField(0x6FF50);
		}

		static ::System::Boolean* StaticGet_KFHCFCMBDOJ()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "EDJNAGDJEKB")->GetStaticField(0x15C30);
		}

		// static const ::System::Object DKHMHBCIJGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDJNAGDJEKB_CCTOR_OFFSET))();
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnModelRootLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_ONMODELROOTLOADED_OFFSET))(this);
		}

		::System::Void OnModelRootUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_ONMODELROOTUNLOADED_OFFSET))(this);
		}

		::System::Void KOEDLJMPLHM(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_KOEDLJMPLHM_OFFSET))(this, a1, a2);
		}

		::System::Void KKODBHOJIJO(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_KKODBHOJIJO_OFFSET))(this, a1, a2);
		}

		::System::Boolean JCAIMILHCDL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_JCAIMILHCDL_OFFSET))(this);
		}

		::System::Void LHHBFAAJHCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_LHHBFAAJHCI_OFFSET))(this);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void OIBOPBADPEE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_OIBOPBADPEE_OFFSET))(this, a1);
		}

		::System::Void ELHOLNIJLIO(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_ELHOLNIJLIO_OFFSET))(this, a1);
		}

		::System::Void FNIGAHFNIHJ(::UnityEngine::Collider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_FNIGAHFNIHJ_OFFSET))(this, a1);
		}

		::System::Void DOIHLHDNDOL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_DOIHLHDNDOL_OFFSET))(this, a1);
		}

		::System::Void AKBGELAKIMK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_AKBGELAKIMK_OFFSET))(this, a1);
		}

		::System::Void BCGBEGHOJPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_BCGBEGHOJPO_OFFSET))(this);
		}

		::System::Void IPMANFEKGCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_IPMANFEKGCM_OFFSET))(this);
		}

		::System::Void PJHKGEOENAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_PJHKGEOENAE_OFFSET))(this);
		}

		::System::Void JPGCONHBMFO(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_JPGCONHBMFO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NIJPDLGBLHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_NIJPDLGBLHI_OFFSET))(this);
		}

		::System::Boolean IMLOCBDOGHE(::UnityEngine::Transform* a1, ::UnityEngine::Collider* a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Collider*, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_IMLOCBDOGHE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IMLOCBDOGHE_1(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_IMLOCBDOGHE_1_OFFSET))(this, a1, a2);
		}

		::System::Void PJKKJBKNIBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_PJKKJBKNIBH_OFFSET))(this);
		}

		::UnityEngine::Collider* MPEMPMHGBBF()
		{
			return ((::UnityEngine::Collider*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_MPEMPMHGBBF_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* MGDBGNAFOKO()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_MGDBGNAFOKO_OFFSET))(this);
		}

		::UnityEngine::RaycastHit PGLMEELLLOI()
		{
			return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_PGLMEELLLOI_OFFSET))(this);
		}

		::System::Single OMDNGLENDGP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_OMDNGLENDGP_OFFSET))(this);
		}

		::UnityEngine::Vector3 KOCCBIDNDFK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_KOCCBIDNDFK_OFFSET))(this);
		}

		::System::Int32 HGAPGEFLBIK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_HGAPGEFLBIK_OFFSET))(this);
		}

		::System::Void HENCHBDMDCG(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_HENCHBDMDCG_OFFSET))(this, a1);
		}

		::System::Boolean LIDEGODOAIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_LIDEGODOAIP_OFFSET))(this);
		}

		::System::Boolean OMACFDBEAKO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_OMACFDBEAKO_OFFSET))(this);
		}

		::System::Boolean EJANGIJGHDC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_EJANGIJGHDC_OFFSET))(this);
		}

		::NEIGAHPHPDO* ECHBIALNJBN()
		{
			return ((::NEIGAHPHPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_ECHBIALNJBN_OFFSET))(this);
		}

		::System::Int32 BAMPHDPPNMH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDJNAGDJEKB_BAMPHDPPNMH_OFFSET))(this);
		}

	};
