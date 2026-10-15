#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimCategory.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicType.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/RPG/GameCore/BuildInAnimParam.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMOHEHDKGPK.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/UnityEngine/AnimatorClipInfo.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
class ELMKJJKJNAJ;
class GIPKHEMODAD;
class HOMDJMMOCJK;
class IBEJMEEEJMB;
class NAGAOPOFKDI;
class NNMPPHHHEIK_EEHGFLLJFLE;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class AttackData; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class CharacterReactionAnimConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillTransitAnimConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Animator; }

#define NNMPPHHHEIK_AGIAKNEPAML_OFFSET UNITYSDK_OFFSET(0xBCD1470)
#define NNMPPHHHEIK_AIFJHFFAMLF_OFFSET UNITYSDK_OFFSET(0xBCD18B0)
#define NNMPPHHHEIK_AODEJIKGNFJ_OFFSET UNITYSDK_OFFSET(0xBCD1960)
#define NNMPPHHHEIK_BEICPIMLDOB_OFFSET UNITYSDK_OFFSET(0xBCD4440)
#define NNMPPHHHEIK_BFPPFLPAMBF_OFFSET UNITYSDK_OFFSET(0xBCD45C0)
#define NNMPPHHHEIK_BHHNKFCCIJO_OFFSET UNITYSDK_OFFSET(0xBCD4620)
#define NNMPPHHHEIK_BLIMHCAENBB_OFFSET UNITYSDK_OFFSET(0xBCD13B0)
#define NNMPPHHHEIK_BODOABNCKMB_OFFSET UNITYSDK_OFFSET(0xBCD4C10)
#define NNMPPHHHEIK_CBBGCALLJJD_1_OFFSET UNITYSDK_OFFSET(0xBCD2FB0)
#define NNMPPHHHEIK_CBBGCALLJJD_OFFSET UNITYSDK_OFFSET(0xBCD21F0)
#define NNMPPHHHEIK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBCD4CC0)
#define NNMPPHHHEIK_CECDGPMDLKG_OFFSET UNITYSDK_OFFSET(0xBCD17B0)
#define NNMPPHHHEIK_CHJDPJBOEGD_OFFSET UNITYSDK_OFFSET(0xBCD4100)
#define NNMPPHHHEIK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCD4CB0)
#define NNMPPHHHEIK_DEJAIIJJKMO_OFFSET UNITYSDK_OFFSET(0xBCD2120)
#define NNMPPHHHEIK_DKEAJKCHEJG_OFFSET UNITYSDK_OFFSET(0xBCD3FE0)
#define NNMPPHHHEIK_ECACKGEBFGC_OFFSET UNITYSDK_OFFSET(0xBCD1C60)
#define NNMPPHHHEIK_EEBIBICKOFH_OFFSET UNITYSDK_OFFSET(0xBCD4C60)
#define NNMPPHHHEIK_FFHDGKNFIMO_OFFSET UNITYSDK_OFFSET(0xBCD4080)
#define NNMPPHHHEIK_FNIOHCHEIBG_OFFSET UNITYSDK_OFFSET(0xBCD1270)
#define NNMPPHHHEIK_GGILPEKCEGJ_OFFSET UNITYSDK_OFFSET(0xBCD1B00)
#define NNMPPHHHEIK_GIDCDCFKMMN_OFFSET UNITYSDK_OFFSET(0xBCD14F0)
#define NNMPPHHHEIK_GNMCPIJOHDD_OFFSET UNITYSDK_OFFSET(0xBCD24E0)
#define NNMPPHHHEIK_GOKAELGEKBJ_OFFSET UNITYSDK_OFFSET(0xBCD3630)
#define NNMPPHHHEIK_JMNDHNAPGLI_OFFSET UNITYSDK_OFFSET(0xBCD2000)
#define NNMPPHHHEIK_KNJIKAGIMAN_OFFSET UNITYSDK_OFFSET(0xBCD4030)
#define NNMPPHHHEIK_LDODNOHOGBD_1_OFFSET UNITYSDK_OFFSET(0xBCD49C0)
#define NNMPPHHHEIK_LDODNOHOGBD_OFFSET UNITYSDK_OFFSET(0xBCD4840)
#define NNMPPHHHEIK_LKNDNNBKALD_1_OFFSET UNITYSDK_OFFSET(0xBCD0330)
#define NNMPPHHHEIK_LKNDNNBKALD_OFFSET UNITYSDK_OFFSET(0xBCD4160)
#define NNMPPHHHEIK_MACKDMPAKIC_OFFSET UNITYSDK_OFFSET(0xBCD2B60)
#define NNMPPHHHEIK_MDJMMKGMGNP_OFFSET UNITYSDK_OFFSET(0xBCD1650)
#define NNMPPHHHEIK_OGBPPMABPOJ_OFFSET UNITYSDK_OFFSET(0xBCD1810)
#define NNMPPHHHEIK_ONNLIHAILKE_OFFSET UNITYSDK_OFFSET(0xBCD1A20)
#define NNMPPHHHEIK_OOGNOBGOPJB_OFFSET UNITYSDK_OFFSET(0xBCD2E00)
#define NNMPPHHHEIK_PCJGGHBFMPI_OFFSET UNITYSDK_OFFSET(0xBCD47A0)
#define NNMPPHHHEIK_PJKNFGDJCAK_OFFSET UNITYSDK_OFFSET(0xBCD1E40)
#define NNMPPHHHEIK_PLFEIOCNDAN_OFFSET UNITYSDK_OFFSET(0xBCD44D0)
#define NNMPPHHHEIK_PONJEHDBMGP_OFFSET UNITYSDK_OFFSET(0xBCD4280)

inline static constexpr unsigned int NNMPPHHHEIK_TypeDefinitionIndex = 59036;

	class NNMPPHHHEIK : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_LPKLJPCNNOH()
		{
			return (::System::String**)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x1FEE0);
		}

		static ::System::String** StaticGet_GLAPAGKHMGK()
		{
			return (::System::String**)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x1FEE8);
		}

		static ::System::String** StaticGet_NCPGGMNLPIO()
		{
			return (::System::String**)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x1FEF0);
		}

		static ::ELMKJJKJNAJ** StaticGet_FABNLMFLGEG()
		{
			return (::ELMKJJKJNAJ**)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x1FEF8);
		}

		static ::NNMPPHHHEIK_EEHGFLLJFLE** StaticGet_KGMEFCNFBMI()
		{
			return (::NNMPPHHHEIK_EEHGFLLJFLE**)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x1FF00);
		}

		static ::System::Int32* StaticGet_CMLMOGEAGBB()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x7490);
		}

		static ::System::Int32* StaticGet_MMBPDMGIEKE()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x7494);
		}

		static ::RPG::GameCore::StringHash* StaticGet_OHJPDKBNMJM()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x7498);
		}

		static ::System::Int32* StaticGet_OENFFHBCFNO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x749C);
		}

		static ::System::Int32* StaticGet_IGAPBBJMIAJ()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x74A0);
		}

		static ::System::Int32* StaticGet_EGIGCEFKFFD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x74A4);
		}

		static ::System::UInt32* StaticGet_JGPNEHFDGHF()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "NNMPPHHHEIK")->GetStaticField(0x74A8);
		}

		// static const ::System::String* JNPNAFEIPLL; // 0x0
		// static const ::System::String* KKLHELLFCLH; // 0x0
		// static const ::System::String* OKDGBCMKCAI; // 0x0
		// static const ::System::String* DDNNBEKJEJP; // 0x0
		// static const ::System::String* DOKEFAODKFJ; // 0x0
		// static const ::System::String* FHECHNIGPPG; // 0x0
		// static const ::System::String* NOPHFMKFMOD; // 0x0
		// static const ::System::String* COHFEKGAKGB; // 0x0
		// static const ::System::String* DMAFHJLLFFM; // 0x0
		// static const ::System::String* HHEJGHOIPIN; // 0x0
		// static const ::System::String* MOOGGEBBJDO; // 0x0
		// static const ::System::String* DPEEEOEPDLP; // 0x0
		// static const ::System::String* HABLOJDOCMO; // 0x0
		// static const ::System::String* FCBHLCMJKML; // 0x0
		// static const ::System::String* MIOIOHJKFEE; // 0x0
		// static const ::System::String* EHLEFNCBBDJ; // 0x0
		// static const ::System::String* NJOCAFHOJHK; // 0x0
		// static const ::System::String* OLHFOGLEBHB; // 0x0
		// static const ::System::String* GNMBNABFKCE; // 0x0
		// static const ::System::String* MJPKFDKJJPL; // 0x0
		// static const ::System::String* IDAFHAIAGIC; // 0x0
		// static const ::System::String* HCCGHMGFJEH; // 0x0
		// static const ::System::String* FLOAEINMMEG; // 0x0
		// static const ::System::String* EFNKBEEPMNO; // 0x0
		// static const ::System::String* JEGHECKDJAB; // 0x0
		// static const ::System::String* PAKMPLLLMLB; // 0x0
		// static const ::System::String* GMLMPGKLNAD; // 0x0
		// static const ::System::String* EEMGJGIOLGN; // 0x0
		// static const ::System::String* BNJDDCKBHAD; // 0x0
		// static const ::System::String* JGDFFPCHADC; // 0x0
		// static const ::System::String* OOOHKCGJAEA; // 0x0
		// static const ::System::String* PIOGPCGJJAP; // 0x0
		// static const ::System::String* AIGNNOJHKPJ; // 0x0
		// static const ::System::String* CKPEADONMLA; // 0x0
		// static const ::System::String* HINPIEHBBMO; // 0x0
		// static const ::System::String* MDNOAGPBAID; // 0x0
		// static const ::System::Object LCCFBHNEGNB; // 0x0
		// static const ::System::Object NBHKLPAHHLM; // 0x0
		// static const ::System::Object OHJFODIOFPE; // 0x0
		// static const ::System::Object JBGLCIEOPII; // 0x0
		// static const ::System::Object PIFHLOEHGKA; // 0x0
		// static const ::System::Object HPHPMFGOFJO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNMPPHHHEIK_CCTOR_OFFSET))();
		}

		static ::System::Void FNIOHCHEIBG(::UnityEngine::Animator* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Animator*, ::System::String*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_FNIOHCHEIBG_OFFSET))(a1, a2);
		}

		static ::System::Single BLIMHCAENBB(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_BLIMHCAENBB_OFFSET))(a1);
		}

		static ::System::Boolean GIDCDCFKMMN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_GIDCDCFKMMN_OFFSET))(a1, a2);
		}

		static ::System::Boolean MDJMMKGMGNP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_MDJMMKGMGNP_OFFSET))(a1, a2);
		}

		static ::System::Single CECDGPMDLKG(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_CECDGPMDLKG_OFFSET))(a1);
		}

		static ::ELMKJJKJNAJ* OGBPPMABPOJ(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::ELMKJJKJNAJ*(*)(::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_OGBPPMABPOJ_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::SkillTransitAnimConfig* AIFJHFFAMLF(::System::Int32 a1, ::System::Int32 a2, ::RPG::GameCore::CharacterDataComponent* a3)
		{
			return ((::RPG::GameCore::SkillTransitAnimConfig*(*)(::System::Int32, ::System::Int32, ::RPG::GameCore::CharacterDataComponent*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_AIFJHFFAMLF_OFFSET))(a1, a2, a3);
		}

		static ::System::String* AODEJIKGNFJ(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_AODEJIKGNFJ_OFFSET))(a1, a2);
		}

		static ::System::String* ONNLIHAILKE(::HOMDJMMOCJK* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::HOMDJMMOCJK*, ::System::String*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_ONNLIHAILKE_OFFSET))(a1, a2);
		}

		static ::System::String* GGILPEKCEGJ(::RPG::GameCore::AnimCategory a1, ::HOMDJMMOCJK* a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::RPG::GameCore::AnimCategory, ::HOMDJMMOCJK*, ::System::Int32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_GGILPEKCEGJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Void JMNDHNAPGLI(::GIPKHEMODAD* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::GIPKHEMODAD*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_JMNDHNAPGLI_OFFSET))(a1, a2, a3);
		}

		static ::System::String* DEJAIIJJKMO(::RPG::GameCore::AnimStateLogicType a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::AnimStateLogicType, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_DEJAIIJJKMO_OFFSET))(a1, a2);
		}

		static ::System::Void CBBGCALLJJD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4, ::System::Boolean a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_CBBGCALLJJD_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void CBBGCALLJJD_1(::RPG::GameCore::GameEntity* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::NAGAOPOFKDI* a4)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::MVector3, ::RPG::MVector3, ::NAGAOPOFKDI*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_CBBGCALLJJD_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void GOKAELGEKBJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::TaskContext* a3, ::RPG::GameCore::AttackData* a4, ::RPG::MVector3 a5, ::RPG::MVector3 a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AttackData*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_GOKAELGEKBJ_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Boolean DKEAJKCHEJG(::RPG::GameCore::AnimStateLogicType a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AnimStateLogicType))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_DKEAJKCHEJG_OFFSET))(a1);
		}

		static ::System::Boolean KNJIKAGIMAN(::RPG::GameCore::AnimStateLogicTypeExtra a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AnimStateLogicTypeExtra))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_KNJIKAGIMAN_OFFSET))(a1);
		}

		static ::System::Single FFHDGKNFIMO(::RPG::GameCore::ResilienceEnum a1)
		{
			return ((::System::Single(*)(::RPG::GameCore::ResilienceEnum))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_FFHDGKNFIMO_OFFSET))(a1);
		}

		static ::System::UInt32 CHJDPJBOEGD()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + NNMPPHHHEIK_CHJDPJBOEGD_OFFSET))();
		}

		static ::UnityEngine::AnimatorStateInfo LKNDNNBKALD(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::UnityEngine::AnimatorStateInfo(*)(::UnityEngine::Animator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_LKNDNNBKALD_OFFSET))(a1, a2, a3);
		}

		static ::IMOHEHDKGPK LKNDNNBKALD_1(::RPG::Client::MockAnimator* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::IMOHEHDKGPK(*)(::RPG::Client::MockAnimator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_LKNDNNBKALD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PONJEHDBMGP(::System::Int32 a1, ::UnityEngine::AnimatorStateInfo a2, ::UnityEngine::Animator* a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::UnityEngine::AnimatorStateInfo, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_PONJEHDBMGP_OFFSET))(a1, a2, a3, a4);
		}

		static ::Il2CppArray<::UnityEngine::AnimatorClipInfo>* BEICPIMLDOB(::UnityEngine::Animator* a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::Il2CppArray<::UnityEngine::AnimatorClipInfo>*(*)(::UnityEngine::Animator*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_BEICPIMLDOB_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean PLFEIOCNDAN(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_PLFEIOCNDAN_OFFSET))(a1, a2);
		}

		static ::System::Int32 BFPPFLPAMBF(::System::String* a1)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_BFPPFLPAMBF_OFFSET))(a1);
		}

		static ::System::UInt32 BHHNKFCCIJO(::UnityEngine::Animator* a1)
		{
			return ((::System::UInt32(*)(::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_BHHNKFCCIJO_OFFSET))(a1);
		}

		static ::System::Int32 PCJGGHBFMPI(::RPG::GameCore::BuildInAnimParam a1)
		{
			return ((::System::Int32(*)(::RPG::GameCore::BuildInAnimParam))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_PCJGGHBFMPI_OFFSET))(a1);
		}

		static ::System::Boolean LDODNOHOGBD(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2, ::UnityEngine::Animator* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_LDODNOHOGBD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean LDODNOHOGBD_1(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2, ::RPG::Client::MockAnimator* a3)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32, ::RPG::Client::MockAnimator*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_LDODNOHOGBD_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean BODOABNCKMB(::RPG::GameCore::BuildInAnimParam a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::BuildInAnimParam, ::System::UInt32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_BODOABNCKMB_OFFSET))(a1, a2);
		}

		static ::System::String* EEBIBICKOFH(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_EEBIBICKOFH_OFFSET))(a1);
		}

		static ::System::Single AGIAKNEPAML(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_AGIAKNEPAML_OFFSET))(a1);
		}

		static ::System::Single GNMCPIJOHDD(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::IBEJMEEEJMB* a3, ::RPG::MVector3 a4)
		{
			return ((::System::Single(*)(::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::IBEJMEEEJMB*, ::RPG::MVector3))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_GNMCPIJOHDD_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void MACKDMPAKIC(::System::Single a1, ::RPG::GameCore::GameEntity* a2, ::IBEJMEEEJMB* a3)
		{
			return ((::System::Void(*)(::System::Single, ::RPG::GameCore::GameEntity*, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_MACKDMPAKIC_OFFSET))(a1, a2, a3);
		}

		static ::System::Void OOGNOBGOPJB(::System::Boolean a1, ::IBEJMEEEJMB* a2)
		{
			return ((::System::Void(*)(::System::Boolean, ::IBEJMEEEJMB*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_OOGNOBGOPJB_OFFSET))(a1, a2);
		}

		static ::System::String* ECACKGEBFGC(::RPG::GameCore::AnimCategory a1, ::RPG::GameCore::CharacterReactionAnimConfig* a2)
		{
			return ((::System::String*(*)(::RPG::GameCore::AnimCategory, ::RPG::GameCore::CharacterReactionAnimConfig*))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_ECACKGEBFGC_OFFSET))(a1, a2);
		}

		static ::System::String* PJKNFGDJCAK(::RPG::GameCore::AnimCategory a1)
		{
			return ((::System::String*(*)(::RPG::GameCore::AnimCategory))((::PBYTE)hIl2Cpp + NNMPPHHHEIK_PJKNFGDJCAK_OFFSET))(a1);
		}

	};
