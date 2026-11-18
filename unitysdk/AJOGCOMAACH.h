#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class HEGAEGBJJBF;
class JOOHBDMHGCA;
class NLNIIPDCABP;
namespace MoleMole::Config { class ConfigMisc_InteractRotate; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationCurve; }

#define AJOGCOMAACH_AMCLHLGKEKD_OFFSET UNITYSDK_OFFSET(0x1820A2F0)
#define AJOGCOMAACH_ANCNIBIGOGE_OFFSET UNITYSDK_OFFSET(0x18209960)
#define AJOGCOMAACH_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x1820A970)
#define AJOGCOMAACH_BAMKIGMEMAL_OFFSET UNITYSDK_OFFSET(0x182093D0)
#define AJOGCOMAACH_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1820A790)
#define AJOGCOMAACH_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x18208510)
#define AJOGCOMAACH_GMGJCCJDIKA_OFFSET UNITYSDK_OFFSET(0x18209630)
#define AJOGCOMAACH_KLNEAMHKDID_OFFSET UNITYSDK_OFFSET(0x1820A4E0)
#define AJOGCOMAACH_LCILPPEKCII_OFFSET UNITYSDK_OFFSET(0x18208B10)
#define AJOGCOMAACH_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x1820A820)
#define AJOGCOMAACH_PGGCBMLJPFB_OFFSET UNITYSDK_OFFSET(0x1820A8B0)
#define AJOGCOMAACH_PKBLMLDIIJF_OFFSET UNITYSDK_OFFSET(0x18208D20)
#define AJOGCOMAACH_UPDATE_OFFSET UNITYSDK_OFFSET(0x18208840)
#define AJOGCOMAACH__CTOR_OFFSET UNITYSDK_OFFSET(0x18208AC0)

inline static constexpr unsigned int AJOGCOMAACH_TypeDefinitionIndex = 90063;

class AJOGCOMAACH : public ::OAOOLPCNHKA
{
public:
	// static const ::System::Single JJCBHIDGMFC; // 0x0
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20
	::Nap::NapECS::EcsFilter* LMEDKFAIFPC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH_UPDATE_OFFSET))(this);
	}

	static ::MoleMole::Config::ConfigMisc_InteractRotate* LCILPPEKCII(::System::Single ELHMOANKHFM, ::System::Single IJKOLMELBBC)
	{
		return ((::MoleMole::Config::ConfigMisc_InteractRotate*(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJOGCOMAACH_LCILPPEKCII_OFFSET))(ELHMOANKHFM, IJKOLMELBBC);
	}

	static ::System::Void PKBLMLDIIJF(::HEGAEGBJJBF* LFOFGACBPLC, ::UnityEngine::Vector3 GLGOOKBDEOK, ::System::Single AKJPGDGGAHC, ::System::Single BEGKNHAIFEA, ::System::Action* EJGDHCIBCJH, ::System::String* FHFEGDELKHH, ::System::Int32 DBCIPEBBKMK, ::System::Action_1<::System::Boolean>* FBGHCCDCJNG)
	{
		return ((::System::Void(*)(::HEGAEGBJJBF*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Action*, ::System::String*, ::System::Int32, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_PKBLMLDIIJF_OFFSET))(LFOFGACBPLC, GLGOOKBDEOK, AKJPGDGGAHC, BEGKNHAIFEA, EJGDHCIBCJH, FHFEGDELKHH, DBCIPEBBKMK, FBGHCCDCJNG);
	}

	static ::System::Single BAMKIGMEMAL(::HEGAEGBJJBF* LFOFGACBPLC, ::MoleMole::Config::ConfigMisc_InteractRotate* HMMMOCJAEOA, ::System::Single FFDKPJBLCKN, ::System::Single IJKOLMELBBC, ::System::String* FHFEGDELKHH)
	{
		return ((::System::Single(*)(::HEGAEGBJJBF*, ::MoleMole::Config::ConfigMisc_InteractRotate*, ::System::Single, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_BAMKIGMEMAL_OFFSET))(LFOFGACBPLC, HMMMOCJAEOA, FFDKPJBLCKN, IJKOLMELBBC, FHFEGDELKHH);
	}

	static ::System::Void ANCNIBIGOGE(::GEIHCPAOKKK* OHPJHPEOFLD, ::NLNIIPDCABP* FNFNDIBMPDE, ::HEGAEGBJJBF* LFOFGACBPLC, ::JOOHBDMHGCA* KKPFEIGFAKK)
	{
		return ((::System::Void(*)(::GEIHCPAOKKK*, ::NLNIIPDCABP*, ::HEGAEGBJJBF*, ::JOOHBDMHGCA*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_ANCNIBIGOGE_OFFSET))(OHPJHPEOFLD, FNFNDIBMPDE, LFOFGACBPLC, KKPFEIGFAKK);
	}

	static ::System::Void KLNEAMHKDID(::HEGAEGBJJBF* LFOFGACBPLC)
	{
		return ((::System::Void(*)(::HEGAEGBJJBF*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_KLNEAMHKDID_OFFSET))(LFOFGACBPLC);
	}

	static ::System::Single AMCLHLGKEKD(::HEGAEGBJJBF* LFOFGACBPLC, ::System::Single PLAOLHAEBKN, ::System::Boolean& AJFFIBBGBCG)
	{
		return ((::System::Single(*)(::HEGAEGBJJBF*, ::System::Single, ::System::Boolean&))((::PBYTE)hIl2Cpp + AJOGCOMAACH_AMCLHLGKEKD_OFFSET))(LFOFGACBPLC, PLAOLHAEBKN, AJFFIBBGBCG);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void GMGJCCJDIKA(::HEGAEGBJJBF* LFOFGACBPLC, ::NLNIIPDCABP* FNFNDIBMPDE, ::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::String* BLGNOOLDEOF, ::System::Single ELHMOANKHFM)
	{
		return ((::System::Void(*)(::HEGAEGBJJBF*, ::NLNIIPDCABP*, ::UnityEngine::AnimationCurve*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + AJOGCOMAACH_GMGJCCJDIKA_OFFSET))(LFOFGACBPLC, FNFNDIBMPDE, FAJHPKBELMF, BLGNOOLDEOF, ELHMOANKHFM);
	}

	static ::System::Void PGGCBMLJPFB(::HEGAEGBJJBF* LFOFGACBPLC, ::UnityEngine::Vector3 GLGOOKBDEOK, ::System::Single BOGPAHGJOJK, ::System::Action* EJGDHCIBCJH, ::System::String* FHFEGDELKHH)
	{
		return ((::System::Void(*)(::HEGAEGBJJBF*, ::UnityEngine::Vector3, ::System::Single, ::System::Action*, ::System::String*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_PGGCBMLJPFB_OFFSET))(LFOFGACBPLC, GLGOOKBDEOK, BOGPAHGJOJK, EJGDHCIBCJH, FHFEGDELKHH);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + AJOGCOMAACH_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}
};
