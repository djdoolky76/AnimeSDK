#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/OAOOLPCNHKA.h"
#include "unitysdk/DNPLKCGEDBK_NBDMLBKPEHP.h"

class AMOLMIJLFFA;
class ENGKPGFGGLM;
class KHDCBNKLGOH;
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsEntity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace RootMotion::FinalIK { class GrounderIK; }
namespace RootMotion::FinalIK { class Grounding; }
namespace UnityEngine { class Transform; }

#define DNPLKCGEDBK_ALCMBDMIACE_OFFSET UNITYSDK_OFFSET(0x12097390)
#define DNPLKCGEDBK_APAGIJMHEAK_OFFSET UNITYSDK_OFFSET(0x12099000)
#define DNPLKCGEDBK_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0x120964A0)
#define DNPLKCGEDBK_DIEPHAJCGOE_OFFSET UNITYSDK_OFFSET(0x12099A20)
#define DNPLKCGEDBK_DJPFLMIHHGO_OFFSET UNITYSDK_OFFSET(0x12098980)
#define DNPLKCGEDBK_DOODGADIKOA_OFFSET UNITYSDK_OFFSET(0x12097D50)
#define DNPLKCGEDBK_EPNLOLBHLDA_1_OFFSET UNITYSDK_OFFSET(0x12096960)
#define DNPLKCGEDBK_EPNLOLBHLDA_OFFSET UNITYSDK_OFFSET(0x12096820)
#define DNPLKCGEDBK_HOLPEPAGCJI_OFFSET UNITYSDK_OFFSET(0x12099170)
#define DNPLKCGEDBK_IMGGFMDGBPF_OFFSET UNITYSDK_OFFSET(0x12098B00)
#define DNPLKCGEDBK_JMGPGCLKBML_OFFSET UNITYSDK_OFFSET(0x12098730)
#define DNPLKCGEDBK_JOPEHCLILEL_OFFSET UNITYSDK_OFFSET(0x12096C50)
#define DNPLKCGEDBK_LAFAMOPICJE_OFFSET UNITYSDK_OFFSET(0x12097A10)
#define DNPLKCGEDBK_LBNKEGKHKEB_OFFSET UNITYSDK_OFFSET(0x12099070)
#define DNPLKCGEDBK_LCKALIGMIBB_OFFSET UNITYSDK_OFFSET(0x12096CD0)
#define DNPLKCGEDBK_LDJPOGHICGB_OFFSET UNITYSDK_OFFSET(0x12098DF0)
#define DNPLKCGEDBK_LKEFJPKOIPO_OFFSET UNITYSDK_OFFSET(0x120985A0)
#define DNPLKCGEDBK_MNEFKNFOABP_OFFSET UNITYSDK_OFFSET(0x12098E40)
#define DNPLKCGEDBK_MNIADMHGHGP_OFFSET UNITYSDK_OFFSET(0x120997F0)
#define DNPLKCGEDBK_MOMHHMOHHDC_OFFSET UNITYSDK_OFFSET(0x12099310)
#define DNPLKCGEDBK_NBGOCOOHBEF_OFFSET UNITYSDK_OFFSET(0x12096F30)
#define DNPLKCGEDBK_OIGMALEKMHD_OFFSET UNITYSDK_OFFSET(0x12098BD0)
#define DNPLKCGEDBK_POIMNGGBHAB_OFFSET UNITYSDK_OFFSET(0x12098ED0)
#define DNPLKCGEDBK__CTOR_OFFSET UNITYSDK_OFFSET(0x120967D0)

inline static constexpr unsigned int DNPLKCGEDBK_TypeDefinitionIndex = 47119;

class DNPLKCGEDBK : public ::OAOOLPCNHKA
{
public:
	::Nap::NapECS::EcsFilter* PNPMMLNCDNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNPLKCGEDBK__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_CREATEFILTERS_OFFSET))(this, GEEHGDABNJF);
	}

	static ::System::Void EPNLOLBHLDA(::System::Boolean NPPMJEIPMFC, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Single EJAOAGGJHHA)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_EPNLOLBHLDA_OFFSET))(NPPMJEIPMFC, KECKGDFIALJ, EJAOAGGJHHA);
	}

	static ::System::Void EPNLOLBHLDA_1(::KHDCBNKLGOH* GBELIHABEDH, ::System::Single EJAOAGGJHHA, ::System::Boolean DCFANHOIMOB)
	{
		return ((::System::Void(*)(::KHDCBNKLGOH*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_EPNLOLBHLDA_1_OFFSET))(GBELIHABEDH, EJAOAGGJHHA, DCFANHOIMOB);
	}

	static ::System::Boolean JOPEHCLILEL(::KHDCBNKLGOH* FFIICEPDAMI)
	{
		return ((::System::Boolean(*)(::KHDCBNKLGOH*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_JOPEHCLILEL_OFFSET))(FFIICEPDAMI);
	}

	::System::Void LCKALIGMIBB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_LCKALIGMIBB_OFFSET))(this, KECKGDFIALJ);
	}

	static ::RootMotion::FinalIK::GrounderIK* NBGOCOOHBEF(::UnityEngine::Transform* IAPKABMDJNF, ::MoleMole::Config::EntityType MKCOMJHINNJ)
	{
		return ((::RootMotion::FinalIK::GrounderIK*(*)(::UnityEngine::Transform*, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_NBGOCOOHBEF_OFFSET))(IAPKABMDJNF, MKCOMJHINNJ);
	}

	::System::Void ALCMBDMIACE(::KHDCBNKLGOH* FFIICEPDAMI, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::KHDCBNKLGOH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_ALCMBDMIACE_OFFSET))(this, FFIICEPDAMI, IAPKABMDJNF);
	}

	static ::System::Void DOODGADIKOA(::System::Boolean FBILHHBPEHD, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::Int32 KHGFAKJKDGG)
	{
		return ((::System::Void(*)(::System::Boolean, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_DOODGADIKOA_OFFSET))(FBILHHBPEHD, KECKGDFIALJ, KHGFAKJKDGG);
	}

	static ::System::Boolean JMGPGCLKBML(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_JMGPGCLKBML_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DJPFLMIHHGO(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_DJPFLMIHHGO_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void IMGGFMDGBPF(::RootMotion::FinalIK::Grounding* LCGEMJEDIPC, ::System::Single KLIDELNOCNH, ::System::Single IJCCIDBFIHK, ::DNPLKCGEDBK_NBDMLBKPEHP& param_3)
	{
		return ((::System::Void(*)(::RootMotion::FinalIK::Grounding*, ::System::Single, ::System::Single, ::DNPLKCGEDBK_NBDMLBKPEHP&))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_IMGGFMDGBPF_OFFSET))(LCGEMJEDIPC, KLIDELNOCNH, IJCCIDBFIHK, param_3);
	}

	::System::Void OIGMALEKMHD(::KHDCBNKLGOH* FFIICEPDAMI)
	{
		return ((::System::Void(*)(::PVOID, ::KHDCBNKLGOH*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_OIGMALEKMHD_OFFSET))(this, FFIICEPDAMI);
	}

	::System::Void LDJPOGHICGB(::KHDCBNKLGOH* FFIICEPDAMI)
	{
		return ((::System::Void(*)(::PVOID, ::KHDCBNKLGOH*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_LDJPOGHICGB_OFFSET))(this, FFIICEPDAMI);
	}

	::System::Void MNEFKNFOABP(::Nap::NapECS::EcsWorld* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_MNEFKNFOABP_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::Void POIMNGGBHAB(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_POIMNGGBHAB_OFFSET))(KECKGDFIALJ);
	}

	::System::Void APAGIJMHEAK(::Nap::NapECS::EcsEntity* MNGHGOLKKNO)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsEntity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_APAGIJMHEAK_OFFSET))(this, MNGHGOLKKNO);
	}

	static ::System::Void LBNKEGKHKEB(::AMOLMIJLFFA* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::AMOLMIJLFFA*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_LBNKEGKHKEB_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void HOLPEPAGCJI(::KHDCBNKLGOH* FFIICEPDAMI, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::System::Void(*)(::PVOID, ::KHDCBNKLGOH*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_HOLPEPAGCJI_OFFSET))(this, FFIICEPDAMI, IAPKABMDJNF);
	}

	::System::Void MOMHHMOHHDC(::System::UInt32 BKLGNCBNEGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_MOMHHMOHHDC_OFFSET))(this, BKLGNCBNEGM);
	}

	static ::System::Void LKEFJPKOIPO(::KHDCBNKLGOH* GBELIHABEDH)
	{
		return ((::System::Void(*)(::KHDCBNKLGOH*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_LKEFJPKOIPO_OFFSET))(GBELIHABEDH);
	}

	static ::System::Void MNIADMHGHGP(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_MNIADMHGHGP_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void DIEPHAJCGOE(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_DIEPHAJCGOE_OFFSET))(FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Void LAFAMOPICJE(::KHDCBNKLGOH* GPNMFFNCPFI)
	{
		return ((::System::Void(*)(::KHDCBNKLGOH*))((::PBYTE)hIl2Cpp + DNPLKCGEDBK_LAFAMOPICJE_OFFSET))(GPNMFFNCPFI);
	}
};
