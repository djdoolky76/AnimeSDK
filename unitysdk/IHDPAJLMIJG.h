#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/BaseProperty.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/UnityEngine/Vector3.h"

class ENGKPGFGGLM;
class HJDNNLKBHBA;
class OIKCIJDKFEH;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }

#define IHDPAJLMIJG_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x16F6B460)
#define IHDPAJLMIJG_BHEIIGLBGHE_OFFSET UNITYSDK_OFFSET(0x16F6A460)
#define IHDPAJLMIJG_BPHODFCHLDK_OFFSET UNITYSDK_OFFSET(0x16F6BE90)
#define IHDPAJLMIJG_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x16F698B0)
#define IHDPAJLMIJG_FFJFOCAJHOP_OFFSET UNITYSDK_OFFSET(0x16F69B70)
#define IHDPAJLMIJG_GLEAKOEFKKF_OFFSET UNITYSDK_OFFSET(0x16F6B3C0)
#define IHDPAJLMIJG_HBKCDOIDGCL_OFFSET UNITYSDK_OFFSET(0x16F6A760)
#define IHDPAJLMIJG_HMLGKBFFNHI_OFFSET UNITYSDK_OFFSET(0x16F6BB10)
#define IHDPAJLMIJG_ICJAPEMNLCF_OFFSET UNITYSDK_OFFSET(0x16F6A310)
#define IHDPAJLMIJG_KOLPCLEMHGJ_OFFSET UNITYSDK_OFFSET(0x16F6B510)
#define IHDPAJLMIJG_MJBIEALDFHA_OFFSET UNITYSDK_OFFSET(0x16F6B9F0)
#define IHDPAJLMIJG_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x16F6B330)
#define IHDPAJLMIJG_NEFFJNLKGCL_OFFSET UNITYSDK_OFFSET(0x16F6A5B0)
#define IHDPAJLMIJG_PLDCGBKPKPD_OFFSET UNITYSDK_OFFSET(0x16F6B210)
#define IHDPAJLMIJG_PNNJIDNKANI_OFFSET UNITYSDK_OFFSET(0x16F6A8E0)
#define IHDPAJLMIJG__CTOR_OFFSET UNITYSDK_OFFSET(0x16F69B20)

inline static constexpr unsigned int IHDPAJLMIJG_TypeDefinitionIndex = 84046;

class IHDPAJLMIJG : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHDPAJLMIJG__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void FFJFOCAJHOP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::Vector3& IACKHFCLPJI)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_FFJFOCAJHOP_OFFSET))(KECKGDFIALJ, IACKHFCLPJI);
	}

	::System::Void ICJAPEMNLCF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_ICJAPEMNLCF_OFFSET))(this, KECKGDFIALJ);
	}

	static ::System::Int32 BHEIIGLBGHE(::HJDNNLKBHBA* POBADKEDFOE, ::System::Int32 OHOGDOMNHNK)
	{
		return ((::System::Int32(*)(::HJDNNLKBHBA*, ::System::Int32))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_BHEIIGLBGHE_OFFSET))(POBADKEDFOE, OHOGDOMNHNK);
	}

	static ::System::Void NEFFJNLKGCL(::OIKCIJDKFEH* FCHNGOAKFGG, ::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* IFJMGJABDMP)
	{
		return ((::System::Void(*)(::OIKCIJDKFEH*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_NEFFJNLKGCL_OFFSET))(FCHNGOAKFGG, KEEENBHLHPL, IFJMGJABDMP);
	}

	static ::System::Void HBKCDOIDGCL(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_HBKCDOIDGCL_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PNNJIDNKANI(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_PNNJIDNKANI_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void PLDCGBKPKPD(::MoleMole::Battle::Entity* CGELPKBKHOJ, ::MoleMole::Battle::Entity* HGCAEIPFNHM)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_PLDCGBKPKPD_OFFSET))(CGELPKBKHOJ, HGCAEIPFNHM);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GLEAKOEFKKF(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_GLEAKOEFKKF_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void KOLPCLEMHGJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_KOLPCLEMHGJ_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void MJBIEALDFHA(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_MJBIEALDFHA_OFFSET))(CGELPKBKHOJ);
	}

	::System::Void HMLGKBFFNHI(::System::UInt32 DCAJDFCINFH)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_HMLGKBFFNHI_OFFSET))(this, DCAJDFCINFH);
	}

	static ::System::Void BPHODFCHLDK(::System::UInt32 IMGBAKKLEMJ, ::MoleMole::Config::BaseProperty BGJOPBCCMOC, ::System::String* ABIEPJBODMH, ::System::Double KGGJCGPMAIH, ::System::Double BPEGDPLGFPO, ::System::Boolean NHFEEPDAMMI, ::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::System::UInt32, ::MoleMole::Config::BaseProperty, ::System::String*, ::System::Double, ::System::Double, ::System::Boolean, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + IHDPAJLMIJG_BPHODFCHLDK_OFFSET))(IMGBAKKLEMJ, BGJOPBCCMOC, ABIEPJBODMH, KGGJCGPMAIH, BPEGDPLGFPO, NHFEEPDAMMI, CGELPKBKHOJ);
	}
};
