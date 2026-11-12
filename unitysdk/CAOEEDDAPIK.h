#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/ActionBarItemUIStyle.h"
#include "unitysdk/RPG/Client/ActionBarLinkOrder.h"
#include "unitysdk/BAHMMEEMJOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Vector2.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class DHLCCHNLPIC;
class DKIPKDFAAJI;
class GAHPNAEGACM;
class GEDMHFPPBHN;
class KOAOAKKCCPK;
class MADHNHEMBOJ;
class MADHNHEMBOJ_ADIMGCIBHBC;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define CAOEEDDAPIK_AEOEFCONMJD_OFFSET UNITYSDK_OFFSET(0xCDFF790)
#define CAOEEDDAPIK_AFNHJCMCOBH_OFFSET UNITYSDK_OFFSET(0xCE003E0)
#define CAOEEDDAPIK_AILOCJBLOHC_OFFSET UNITYSDK_OFFSET(0xCDFFFB0)
#define CAOEEDDAPIK_BJBBNNEHOKP_OFFSET UNITYSDK_OFFSET(0xCE002B0)
#define CAOEEDDAPIK_BPKAMMJBIDF_OFFSET UNITYSDK_OFFSET(0xCE00800)
#define CAOEEDDAPIK_CHHGFMFLGHB_OFFSET UNITYSDK_OFFSET(0xCDFF330)
#define CAOEEDDAPIK_CHLGOFNGFEE_OFFSET UNITYSDK_OFFSET(0xCE00E00)
#define CAOEEDDAPIK_CTOR_OFFSET UNITYSDK_OFFSET(0xCE00EA0)
#define CAOEEDDAPIK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xCDFDF30)
#define CAOEEDDAPIK_EGLFCEEKDCC_OFFSET UNITYSDK_OFFSET(0xCE000E0)
#define CAOEEDDAPIK_EJNKDDFOMOK_OFFSET UNITYSDK_OFFSET(0xCE00180)
#define CAOEEDDAPIK_EMLFFGPEEMD_OFFSET UNITYSDK_OFFSET(0xCDFF880)
#define CAOEEDDAPIK_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0xCDFF840)
#define CAOEEDDAPIK_FAECKOBFFHC_OFFSET UNITYSDK_OFFSET(0xCE00AD0)
#define CAOEEDDAPIK_FMJGBOJMFHJ_OFFSET UNITYSDK_OFFSET(0xCE00A70)
#define CAOEEDDAPIK_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0xCDFFD20)
#define CAOEEDDAPIK_GET_ROOTBTN_OFFSET UNITYSDK_OFFSET(0xCE00E80)
#define CAOEEDDAPIK_GOACBGLABBC_OFFSET UNITYSDK_OFFSET(0xCDFF1A0)
#define CAOEEDDAPIK_ILIAIPNLMML_OFFSET UNITYSDK_OFFSET(0xCDFF090)
#define CAOEEDDAPIK_JIBKPBINOGH_OFFSET UNITYSDK_OFFSET(0xCE00730)
#define CAOEEDDAPIK_KIADLKALBMA_OFFSET UNITYSDK_OFFSET(0xCE00370)
#define CAOEEDDAPIK_LACAPACNEPI_OFFSET UNITYSDK_OFFSET(0xCDFF5B0)
#define CAOEEDDAPIK_LJBCDJNNBJH_OFFSET UNITYSDK_OFFSET(0xCDFEEC0)
#define CAOEEDDAPIK_LJKCNPHHKGN_OFFSET UNITYSDK_OFFSET(0xCDFE870)
#define CAOEEDDAPIK_LLAAPDCAODK_OFFSET UNITYSDK_OFFSET(0xCDFFC50)
#define CAOEEDDAPIK_LMADAOAKJNP_OFFSET UNITYSDK_OFFSET(0xCDFF520)
#define CAOEEDDAPIK_LMKPMLDPKKP_OFFSET UNITYSDK_OFFSET(0xCDFEC30)
#define CAOEEDDAPIK_MEPFNJJDBMJ_OFFSET UNITYSDK_OFFSET(0xCDFFA20)
#define CAOEEDDAPIK_MLNIIOCEIGI_OFFSET UNITYSDK_OFFSET(0xCDFFE30)
#define CAOEEDDAPIK_MNNKJAMHCMC_OFFSET UNITYSDK_OFFSET(0xCE00A10)
#define CAOEEDDAPIK_NCJCJAJFCEN_OFFSET UNITYSDK_OFFSET(0xCDFF460)
#define CAOEEDDAPIK_NDOANFBMLOH_OFFSET UNITYSDK_OFFSET(0xCDFE820)
#define CAOEEDDAPIK_NHAPDLEIBBL_OFFSET UNITYSDK_OFFSET(0xCDFFB80)
#define CAOEEDDAPIK_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xCDFE620)
#define CAOEEDDAPIK_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xCDFE960)
#define CAOEEDDAPIK_OMKFDBAKPEK_OFFSET UNITYSDK_OFFSET(0xCDFEB50)
#define CAOEEDDAPIK_PADHGKJFDGD_OFFSET UNITYSDK_OFFSET(0xCDFF130)
#define CAOEEDDAPIK_PAGKBOCIIIC_OFFSET UNITYSDK_OFFSET(0xCE009C0)
#define CAOEEDDAPIK_PEGNJCBFPFB_OFFSET UNITYSDK_OFFSET(0xCDFF040)
#define CAOEEDDAPIK_PGBJGLNIPKF_OFFSET UNITYSDK_OFFSET(0xCE004B0)
#define CAOEEDDAPIK_PGNIKFCMMOB_OFFSET UNITYSDK_OFFSET(0xCDFFD90)
#define CAOEEDDAPIK_PIIINLMDBMJ_OFFSET UNITYSDK_OFFSET(0xCE00310)
#define CAOEEDDAPIK_PNMJCLOLBEF_OFFSET UNITYSDK_OFFSET(0xCDFECA0)
#define CAOEEDDAPIK_SET_ROOTBTN_OFFSET UNITYSDK_OFFSET(0xCE00E90)
#define CAOEEDDAPIK__ONBIND_OFFSET UNITYSDK_OFFSET(0xCE00B30)
#define CAOEEDDAPIK__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xCDFE8F0)
#define CAOEEDDAPIK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xCDFDDD0)
#define CAOEEDDAPIK__ONTICK_OFFSET UNITYSDK_OFFSET(0xCDFE710)
#define CAOEEDDAPIK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xCDFE560)
#define CAOEEDDAPIK___ONBINDHANDLERS_B__2_0_OFFSET UNITYSDK_OFFSET(0xCE00ED0)
#define CAOEEDDAPIK___ONBINDHANDLERS_B__2_1_OFFSET UNITYSDK_OFFSET(0xCE00F40)

inline static constexpr unsigned int CAOEEDDAPIK_TypeDefinitionIndex = 73222;

	class CAOEEDDAPIK : public ::FMPCODLIOLG
	{
	public:
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x60
		::GAHPNAEGACM* NLMFBBHDFIM; // 0x68
		::UnityEngine::Transform* AOCOBKPBBFM; // 0x70
		::RPG::GameCore::CharacterDataComponent* GOKPGBDMOLC; // 0x78
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x80
		::UnityEngine::Transform* GJAILELFBCM; // 0x88
		::DKIPKDFAAJI* PKJDNILEODJ; // 0x90
		::GEDMHFPPBHN* KPFKDKLCFKG; // 0x98
		::UnityEngine::Animation* LICAOCALCPO; // 0xA0
		::UnityEngine::Transform* JAPLCOMBAGD; // 0xA8
		::RPG::GameCore::TurnBasedAbilityComponent* HCJFKJFHMMB; // 0xB0
		::RPG::Client::AnimatorButton* _RootBtn_k__BackingField; // 0xB8
		::DHLCCHNLPIC* GNEENKCPHNL; // 0xC0
		::RPG::Client::PrefabLoadMeta* BGGDOGHCIAI; // 0xC8
		::RPG::Client::ActionBarItemUIStyle IACCEDNBPJL; // 0xD0
		::System::Boolean OCAEFGPIHFD; // 0xD4
		::System::Boolean HAECKDHIFMM; // 0xD5
		::System::Boolean PBKHCBIFGON; // 0xD6
		::System::Boolean EIJLLGCIKPD; // 0xD7
		::RPG::Client::ActionBarItemUIStyle KNBPDHCEFHJ; // 0xD8
		::System::Single LPGOJCCOGMI; // 0xDC
		// static const ::System::Object HGLEIKCEGBI; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CAOEEDDAPIK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAOEEDDAPIK__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void LJBCDJNNBJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_LJBCDJNNBJH_OFFSET))(this);
		}

		::System::Void PEGNJCBFPFB(::GAHPNAEGACM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAHPNAEGACM*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PEGNJCBFPFB_OFFSET))(this, a1);
		}

		::System::Void ILIAIPNLMML(::UnityEngine::Vector2 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_ILIAIPNLMML_OFFSET))(this, a1, a2);
		}

		::System::Void PADHGKJFDGD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PADHGKJFDGD_OFFSET))(this, a1);
		}

		::System::Boolean GOACBGLABBC(::BAHMMEEMJOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_GOACBGLABBC_OFFSET))(this, a1);
		}

		::System::Void CHHGFMFLGHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_CHHGFMFLGHB_OFFSET))(this);
		}

		::UnityEngine::GameObject* NCJCJAJFCEN()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_NCJCJAJFCEN_OFFSET))(this);
		}

		::System::Boolean LMADAOAKJNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_LMADAOAKJNP_OFFSET))(this);
		}

		::System::Void LACAPACNEPI(::CAOEEDDAPIK_NNBFMHKHMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAOEEDDAPIK_NNBFMHKHMKO*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_LACAPACNEPI_OFFSET))(this, a1);
		}

		::System::Void AEOEFCONMJD(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_AEOEFCONMJD_OFFSET))(this, a1);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Boolean EMLFFGPEEMD(::BAHMMEEMJOB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMMEEMJOB))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_EMLFFGPEEMD_OFFSET))(this, a1);
		}

		::System::Void MEPFNJJDBMJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_MEPFNJJDBMJ_OFFSET))(this);
		}

		::System::Void NHAPDLEIBBL(::MADHNHEMBOJ_ADIMGCIBHBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MADHNHEMBOJ_ADIMGCIBHBC*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_NHAPDLEIBBL_OFFSET))(this, a1);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Boolean LLAAPDCAODK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_LLAAPDCAODK_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 PGNIKFCMMOB()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PGNIKFCMMOB_OFFSET))(this);
		}

		::System::Void MLNIIOCEIGI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_MLNIIOCEIGI_OFFSET))(this, a1);
		}

		::System::Void AILOCJBLOHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_AILOCJBLOHC_OFFSET))(this);
		}

		::System::Void EJNKDDFOMOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_EJNKDDFOMOK_OFFSET))(this);
		}

		::System::Void LJKCNPHHKGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_LJKCNPHHKGN_OFFSET))(this);
		}

		::System::Void BJBBNNEHOKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_BJBBNNEHOKP_OFFSET))(this);
		}

		::System::Void PIIINLMDBMJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PIIINLMDBMJ_OFFSET))(this, a1);
		}

		::System::Void KIADLKALBMA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_KIADLKALBMA_OFFSET))(this, a1);
		}

		::System::Void AFNHJCMCOBH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_AFNHJCMCOBH_OFFSET))(this, a1);
		}

		::System::Void LMKPMLDPKKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_LMKPMLDPKKP_OFFSET))(this);
		}

		::System::Void JIBKPBINOGH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_JIBKPBINOGH_OFFSET))(this, a1);
		}

		::System::Void PGBJGLNIPKF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PGBJGLNIPKF_OFFSET))(this, a1);
		}

		::System::Void BPKAMMJBIDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_BPKAMMJBIDF_OFFSET))(this);
		}

		::System::Boolean NDOANFBMLOH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_NDOANFBMLOH_OFFSET))(this);
		}

		::System::Void OMKFDBAKPEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_OMKFDBAKPEK_OFFSET))(this, a1);
		}

		::System::Boolean PAGKBOCIIIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PAGKBOCIIIC_OFFSET))(this);
		}

		::System::UInt32 MNNKJAMHCMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_MNNKJAMHCMC_OFFSET))(this);
		}

		::System::UInt32 FMJGBOJMFHJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_FMJGBOJMFHJ_OFFSET))(this);
		}

		::System::UInt32 FAECKOBFFHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_FAECKOBFFHC_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK__ONBIND_OFFSET))(this);
		}

		::System::Void PNMJCLOLBEF(::RPG::Client::ActionBarLinkOrder a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ActionBarLinkOrder))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_PNMJCLOLBEF_OFFSET))(this, a1);
		}

		::System::Void EGLFCEEKDCC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_EGLFCEEKDCC_OFFSET))(this, a1);
		}

		::System::Void CHLGOFNGFEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_CHLGOFNGFEE_OFFSET))(this, a1);
		}

		::RPG::Client::AnimatorButton* get_RootBtn()
		{
			return ((::RPG::Client::AnimatorButton*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_GET_ROOTBTN_OFFSET))(this);
		}

		::System::Void set_RootBtn(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK_SET_ROOTBTN_OFFSET))(this, a1);
		}

		::System::Void __OnBindHandlers_b__2_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK___ONBINDHANDLERS_B__2_0_OFFSET))(this, a1);
		}

		::System::Void __OnBindHandlers_b__2_1(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CAOEEDDAPIK___ONBINDHANDLERS_B__2_1_OFFSET))(this, a1);
		}

	};
