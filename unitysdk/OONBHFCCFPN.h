#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONMDKEDOKED.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/MonoGamepadVirtualCursor_OOABFKDMAAA.h"
#include "unitysdk/OONBHFCCFPN_BBGJKFDOIGJ.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class HNPJNICKLOJ;
class OCAIMDEIIKG;
class OHEONICOODD;
namespace DG::Tweening { class Tween; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define OONBHFCCFPN_AGOKAGKFECP_OFFSET UNITYSDK_OFFSET(0x16F92D70)
#define OONBHFCCFPN_AOALFPPOEED_OFFSET UNITYSDK_OFFSET(0x16F911A0)
#define OONBHFCCFPN_BAKDOCBFCFC_OFFSET UNITYSDK_OFFSET(0x16F93CC0)
#define OONBHFCCFPN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x16F907A0)
#define OONBHFCCFPN_BHPFDKINFMG_OFFSET UNITYSDK_OFFSET(0x16F92F10)
#define OONBHFCCFPN_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x16F92BA0)
#define OONBHFCCFPN_CEDNEBFHAPM_OFFSET UNITYSDK_OFFSET(0x16F904B0)
#define OONBHFCCFPN_CIPNAMFLHMC_OFFSET UNITYSDK_OFFSET(0x16F93B30)
#define OONBHFCCFPN_CODFLKJLHNJ_OFFSET UNITYSDK_OFFSET(0x16F91A60)
#define OONBHFCCFPN_DLGEAMBGOBG_OFFSET UNITYSDK_OFFSET(0x16F91BD0)
#define OONBHFCCFPN_EPIHDPJOJFH_OFFSET UNITYSDK_OFFSET(0x16F93D70)
#define OONBHFCCFPN_FIKBIABDEEH_OFFSET UNITYSDK_OFFSET(0x16F924F0)
#define OONBHFCCFPN_FIMNNKMCGFF_OFFSET UNITYSDK_OFFSET(0x16F92130)
#define OONBHFCCFPN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x16F90890)
#define OONBHFCCFPN_FNDPHMIMCDD_OFFSET UNITYSDK_OFFSET(0x16F920D0)
#define OONBHFCCFPN_GDGNOIJLNML_OFFSET UNITYSDK_OFFSET(0x16F92FE0)
#define OONBHFCCFPN_GET_ISSELECT_OFFSET UNITYSDK_OFFSET(0x16F91550)
#define OONBHFCCFPN_GJFMJEEEAML_OFFSET UNITYSDK_OFFSET(0x16F92190)
#define OONBHFCCFPN_GKCILOAAJHI_OFFSET UNITYSDK_OFFSET(0x16F92440)
#define OONBHFCCFPN_GLOAAACBNPP_OFFSET UNITYSDK_OFFSET(0x16F924E0)
#define OONBHFCCFPN_HCADIMPOCFJ_OFFSET UNITYSDK_OFFSET(0x16F92F90)
#define OONBHFCCFPN_HIHPKPFOFBD_OFFSET UNITYSDK_OFFSET(0x16F904A0)
#define OONBHFCCFPN_HPOAAJLABAL_OFFSET UNITYSDK_OFFSET(0x16F93BB0)
#define OONBHFCCFPN_IFAMEANMJKB_OFFSET UNITYSDK_OFFSET(0x16F93DC0)
#define OONBHFCCFPN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x16F90560)
#define OONBHFCCFPN_JIKKCOCEIFH_OFFSET UNITYSDK_OFFSET(0x16F939D0)
#define OONBHFCCFPN_KFDDHCMPICE_OFFSET UNITYSDK_OFFSET(0x16F911F0)
#define OONBHFCCFPN_KIEMJHOJCGI_OFFSET UNITYSDK_OFFSET(0x16F908A0)
#define OONBHFCCFPN_KIHHLPCENGE_OFFSET UNITYSDK_OFFSET(0x16F921C0)
#define OONBHFCCFPN_KIJCJCONOPI_OFFSET UNITYSDK_OFFSET(0x16F911D0)
#define OONBHFCCFPN_LANJEDIOPLD_OFFSET UNITYSDK_OFFSET(0x16F91420)
#define OONBHFCCFPN_LICLIPEODIG_OFFSET UNITYSDK_OFFSET(0x16F93B60)
#define OONBHFCCFPN_LJLGIINCPJA_OFFSET UNITYSDK_OFFSET(0x16F93010)
#define OONBHFCCFPN_MJAMMHGHACD_OFFSET UNITYSDK_OFFSET(0x16F914D0)
#define OONBHFCCFPN_MOCAEMCKKDL_OFFSET UNITYSDK_OFFSET(0x16F939E0)
#define OONBHFCCFPN_NFIGGDAEJCK_OFFSET UNITYSDK_OFFSET(0x16F91B70)
#define OONBHFCCFPN_NHHPNDJLOJC_OFFSET UNITYSDK_OFFSET(0x16F905C0)
#define OONBHFCCFPN_NHJLBLAFHCI_OFFSET UNITYSDK_OFFSET(0x16F93A80)
#define OONBHFCCFPN_ONOEKCOJMJO_OFFSET UNITYSDK_OFFSET(0x16F91560)
#define OONBHFCCFPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16F90670)

inline static constexpr unsigned int OONBHFCCFPN_TypeDefinitionIndex = 57504;

class OONBHFCCFPN : public ::System::Object
{
public:
	static ::UnityEngine::Camera** StaticGet_CEGKFLHNIMN()
	{
		return (::UnityEngine::Camera**)Il2CppClass::FromTypeDefinitionIndex(OONBHFCCFPN_TypeDefinitionIndex)->GetStaticField(0x4DE20);
	}
	static ::OCAIMDEIIKG** StaticGet_OPOLMJLMHCD()
	{
		return (::OCAIMDEIIKG**)Il2CppClass::FromTypeDefinitionIndex(OONBHFCCFPN_TypeDefinitionIndex)->GetStaticField(0x4DE28);
	}
	::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*>* BOKDFHJGAMF; // 0x10
	::OHEONICOODD* LAKKABIBFBL; // 0x18
	::HNPJNICKLOJ* _JFPAFALFHGE_k__BackingField; // 0x20
	::DG::Tweening::Tween* FKLGCKPKCJJ; // 0x28
	::System::Boolean _GIKDNAJPBHH_k__BackingField; // 0x30

	::System::Void _ctor(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + OONBHFCCFPN__CTOR_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Boolean HIHPKPFOFBD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_HIHPKPFOFBD_OFFSET))(this);
	}

	::System::Boolean CEDNEBFHAPM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_CEDNEBFHAPM_OFFSET))(this);
	}

	::System::Boolean NHHPNDJLOJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_NHHPNDJLOJC_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_FINALIZE_OFFSET))(this);
	}

	::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA KIEMJHOJCGI(::System::Boolean CLBEKOAAEED)
	{
		return ((::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OONBHFCCFPN_KIEMJHOJCGI_OFFSET))(this, CLBEKOAAEED);
	}

	::System::Void LANJEDIOPLD(::System::Single HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OONBHFCCFPN_LANJEDIOPLD_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Void MJAMMHGHACD(::UnityEngine::Vector3 HBEKKMCBGBK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OONBHFCCFPN_MJAMMHGHACD_OFFSET))(this, HBEKKMCBGBK);
	}

	::System::Boolean get_IsSelect()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_GET_ISSELECT_OFFSET))(this);
	}

	::System::Void ONOEKCOJMJO(::ONMDKEDOKED JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::ONMDKEDOKED))((::PBYTE)hIl2Cpp + OONBHFCCFPN_ONOEKCOJMJO_OFFSET))(this, JKBLDFBGBPK);
	}

	::System::Boolean CODFLKJLHNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_CODFLKJLHNJ_OFFSET))(this);
	}

	::System::Boolean NFIGGDAEJCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_NFIGGDAEJCK_OFFSET))(this);
	}

	::System::Boolean DLGEAMBGOBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_DLGEAMBGOBG_OFFSET))(this);
	}

	::System::Boolean FIMNNKMCGFF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_FIMNNKMCGFF_OFFSET))(this);
	}

	::System::Void FNDPHMIMCDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_FNDPHMIMCDD_OFFSET))(this);
	}

	::System::Single GJFMJEEEAML()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_GJFMJEEEAML_OFFSET))(this);
	}

	::UnityEngine::GameObject* KIJCJCONOPI()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_KIJCJCONOPI_OFFSET))(this);
	}

	::System::Void KIHHLPCENGE(::UnityEngine::Vector3 GCKNGAOLGKO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OONBHFCCFPN_KIHHLPCENGE_OFFSET))(this, GCKNGAOLGKO);
	}

	::UnityEngine::Bounds AOALFPPOEED()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_AOALFPPOEED_OFFSET))(this);
	}

	::HNPJNICKLOJ* GLOAAACBNPP()
	{
		return ((::HNPJNICKLOJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_GLOAAACBNPP_OFFSET))(this);
	}

	::System::Void FIKBIABDEEH(::UnityEngine::Vector3 OHJBGCDOGKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OONBHFCCFPN_FIKBIABDEEH_OFFSET))(this, OHJBGCDOGKB);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_BJANDJKKNCD_OFFSET))(this);
	}

	static ::System::Void AGOKAGKFECP(::UnityEngine::Vector3 AKJOIAJCNBL, ::UnityEngine::Vector3& JBNBMFNNELP, ::OONBHFCCFPN_BBGJKFDOIGJ& param_2)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::OONBHFCCFPN_BBGJKFDOIGJ&))((::PBYTE)hIl2Cpp + OONBHFCCFPN_AGOKAGKFECP_OFFSET))(AKJOIAJCNBL, JBNBMFNNELP, param_2);
	}

	::UnityEngine::Vector2 BHPFDKINFMG()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_BHPFDKINFMG_OFFSET))(this);
	}

	static ::System::Void HCADIMPOCFJ(::UnityEngine::Camera* LLFDABJAHII)
	{
		return ((::System::Void(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + OONBHFCCFPN_HCADIMPOCFJ_OFFSET))(LLFDABJAHII);
	}

	::System::Single GDGNOIJLNML()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_GDGNOIJLNML_OFFSET))(this);
	}

	::System::Void GKCILOAAJHI(::System::Boolean IBNICCGMILF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OONBHFCCFPN_GKCILOAAJHI_OFFSET))(this, IBNICCGMILF);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_JDAPDDEOCEA_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 KFDDHCMPICE(::UnityEngine::Vector3 CKPGOKHECCH)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + OONBHFCCFPN_KFDDHCMPICE_OFFSET))(CKPGOKHECCH);
	}

	::System::Void LJLGIINCPJA(::UnityEngine::RectTransform* NHCCIOBNJHD, ::UnityEngine::Vector3& CKPGOKHECCH, ::UnityEngine::Vector2& BEPMDFENBMH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + OONBHFCCFPN_LJLGIINCPJA_OFFSET))(this, NHCCIOBNJHD, CKPGOKHECCH, BEPMDFENBMH);
	}

	::System::Void JIKKCOCEIFH(::HNPJNICKLOJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + OONBHFCCFPN_JIKKCOCEIFH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MOCAEMCKKDL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_MOCAEMCKKDL_OFFSET))(this);
	}

	::System::Void CIPNAMFLHMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_CIPNAMFLHMC_OFFSET))(this);
	}

	::System::Void LICLIPEODIG(::System::Single GEGOALONGBI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OONBHFCCFPN_LICLIPEODIG_OFFSET))(this, GEGOALONGBI);
	}

	::System::Boolean NHJLBLAFHCI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_NHJLBLAFHCI_OFFSET))(this);
	}

	::System::Void HPOAAJLABAL(::System::Single FLKMOKLIPKN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OONBHFCCFPN_HPOAAJLABAL_OFFSET))(this, FLKMOKLIPKN);
	}

	::System::Boolean BAKDOCBFCFC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_BAKDOCBFCFC_OFFSET))(this);
	}

	static ::System::Void EPIHDPJOJFH()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONBHFCCFPN_EPIHDPJOJFH_OFFSET))();
	}

	::System::Void IFAMEANMJKB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONBHFCCFPN_IFAMEANMJKB_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::HNPJNICKLOJ* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::HNPJNICKLOJ*))((::PBYTE)hIl2Cpp + OONBHFCCFPN_BBOMJDBNHIC_OFFSET))(this, IPMMCGDMODG);
	}
};
