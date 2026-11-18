#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MGHNAPKHBOG.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"

class GEIHCPAOKKK;
namespace MoleMole { class CharacterScriptConfig; }
namespace MoleMole { class NewConfigUICommon; }
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MODIFKLACIA_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x151EE100)
#define MODIFKLACIA_BIMHMOINJOE_OFFSET UNITYSDK_OFFSET(0x151F3DC0)
#define MODIFKLACIA_CNONPHIJBFB_OFFSET UNITYSDK_OFFSET(0x151F1070)
#define MODIFKLACIA_EEAHADIIBGA_OFFSET UNITYSDK_OFFSET(0x151F1470)
#define MODIFKLACIA_EEGMDLNPICF_OFFSET UNITYSDK_OFFSET(0x151F3D10)
#define MODIFKLACIA_EKDPHCLOHAL_OFFSET UNITYSDK_OFFSET(0x151F0CF0)
#define MODIFKLACIA_ELJFGLBDINN_OFFSET UNITYSDK_OFFSET(0x151F31C0)
#define MODIFKLACIA_EMIKBHFNAPE_OFFSET UNITYSDK_OFFSET(0x151F12E0)
#define MODIFKLACIA_EPDMGFEOPNH_OFFSET UNITYSDK_OFFSET(0x151F41D0)
#define MODIFKLACIA_EPNDNDLAFPL_OFFSET UNITYSDK_OFFSET(0x151F1DC0)
#define MODIFKLACIA_FBENPKHMLIP_OFFSET UNITYSDK_OFFSET(0x151EF540)
#define MODIFKLACIA_GEKNEDNIEEI_OFFSET UNITYSDK_OFFSET(0x151F3270)
#define MODIFKLACIA_GIBIDLADFFL_OFFSET UNITYSDK_OFFSET(0x151EE9B0)
#define MODIFKLACIA_GIOMBLBFFJH_OFFSET UNITYSDK_OFFSET(0x151F4420)
#define MODIFKLACIA_IEDANDJBGMF_OFFSET UNITYSDK_OFFSET(0x151EEB30)
#define MODIFKLACIA_JAFMOLBFMNM_OFFSET UNITYSDK_OFFSET(0x151F3DD0)
#define MODIFKLACIA_JIOLBHIDFKJ_OFFSET UNITYSDK_OFFSET(0x151F0B80)
#define MODIFKLACIA_KBDHIHGEJLK_OFFSET UNITYSDK_OFFSET(0x151F3310)
#define MODIFKLACIA_LDEPNMDDHEB_OFFSET UNITYSDK_OFFSET(0x151F4430)
#define MODIFKLACIA_LFHCLGIJECI_OFFSET UNITYSDK_OFFSET(0x151EE4F0)
#define MODIFKLACIA_LJLKFKBMAEM_OFFSET UNITYSDK_OFFSET(0x151F0F60)
#define MODIFKLACIA_LKOJPCHODBG_OFFSET UNITYSDK_OFFSET(0x151F2300)
#define MODIFKLACIA_LOHNCHAALIL_OFFSET UNITYSDK_OFFSET(0x151F1180)
#define MODIFKLACIA_MLBHDAIPBCH_OFFSET UNITYSDK_OFFSET(0x151F1380)
#define MODIFKLACIA_MMDBAHDOMFH_OFFSET UNITYSDK_OFFSET(0x151F0150)
#define MODIFKLACIA_NLLPKKMPHCG_OFFSET UNITYSDK_OFFSET(0x151F2FD0)
#define MODIFKLACIA_OKLHFOIENGJ_OFFSET UNITYSDK_OFFSET(0x151F1490)
#define MODIFKLACIA_PDOMLBHMAOB_OFFSET UNITYSDK_OFFSET(0x151EF830)
#define MODIFKLACIA_PGHKGAEAOCP_OFFSET UNITYSDK_OFFSET(0x151F0EB0)
#define MODIFKLACIA_PIBMPODJMCP_OFFSET UNITYSDK_OFFSET(0x151F2E10)
#define MODIFKLACIA_PJHBONNIPAC_OFFSET UNITYSDK_OFFSET(0x151F2AC0)
#define MODIFKLACIA_PNEDIOHIFCG_OFFSET UNITYSDK_OFFSET(0x151F48B0)
#define MODIFKLACIA__CTOR_OFFSET UNITYSDK_OFFSET(0x151EE0A0)

inline static constexpr unsigned int MODIFKLACIA_TypeDefinitionIndex = 43094;

class MODIFKLACIA : public ::System::Object
{
public:
	::UnityEngine::Transform* IAKHECPEJFP; // 0x10
	::MoleMole::NewConfigUICommon* OOEADMOEJIF; // 0x18
	::GEIHCPAOKKK* EKHKNFILMGJ; // 0x20
	::UnityEngine::GameObject* IAFAOELGMOM; // 0x28
	::UnityEngine::Transform* AKFNEHPLAGB; // 0x30
	::System::String* GONBEJHFOKL; // 0x38
	::MoleMole::CharacterScriptConfig* OALIGEPBGDA; // 0x40
	::UnityEngine::Vector3 _MCOPIBNMBKM_k__BackingField; // 0x48
	::System::Boolean LFFGMNDHEAB; // 0x54
	::System::Byte _padding0[0x3];
	::System::Single HAKENFPKMPA; // 0x58
	::System::Single DBIJEGPEAII; // 0x5C
	::System::Single FCMPMBEJHPF; // 0x60
	::System::Nullable_1<::System::Single> AILMGJBFJAE; // 0x64
	::System::Single MJNPMKAEPEG; // 0x6C
	::System::UInt32 ADBNJEEONIM; // 0x70
	::System::Nullable_1<::System::Single> MJAEEELBOHJ; // 0x74

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Single BOGPAHGJOJK, ::System::String* IOOIPIEMALH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MODIFKLACIA__CTOR_OFFSET))(this, KECKGDFIALJ, HODAIDNDKHD, BOGPAHGJOJK, IOOIPIEMALH);
	}

	::System::Void LFHCLGIJECI(::UnityEngine::RectTransform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MODIFKLACIA_LFHCLGIJECI_OFFSET))(this, IAPKABMDJNF);
	}

	::UnityEngine::Transform* GIBIDLADFFL()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_GIBIDLADFFL_OFFSET))(this);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> IEDANDJBGMF(::UnityEngine::RectTransform* NKAEPFPFLBC, ::UnityEngine::Vector2& GDFGBDKNGGB, ::UnityEngine::Vector2& BMLHBCNFKPO)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MODIFKLACIA_IEDANDJBGMF_OFFSET))(this, NKAEPFPFLBC, GDFGBDKNGGB, BMLHBCNFKPO);
	}

	::UnityEngine::AnimationCurve* EKDPHCLOHAL()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_EKDPHCLOHAL_OFFSET))(this);
	}

	::System::Single PGHKGAEAOCP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_PGHKGAEAOCP_OFFSET))(this);
	}

	::System::Single LJLKFKBMAEM()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_LJLKFKBMAEM_OFFSET))(this);
	}

	::System::Boolean CNONPHIJBFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_CNONPHIJBFB_OFFSET))(this);
	}

	::System::Void LOHNCHAALIL(::MGHNAPKHBOG HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::MGHNAPKHBOG))((::PBYTE)hIl2Cpp + MODIFKLACIA_LOHNCHAALIL_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Single MLBHDAIPBCH(::System::Single OLKHDAAGGAA, ::System::Single HODAIDNDKHD, ::System::Single KKIAHJODOIA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MODIFKLACIA_MLBHDAIPBCH_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD, KKIAHJODOIA);
	}

	::UnityEngine::Vector3 EEAHADIIBGA()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_EEAHADIIBGA_OFFSET))(this);
	}

	::System::Boolean OKLHFOIENGJ(::UnityEngine::RectTransform* NKAEPFPFLBC, ::UnityEngine::Vector2& BMLHBCNFKPO)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MODIFKLACIA_OKLHFOIENGJ_OFFSET))(this, NKAEPFPFLBC, BMLHBCNFKPO);
	}

	::System::Boolean PJHBONNIPAC(::UnityEngine::RectTransform* NKAEPFPFLBC, ::UnityEngine::Vector2& GDFGBDKNGGB)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MODIFKLACIA_PJHBONNIPAC_OFFSET))(this, NKAEPFPFLBC, GDFGBDKNGGB);
	}

	::System::Void EMIKBHFNAPE(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MODIFKLACIA_EMIKBHFNAPE_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::AnimationCurve* PIBMPODJMCP()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_PIBMPODJMCP_OFFSET))(this);
	}

	::UnityEngine::Vector3 NLLPKKMPHCG()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_NLLPKKMPHCG_OFFSET))(this);
	}

	::System::Single ELJFGLBDINN(::System::Single OLKHDAAGGAA, ::System::Single HODAIDNDKHD, ::System::Single KKIAHJODOIA)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MODIFKLACIA_ELJFGLBDINN_OFFSET))(this, OLKHDAAGGAA, HODAIDNDKHD, KKIAHJODOIA);
	}

	::System::Single GEKNEDNIEEI(::System::Single KGKGLNJAJGN)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MODIFKLACIA_GEKNEDNIEEI_OFFSET))(this, KGKGLNJAJGN);
	}

	::System::ValueTuple_2<::System::Boolean, ::System::Boolean> KBDHIHGEJLK(::UnityEngine::RectTransform* NKAEPFPFLBC, ::UnityEngine::Vector2& GDFGBDKNGGB, ::UnityEngine::Vector2& BMLHBCNFKPO)
	{
		return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector2&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MODIFKLACIA_KBDHIHGEJLK_OFFSET))(this, NKAEPFPFLBC, GDFGBDKNGGB, BMLHBCNFKPO);
	}

	::System::Void BBOMJDBNHIC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::UnityEngine::GameObject* HODAIDNDKHD, ::System::Single BOGPAHGJOJK, ::System::String* IOOIPIEMALH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::GameObject*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MODIFKLACIA_BBOMJDBNHIC_OFFSET))(this, KECKGDFIALJ, HODAIDNDKHD, BOGPAHGJOJK, IOOIPIEMALH);
	}

	::System::Single MMDBAHDOMFH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_MMDBAHDOMFH_OFFSET))(this);
	}

	::UnityEngine::Transform* BIMHMOINJOE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_BIMHMOINJOE_OFFSET))(this);
	}

	::UnityEngine::Bounds JAFMOLBFMNM()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_JAFMOLBFMNM_OFFSET))(this);
	}

	::System::Single EEGMDLNPICF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_EEGMDLNPICF_OFFSET))(this);
	}

	::UnityEngine::Transform* EPDMGFEOPNH()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_EPDMGFEOPNH_OFFSET))(this);
	}

	::UnityEngine::Vector3 FBENPKHMLIP()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_FBENPKHMLIP_OFFSET))(this);
	}

	::System::Boolean JIOLBHIDFKJ(::UnityEngine::RectTransform* IAPKABMDJNF, ::UnityEngine::Vector3 BAECLPHLLHO, ::System::Single DIJADIGAGCA, ::UnityEngine::Vector2& LLKGCLCNNAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RectTransform*, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + MODIFKLACIA_JIOLBHIDFKJ_OFFSET))(this, IAPKABMDJNF, BAECLPHLLHO, DIJADIGAGCA, LLKGCLCNNAJ);
	}

	::System::Single EPNDNDLAFPL(::MoleMole::NewConfigUICommon* POEBPEJOCPP, ::System::Single DKKHJHILMGM, ::UnityEngine::Vector3 OFJEAOPBDBM, ::UnityEngine::Vector3 GOEPKJIAOIC, ::UnityEngine::Vector3 KBHFBLJPFJH, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MODIFKLACIA_EPNDNDLAFPL_OFFSET))(this, POEBPEJOCPP, DKKHJHILMGM, OFJEAOPBDBM, GOEPKJIAOIC, KBHFBLJPFJH, PMNLNNGEIFM);
	}

	::System::Void GIOMBLBFFJH(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MODIFKLACIA_GIOMBLBFFJH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single PDOMLBHMAOB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_PDOMLBHMAOB_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single> LDEPNMDDHEB()
	{
		return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::System::Single>(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_LDEPNMDDHEB_OFFSET))(this);
	}

	::MoleMole::CharacterScriptConfig* PNEDIOHIFCG()
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MODIFKLACIA_PNEDIOHIFCG_OFFSET))(this);
	}

	::System::Single LKOJPCHODBG(::MoleMole::NewConfigUICommon* POEBPEJOCPP, ::UnityEngine::Vector3 LHBLECJEJEL, ::UnityEngine::Vector3 OFJEAOPBDBM, ::UnityEngine::Vector3 GOEPKJIAOIC, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Vector3 APKHMAFNEAC, ::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::MoleMole::NewConfigUICommon*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MODIFKLACIA_LKOJPCHODBG_OFFSET))(this, POEBPEJOCPP, LHBLECJEJEL, OFJEAOPBDBM, GOEPKJIAOIC, KBHFBLJPFJH, APKHMAFNEAC, PMNLNNGEIFM);
	}
};
