#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPFPOKMDKKB_KHDFFKHGIIP.h"
#include "unitysdk/MCKJMKBPMCC.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Ray.h"

class GPFPOKMDKKB_DLGKLDGLALA;
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class SphereCollider; }

#define GPFPOKMDKKB_ABEDALHEGAJ_OFFSET UNITYSDK_OFFSET(0x16F118A0)
#define GPFPOKMDKKB_ADMOALNGHOJ_OFFSET UNITYSDK_OFFSET(0x16F14410)
#define GPFPOKMDKKB_ANCFMIDLMGK_OFFSET UNITYSDK_OFFSET(0x16F16060)
#define GPFPOKMDKKB_APKDIHDGPEB_OFFSET UNITYSDK_OFFSET(0x16F107B0)
#define GPFPOKMDKKB_CDNHKKMIGNO_OFFSET UNITYSDK_OFFSET(0x16F16980)
#define GPFPOKMDKKB_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x16F139E0)
#define GPFPOKMDKKB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16F10650)
#define GPFPOKMDKKB_DPHAGJCJKDL_OFFSET UNITYSDK_OFFSET(0x16F181E0)
#define GPFPOKMDKKB_EJAGGHGDENG_OFFSET UNITYSDK_OFFSET(0x16F168A0)
#define GPFPOKMDKKB_EOENFOLENFK_OFFSET UNITYSDK_OFFSET(0x16F12920)
#define GPFPOKMDKKB_FCLFAGJOIMC_OFFSET UNITYSDK_OFFSET(0x16F104E0)
#define GPFPOKMDKKB_FLDGPCNGFID_OFFSET UNITYSDK_OFFSET(0x16F14AD0)
#define GPFPOKMDKKB_FMGHPLPJBGF_OFFSET UNITYSDK_OFFSET(0x16F15970)
#define GPFPOKMDKKB_GIAOBHOJCDP_OFFSET UNITYSDK_OFFSET(0x16F10AB0)
#define GPFPOKMDKKB_IHDDNKHMJFE_OFFSET UNITYSDK_OFFSET(0x16F13A70)
#define GPFPOKMDKKB_IPNHOLLCPCC_OFFSET UNITYSDK_OFFSET(0x16F14AF0)
#define GPFPOKMDKKB_JNMNBGDANKE_OFFSET UNITYSDK_OFFSET(0x16F12170)
#define GPFPOKMDKKB_KOOJGMOMMCA_OFFSET UNITYSDK_OFFSET(0x16F18900)
#define GPFPOKMDKKB_NKOPJHIPINO_OFFSET UNITYSDK_OFFSET(0x16F17E00)
#define GPFPOKMDKKB_NNDDHMDOJPE_OFFSET UNITYSDK_OFFSET(0x16F179C0)
#define GPFPOKMDKKB_NOHPDKNPCGH_OFFSET UNITYSDK_OFFSET(0x16F10C00)
#define GPFPOKMDKKB_PBGMMAFBEOJ_OFFSET UNITYSDK_OFFSET(0x16F17620)
#define GPFPOKMDKKB__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F11830)
#define GPFPOKMDKKB__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16F10550)
#define GPFPOKMDKKB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F103E0)

inline static constexpr unsigned int GPFPOKMDKKB_TypeDefinitionIndex = 91604;

class GPFPOKMDKKB : public ::MCKJMKBPMCC
{
public:
	static ::UnityEngine::GameObject** StaticGet_PPNAENBBCEC()
	{
		return (::UnityEngine::GameObject**)Il2CppClass::FromTypeDefinitionIndex(GPFPOKMDKKB_TypeDefinitionIndex)->GetStaticField(0x3DDF0);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_FCCIEACOABD()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(GPFPOKMDKKB_TypeDefinitionIndex)->GetStaticField(0x3DDF8);
	}
	static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_FFMGBPNPGMB()
	{
		return (::Il2CppArray<::UnityEngine::Collider*>**)Il2CppClass::FromTypeDefinitionIndex(GPFPOKMDKKB_TypeDefinitionIndex)->GetStaticField(0x3DE00);
	}
	static ::UnityEngine::SphereCollider** StaticGet_IHHNFCKPEIJ()
	{
		return (::UnityEngine::SphereCollider**)Il2CppClass::FromTypeDefinitionIndex(GPFPOKMDKKB_TypeDefinitionIndex)->GetStaticField(0x3DE08);
	}
	// static const ::System::Single BMDJMJDGJAL; // 0x0
	// static const ::System::Single LDMNJKGNDHL; // 0x0
	::Il2CppArray<::UnityEngine::Collider*>* ACOLHKDBBIL; // 0x18
	::GPFPOKMDKKB_DLGKLDGLALA* MJODCBFMDMM; // 0x20
	::Il2CppArray<::UnityEngine::RaycastHit>* JIGFFEFOPAH; // 0x28
	::System::Single FJOGKCAFMKK; // 0x30
	::UnityEngine::Vector3 AMFAEFJOBCL; // 0x34
	::System::Single JJKPPBMIBKB; // 0x40
	::GPFPOKMDKKB_KHDFFKHGIIP GJHKBLFMHGA; // 0x44
	::System::Single KIDHBNBMNCM; // 0x48

	::System::Void _ctor(::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*))((::PBYTE)hIl2Cpp + GPFPOKMDKKB__CTOR_OFFSET))(this, DFMKILICPFB, LJBPECKCCEA);
	}

	::System::Void _ctor_1(::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::System::Single CIAFOCIJCJC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::MoleMole::Cameras::CameraDataAccessor*, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB__CTOR_1_OFFSET))(this, DFMKILICPFB, LJBPECKCCEA, CIAFOCIJCJC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPFPOKMDKKB__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DISPOSE_OFFSET))(this);
	}

	::System::Boolean GIAOBHOJCDP(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::Boolean ABMOAEMEEGE)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_GIAOBHOJCDP_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, ABMOAEMEEGE);
	}

	static ::System::Int32 ABEDALHEGAJ(::System::Int32 FBNGKPGLADH, ::System::Boolean OPNDMHFIMED, ::System::Single BBOBBNNLJOL, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* LCHHKALKCGP)
	{
		return ((::System::Int32(*)(::System::Int32, ::System::Boolean, ::System::Single, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_ABEDALHEGAJ_OFFSET))(FBNGKPGLADH, OPNDMHFIMED, BBOBBNNLJOL, LCHHKALKCGP);
	}

	::UnityEngine::Vector3 NOHPDKNPCGH(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single PMNLNNGEIFM, ::System::Boolean ABMOAEMEEGE)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_NOHPDKNPCGH_OFFSET))(this, JKBLDFBGBPK, PMNLNNGEIFM, ABMOAEMEEGE);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Single IHDDNKHMJFE(::UnityEngine::Ray IMBDAEHJOMD, ::System::Single BDEDDEGJFKL, ::UnityEngine::Bounds GOFCNJELMHH)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::System::Single, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_IHDDNKHMJFE_OFFSET))(this, IMBDAEHJOMD, BDEDDEGJFKL, GOFCNJELMHH);
	}

	static ::System::Void APKDIHDGPEB()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPFPOKMDKKB_APKDIHDGPEB_OFFSET))();
	}

	static ::System::Boolean ADMOALNGHOJ(::UnityEngine::Ray IMBDAEHJOMD, ::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single ECFONHNHGML, ::System::Int32 FBNGKPGLADH, ::System::Int32 IBMNNECHGGD, ::System::Boolean OPNDMHFIMED, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* LCHHKALKCGP, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>* MBMALGNKPLC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_ADMOALNGHOJ_OFFSET))(IMBDAEHJOMD, FEFNENBAMKL, ECFONHNHGML, FBNGKPGLADH, IBMNNECHGGD, OPNDMHFIMED, LCHHKALKCGP, MBMALGNKPLC);
	}

	::UnityEngine::Vector3 FLDGPCNGFID()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_FLDGPCNGFID_OFFSET))(this);
	}

	::System::Boolean IPNHOLLCPCC(::UnityEngine::Vector3 CKPGOKHECCH, ::UnityEngine::Vector3 HBKIHDPFEHM, ::UnityEngine::RaycastHit FEHFMMGMPGN, ::UnityEngine::Vector3& CJHDMICKGAO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_IPNHOLLCPCC_OFFSET))(this, CKPGOKHECCH, HBKIHDPFEHM, FEHFMMGMPGN, CJHDMICKGAO);
	}

	::System::Boolean FMGHPLPJBGF(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_FMGHPLPJBGF_OFFSET))(this, JKBLDFBGBPK);
	}

	static ::System::Boolean ANCFMIDLMGK(::UnityEngine::Ray IMBDAEHJOMD, ::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single ECFONHNHGML, ::System::Int32 FBNGKPGLADH, ::System::Boolean OPNDMHFIMED, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>* LCHHKALKCGP, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>* MBMALGNKPLC)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32, ::System::Boolean, ::System::Action_2<::UnityEngine::Collider*, ::System::Object*>*, ::System::Func_3<::UnityEngine::Collider*, ::System::Object*, ::System::Object*>*))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_ANCFMIDLMGK_OFFSET))(IMBDAEHJOMD, FEFNENBAMKL, ECFONHNHGML, FBNGKPGLADH, OPNDMHFIMED, LCHHKALKCGP, MBMALGNKPLC);
	}

	::System::Void EJAGGHGDENG(::UnityEngine::Vector3 HDIIFLEAHBB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_EJAGGHGDENG_OFFSET))(this, HDIIFLEAHBB);
	}

	::UnityEngine::Vector3 EOENFOLENFK(::UnityEngine::Vector3 PMMHPDOBJAC, ::Cinemachine::CameraState& JKBLDFBGBPK)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::Cinemachine::CameraState&))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_EOENFOLENFK_OFFSET))(this, PMMHPDOBJAC, JKBLDFBGBPK);
	}

	::UnityEngine::Vector3 CDNHKKMIGNO(::UnityEngine::Vector3 LFLJMBPFLDI, ::UnityEngine::Vector3 HBKIHDPFEHM, ::UnityEngine::RaycastHit FEHFMMGMPGN, ::UnityEngine::Vector3 HLJCPOAPNDM, ::UnityEngine::Plane EHKJPKFKENL, ::System::Single PGKMDKFHFMH, ::System::Int32 KOCHOMHMDJP, ::GPFPOKMDKKB_DLGKLDGLALA*& MJODCBFMDMM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit, ::UnityEngine::Vector3, ::UnityEngine::Plane, ::System::Single, ::System::Int32, ::GPFPOKMDKKB_DLGKLDGLALA*&))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_CDNHKKMIGNO_OFFSET))(this, LFLJMBPFLDI, HBKIHDPFEHM, FEHFMMGMPGN, HLJCPOAPNDM, EHKJPKFKENL, PGKMDKFHFMH, KOCHOMHMDJP, MJODCBFMDMM);
	}

	::UnityEngine::Vector3 NNDDHMDOJPE(::UnityEngine::Vector3 PMMHPDOBJAC, ::UnityEngine::Vector3 HLJCPOAPNDM, ::System::Int32 FBNGKPGLADH, ::UnityEngine::RaycastHit& FEFNENBAMKL)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::UnityEngine::RaycastHit&))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_NNDDHMDOJPE_OFFSET))(this, PMMHPDOBJAC, HLJCPOAPNDM, FBNGKPGLADH, FEFNENBAMKL);
	}

	::UnityEngine::Vector3 JNMNBGDANKE(::Cinemachine::CameraState& JKBLDFBGBPK, ::GPFPOKMDKKB_DLGKLDGLALA*& MJODCBFMDMM, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::Cinemachine::CameraState&, ::GPFPOKMDKKB_DLGKLDGLALA*&, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_JNMNBGDANKE_OFFSET))(this, JKBLDFBGBPK, MJODCBFMDMM, PMNLNNGEIFM);
	}

	::System::Void FCLFAGJOIMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_FCLFAGJOIMC_OFFSET))(this);
	}

	static ::System::Boolean DPHAGJCJKDL(::UnityEngine::Ray IMBDAEHJOMD, ::System::Single NCCDJLDKFGA, ::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single ECFONHNHGML, ::System::Int32 FBNGKPGLADH)
	{
		return ((::System::Boolean(*)(::UnityEngine::Ray, ::System::Single, ::UnityEngine::RaycastHit&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_DPHAGJCJKDL_OFFSET))(IMBDAEHJOMD, NCCDJLDKFGA, FEFNENBAMKL, ECFONHNHGML, FBNGKPGLADH);
	}

	::System::Single PBGMMAFBEOJ(::UnityEngine::Ray IMBDAEHJOMD, ::UnityEngine::Plane EHKJPKFKENL, ::System::Single PGKMDKFHFMH, ::UnityEngine::Vector3 HLJCPOAPNDM)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::Ray, ::UnityEngine::Plane, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_PBGMMAFBEOJ_OFFSET))(this, IMBDAEHJOMD, EHKJPKFKENL, PGKMDKFHFMH, HLJCPOAPNDM);
	}

	::System::Single NKOPJHIPINO(::UnityEngine::RaycastHit& FEFNENBAMKL, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::RaycastHit&, ::System::Single))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_NKOPJHIPINO_OFFSET))(this, FEFNENBAMKL, PMNLNNGEIFM);
	}

	::System::Boolean KOOJGMOMMCA(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + GPFPOKMDKKB_KOOJGMOMMCA_OFFSET))(this, JKBLDFBGBPK);
	}
};
