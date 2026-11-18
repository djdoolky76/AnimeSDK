#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/DACAFMBDDAD.h"
#include "unitysdk/JDBILLDPPGC.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class MCGABACEIFE;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class CharacterAimControlConfig; }
namespace MoleMole::Config { class CharacterAimModeConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class Transform; }

#define HPCONFEPCPD_AMJIEAIHOOK_OFFSET UNITYSDK_OFFSET(0x15E8CF90)
#define HPCONFEPCPD_DBCNHBDGHFJ_OFFSET UNITYSDK_OFFSET(0x15E8CA70)
#define HPCONFEPCPD_DFOLGBCNDCL_OFFSET UNITYSDK_OFFSET(0x15E8A9D0)
#define HPCONFEPCPD_GANLFAJBBPI_OFFSET UNITYSDK_OFFSET(0x15E8CCA0)
#define HPCONFEPCPD_GCEMNOAHGJG_OFFSET UNITYSDK_OFFSET(0x15E8E440)
#define HPCONFEPCPD_GFFDFDFOLPC_OFFSET UNITYSDK_OFFSET(0x15E8A550)
#define HPCONFEPCPD_GKBACOAEEGF_1_OFFSET UNITYSDK_OFFSET(0x15E8ED30)
#define HPCONFEPCPD_GKBACOAEEGF_OFFSET UNITYSDK_OFFSET(0x16D075D0)
#define HPCONFEPCPD_GNNJDBHOHFI_OFFSET UNITYSDK_OFFSET(0x16D07830)
#define HPCONFEPCPD_HCGHCLGFMKA_OFFSET UNITYSDK_OFFSET(0x15E8E8D0)
#define HPCONFEPCPD_IFENJCEPDJL_OFFSET UNITYSDK_OFFSET(0x16D07D60)
#define HPCONFEPCPD_IOAKCKKJJCK_OFFSET UNITYSDK_OFFSET(0x15E8E5D0)
#define HPCONFEPCPD_JJDCLFAGEDK_OFFSET UNITYSDK_OFFSET(0x15E8B6D0)
#define HPCONFEPCPD_JMDANJCGAKC_OFFSET UNITYSDK_OFFSET(0x15E8E860)
#define HPCONFEPCPD_JNDJMCHFAHG_OFFSET UNITYSDK_OFFSET(0x15E8A6F0)
#define HPCONFEPCPD_KDEPLFJCAEG_OFFSET UNITYSDK_OFFSET(0x15E8E470)
#define HPCONFEPCPD_KMIJCADIECF_OFFSET UNITYSDK_OFFSET(0x15E8E530)
#define HPCONFEPCPD_LAKMKIINJLG_OFFSET UNITYSDK_OFFSET(0x15E8B5E0)
#define HPCONFEPCPD_LEADAJBLFJP_OFFSET UNITYSDK_OFFSET(0x15E8A090)
#define HPCONFEPCPD_NJNCAPJHMPP_OFFSET UNITYSDK_OFFSET(0x15E8CD50)
#define HPCONFEPCPD_NKEEIHCHGEG_OFFSET UNITYSDK_OFFSET(0x15E8CA50)
#define HPCONFEPCPD_NLJICAKNNEL_1_OFFSET UNITYSDK_OFFSET(0x15E8C830)
#define HPCONFEPCPD_NLJICAKNNEL_OFFSET UNITYSDK_OFFSET(0x15E8AAA0)
#define HPCONFEPCPD_OCEPKNIIFCF_OFFSET UNITYSDK_OFFSET(0x15E8F350)
#define HPCONFEPCPD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D07580)

inline static constexpr unsigned int HPCONFEPCPD_TypeDefinitionIndex = 90919;

class HPCONFEPCPD : public ::System::Object
{
public:
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_HPAPAGOHLEF()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(HPCONFEPCPD_TypeDefinitionIndex)->GetStaticField(0x37C40);
	}
	// static const ::System::Single AAGCJGOLKHD; // 0x0
	// static const ::System::String* DHIILMHMAAB; // 0x0
	// static const ::System::String* NAHPOFFBGIF; // 0x0
	// static const ::System::String* OEJGDKFJKPL; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPCONFEPCPD__CCTOR_OFFSET))();
	}

	static ::UnityEngine::Quaternion GKBACOAEEGF(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 HGCAKJJIPDC, ::UnityEngine::Vector3 JFEKLBABJIL, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HPCONFEPCPD_GKBACOAEEGF_OFFSET))(EIIDOADGOIF, HGCAKJJIPDC, JFEKLBABJIL, IACKHFCLPJI);
	}

	static ::UnityEngine::Vector3 GNNJDBHOHFI(::MCGABACEIFE* MBFOLDFNBFM, ::MGHNAPKHBOG HOGHOPLAFKF)
	{
		return ((::UnityEngine::Vector3(*)(::MCGABACEIFE*, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + HPCONFEPCPD_GNNJDBHOHFI_OFFSET))(MBFOLDFNBFM, HOGHOPLAFKF);
	}

	static ::System::ValueTuple_2<::System::Single, ::UnityEngine::Quaternion> IFENJCEPDJL(::UnityEngine::Transform* IAPKABMDJNF, ::UnityEngine::Vector3 FCNPOKNKMOD, ::MoleMole::Config::CharacterAimModeConfig* DFMKILICPFB)
	{
		return ((::System::ValueTuple_2<::System::Single, ::UnityEngine::Quaternion>(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::MoleMole::Config::CharacterAimModeConfig*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_IFENJCEPDJL_OFFSET))(IAPKABMDJNF, FCNPOKNKMOD, DFMKILICPFB);
	}

	static ::System::Void LEADAJBLFJP(::MCGABACEIFE* OHHJLMFHFGF)
	{
		return ((::System::Void(*)(::MCGABACEIFE*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_LEADAJBLFJP_OFFSET))(OHHJLMFHFGF);
	}

	static ::System::Single DFOLGBCNDCL(::System::Single FDNJEGCJKIJ, ::UnityEngine::AnimationCurve* ONOAADNCLKE)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DFOLGBCNDCL_OFFSET))(FDNJEGCJKIJ, ONOAADNCLKE);
	}

	static ::UnityEngine::Vector3 NLJICAKNNEL(::UnityEngine::Vector3 POOLLGAJCJF, ::UnityEngine::Vector3 PMMHPDOBJAC, ::UnityEngine::Vector3 LIFOEGOCLLI, ::UnityEngine::Vector3& EIIDOADGOIF, ::UnityEngine::Collider*& GACDOMHGKFG, ::System::Single NEEGKNOOOLI, ::System::Collections::Generic::IList_1<::System::String*>* ONGFEAALIOB)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Collider*&, ::System::Single, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_NLJICAKNNEL_OFFSET))(POOLLGAJCJF, PMMHPDOBJAC, LIFOEGOCLLI, EIIDOADGOIF, GACDOMHGKFG, NEEGKNOOOLI, ONGFEAALIOB);
	}

	static ::System::Void LAKMKIINJLG(::UnityEngine::Vector2& HLFFCMIFFIB, ::System::Single BBMBPAPCMAL, ::System::Single HLNDMFELBEO)
	{
		return ((::System::Void(*)(::UnityEngine::Vector2&, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HPCONFEPCPD_LAKMKIINJLG_OFFSET))(HLFFCMIFFIB, BBMBPAPCMAL, HLNDMFELBEO);
	}

	static ::System::Void JJDCLFAGEDK(::MCGABACEIFE* OHHJLMFHFGF, ::MoleMole::Config::CharacterAimModeConfig* DFMKILICPFB, ::DACAFMBDDAD MKEJJJHLHFD)
	{
		return ((::System::Void(*)(::MCGABACEIFE*, ::MoleMole::Config::CharacterAimModeConfig*, ::DACAFMBDDAD))((::PBYTE)hIl2Cpp + HPCONFEPCPD_JJDCLFAGEDK_OFFSET))(OHHJLMFHFGF, DFMKILICPFB, MKEJJJHLHFD);
	}

	static ::UnityEngine::Vector3 NKEEIHCHGEG(::UnityEngine::Vector3 ADLNDADFNDN)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HPCONFEPCPD_NKEEIHCHGEG_OFFSET))(ADLNDADFNDN);
	}

	static ::System::Void DBCNHBDGHFJ(::System::Single GNDNBHPCJGD, ::GEIHCPAOKKK* MMJGCBNFMIE, ::System::Single PMNLNNGEIFM, ::System::Single ENONGEJAKOP)
	{
		return ((::System::Void(*)(::System::Single, ::GEIHCPAOKKK*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HPCONFEPCPD_DBCNHBDGHFJ_OFFSET))(GNDNBHPCJGD, MMJGCBNFMIE, PMNLNNGEIFM, ENONGEJAKOP);
	}

	static ::UnityEngine::Vector2 GANLFAJBBPI(::AIOFAMODPOO DLLKBJGGPAE, ::MoleMole::Config::CharacterAimControlConfig* DFMKILICPFB)
	{
		return ((::UnityEngine::Vector2(*)(::AIOFAMODPOO, ::MoleMole::Config::CharacterAimControlConfig*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_GANLFAJBBPI_OFFSET))(DLLKBJGGPAE, DFMKILICPFB);
	}

	static ::System::Void NJNCAPJHMPP(::MCGABACEIFE* BCCMJHOEMOH, ::MGHNAPKHBOG LIDHGBMFCKG, ::System::Single DCCHONJFGGE)
	{
		return ((::System::Void(*)(::MCGABACEIFE*, ::MGHNAPKHBOG, ::System::Single))((::PBYTE)hIl2Cpp + HPCONFEPCPD_NJNCAPJHMPP_OFFSET))(BCCMJHOEMOH, LIDHGBMFCKG, DCCHONJFGGE);
	}

	static ::UnityEngine::Vector3 NLJICAKNNEL_1(::UnityEngine::Vector3 POOLLGAJCJF, ::UnityEngine::Vector3 PMMHPDOBJAC, ::UnityEngine::Vector3 LIFOEGOCLLI, ::System::Single NEEGKNOOOLI, ::System::Collections::Generic::IList_1<::System::String*>* ONGFEAALIOB)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Collections::Generic::IList_1<::System::String*>*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_NLJICAKNNEL_1_OFFSET))(POOLLGAJCJF, PMMHPDOBJAC, LIFOEGOCLLI, NEEGKNOOOLI, ONGFEAALIOB);
	}

	static ::System::Void AMJIEAIHOOK(::MCGABACEIFE* OHHJLMFHFGF, ::MoleMole::Config::CharacterAimModeConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::MCGABACEIFE*, ::MoleMole::Config::CharacterAimModeConfig*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_AMJIEAIHOOK_OFFSET))(OHHJLMFHFGF, DFMKILICPFB);
	}

	static ::System::Single GCEMNOAHGJG(::System::Single IMLLDOHDCNC, ::UnityEngine::AnimationCurve* PJNOPCKMHMK)
	{
		return ((::System::Single(*)(::System::Single, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_GCEMNOAHGJG_OFFSET))(IMLLDOHDCNC, PJNOPCKMHMK);
	}

	static ::UnityEngine::Vector2 KDEPLFJCAEG(::AIOFAMODPOO DLLKBJGGPAE, ::UnityEngine::Vector2 JODLAKEPAJM)
	{
		return ((::UnityEngine::Vector2(*)(::AIOFAMODPOO, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HPCONFEPCPD_KDEPLFJCAEG_OFFSET))(DLLKBJGGPAE, JODLAKEPAJM);
	}

	static ::System::Single KMIJCADIECF(::AIOFAMODPOO DLLKBJGGPAE, ::UnityEngine::Vector2 HLFFCMIFFIB)
	{
		return ((::System::Single(*)(::AIOFAMODPOO, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + HPCONFEPCPD_KMIJCADIECF_OFFSET))(DLLKBJGGPAE, HLFFCMIFFIB);
	}

	static ::System::Void GFFDFDFOLPC(::MoleMole::Battle::Entity* DJHFOGHIFEJ, ::System::String* JPGMFDLLEGI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_GFFDFDFOLPC_OFFSET))(DJHFOGHIFEJ, JPGMFDLLEGI);
	}

	static ::System::Void IOAKCKKJJCK(::UnityEngine::Quaternion DAFDMLMACJK, ::MCGABACEIFE* PABCLNECIFD, ::GEIHCPAOKKK* MMJGCBNFMIE, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::UnityEngine::Quaternion, ::MCGABACEIFE*, ::GEIHCPAOKKK*, ::System::Single))((::PBYTE)hIl2Cpp + HPCONFEPCPD_IOAKCKKJJCK_OFFSET))(DAFDMLMACJK, PABCLNECIFD, MMJGCBNFMIE, PMNLNNGEIFM);
	}

	static ::System::Boolean JMDANJCGAKC(::System::Single HFMHOELKCAJ, ::System::Single NKLACMBEPCO)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HPCONFEPCPD_JMDANJCGAKC_OFFSET))(HFMHOELKCAJ, NKLACMBEPCO);
	}

	static ::UnityEngine::Vector2 HCGHCLGFMKA(::JDBILLDPPGC& HOMBOHCGNOJ, ::System::Single PMNLNNGEIFM, ::AIOFAMODPOO DLLKBJGGPAE, ::UnityEngine::Vector2 JODLAKEPAJM, ::MoleMole::Config::CharacterAimControlConfig* DFMKILICPFB)
	{
		return ((::UnityEngine::Vector2(*)(::JDBILLDPPGC&, ::System::Single, ::AIOFAMODPOO, ::UnityEngine::Vector2, ::MoleMole::Config::CharacterAimControlConfig*))((::PBYTE)hIl2Cpp + HPCONFEPCPD_HCGHCLGFMKA_OFFSET))(HOMBOHCGNOJ, PMNLNNGEIFM, DLLKBJGGPAE, JODLAKEPAJM, DFMKILICPFB);
	}

	static ::System::Void JNDJMCHFAHG(::System::Boolean DABOKGFHEGM)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + HPCONFEPCPD_JNDJMCHFAHG_OFFSET))(DABOKGFHEGM);
	}

	static ::UnityEngine::Quaternion GKBACOAEEGF_1(::UnityEngine::Vector3 EIIDOADGOIF, ::UnityEngine::Vector3 HGCAKJJIPDC, ::UnityEngine::Vector3 JFEKLBABJIL, ::UnityEngine::Vector3 IACKHFCLPJI, ::UnityEngine::Vector3 EMCIFCDBKJB)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HPCONFEPCPD_GKBACOAEEGF_1_OFFSET))(EIIDOADGOIF, HGCAKJJIPDC, JFEKLBABJIL, IACKHFCLPJI, EMCIFCDBKJB);
	}

	static ::UnityEngine::Vector2 OCEPKNIIFCF(::AIOFAMODPOO DLLKBJGGPAE, ::UnityEngine::Vector2 HLFFCMIFFIB, ::MoleMole::Config::CharacterAimControlConfig* DFMKILICPFB, ::System::Single PMNLNNGEIFM)
	{
		return ((::UnityEngine::Vector2(*)(::AIOFAMODPOO, ::UnityEngine::Vector2, ::MoleMole::Config::CharacterAimControlConfig*, ::System::Single))((::PBYTE)hIl2Cpp + HPCONFEPCPD_OCEPKNIIFCF_OFFSET))(DLLKBJGGPAE, HLFFCMIFFIB, DFMKILICPFB, PMNLNNGEIFM);
	}
};
