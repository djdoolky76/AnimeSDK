#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetLineupShape.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/RPG/GameCore/CharacterVisibleReason.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class HHCKNGMIAKL;
class IFEEMEAJMEJ;
class KBGKLKLKLFG;
class KOFOPJEMGNA;
class MCLDPNEJPBG;
class NNKDKMBKFHC;
class PFNJCDINMLA;
class PJJKDGFODDL_BFADGAHEKLK;
class PJJKDGFODDL_CNDPPBCPHOJ;
class PJJKDGFODDL_OCHAIPCAONE;
namespace RPG::Client::Pet { class IPet; }
namespace RPG::Client::Pet { class IPetRepository; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PJJKDGFODDL_AGELLKIOIMI_OFFSET UNITYSDK_OFFSET(0xC28A1D0)
#define PJJKDGFODDL_AHHHBCBAGBC_OFFSET UNITYSDK_OFFSET(0xC28BED0)
#define PJJKDGFODDL_AIEHIOGKIPP_OFFSET UNITYSDK_OFFSET(0xC28A5D0)
#define PJJKDGFODDL_BCGGPNOKMCA_OFFSET UNITYSDK_OFFSET(0xC28D2A0)
#define PJJKDGFODDL_BJIJFIMKCNF_OFFSET UNITYSDK_OFFSET(0xC28BDF0)
#define PJJKDGFODDL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC28E010)
#define PJJKDGFODDL_CNHLFFLEJEL_OFFSET UNITYSDK_OFFSET(0xC28DF90)
#define PJJKDGFODDL_CTOR_OFFSET UNITYSDK_OFFSET(0xC28D8C0)
#define PJJKDGFODDL_DAHLHNKNLHJ_OFFSET UNITYSDK_OFFSET(0xC287E90)
#define PJJKDGFODDL_DBMPLDCDANC_OFFSET UNITYSDK_OFFSET(0xC28B190)
#define PJJKDGFODDL_DCDMEMIPHOJ_OFFSET UNITYSDK_OFFSET(0xC288720)
#define PJJKDGFODDL_DGCEOIHOEIC_OFFSET UNITYSDK_OFFSET(0xC287C90)
#define PJJKDGFODDL_DGJHCBFNLCF_OFFSET UNITYSDK_OFFSET(0xC28D190)
#define PJJKDGFODDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC28DC80)
#define PJJKDGFODDL_DJIBINODJIN_OFFSET UNITYSDK_OFFSET(0xC28DD30)
#define PJJKDGFODDL_DKPGOHPOMLD_OFFSET UNITYSDK_OFFSET(0xC288B10)
#define PJJKDGFODDL_DMHAPBHBAPL_OFFSET UNITYSDK_OFFSET(0xC28DED0)
#define PJJKDGFODDL_EAKFOLICBGK_OFFSET UNITYSDK_OFFSET(0xC286C00)
#define PJJKDGFODDL_EEAHEHPHIKB_OFFSET UNITYSDK_OFFSET(0xC28D4B0)
#define PJJKDGFODDL_ELFIGCCMOBJ_OFFSET UNITYSDK_OFFSET(0xC28BE40)
#define PJJKDGFODDL_EMOPDONONDA_OFFSET UNITYSDK_OFFSET(0xC28CCF0)
#define PJJKDGFODDL_EOBPLCJJFFH_OFFSET UNITYSDK_OFFSET(0xC28D810)
#define PJJKDGFODDL_FBLBFOJCHLF_OFFSET UNITYSDK_OFFSET(0xC28A2B0)
#define PJJKDGFODDL_FGAADACBMCJ_OFFSET UNITYSDK_OFFSET(0xC289960)
#define PJJKDGFODDL_FJHKMIJOOGO_OFFSET UNITYSDK_OFFSET(0xC2897F0)
#define PJJKDGFODDL_FPKCNKEOGMD_OFFSET UNITYSDK_OFFSET(0xC28D340)
#define PJJKDGFODDL_FPOAPPOEHIB_OFFSET UNITYSDK_OFFSET(0xC28D590)
#define PJJKDGFODDL_GLPADIMIOHC_OFFSET UNITYSDK_OFFSET(0xC286A40)
#define PJJKDGFODDL_HPCIDALLOEP_OFFSET UNITYSDK_OFFSET(0xC28C400)
#define PJJKDGFODDL_JMAOGENNAMH_OFFSET UNITYSDK_OFFSET(0xC28A630)
#define PJJKDGFODDL_JNCFDFGIGML_OFFSET UNITYSDK_OFFSET(0xC28CE60)
#define PJJKDGFODDL_KHBGHBLEBOL_OFFSET UNITYSDK_OFFSET(0xC28C010)
#define PJJKDGFODDL_KMNEFGMKFKL_OFFSET UNITYSDK_OFFSET(0xC28BA70)
#define PJJKDGFODDL_LFLKDOMPNMP_OFFSET UNITYSDK_OFFSET(0xC28C7D0)
#define PJJKDGFODDL_MGIMPAMFGBN_OFFSET UNITYSDK_OFFSET(0xC289880)
#define PJJKDGFODDL_MIEHGFNOLND_OFFSET UNITYSDK_OFFSET(0xC28D7A0)
#define PJJKDGFODDL_MJIPADAIMFH_OFFSET UNITYSDK_OFFSET(0xC28C170)
#define PJJKDGFODDL_MOCEDBHGEEG_OFFSET UNITYSDK_OFFSET(0xC28DF30)
#define PJJKDGFODDL_NHLCHGCMOGD_OFFSET UNITYSDK_OFFSET(0xC28DE70)
#define PJJKDGFODDL_NNDHBDJPOOO_OFFSET UNITYSDK_OFFSET(0xC28A400)
#define PJJKDGFODDL_OBFKIKOKDMD_OFFSET UNITYSDK_OFFSET(0xC286DB0)
#define PJJKDGFODDL_OLJGBCMMMPA_OFFSET UNITYSDK_OFFSET(0xC288870)
#define PJJKDGFODDL_PAOOKMIFAGI_OFFSET UNITYSDK_OFFSET(0xC28BF70)
#define PJJKDGFODDL_PBGHCDKEAFC_OFFSET UNITYSDK_OFFSET(0xC28DDD0)
#define PJJKDGFODDL_PKLFMEMBGDC_OFFSET UNITYSDK_OFFSET(0xC28CF20)
#define PJJKDGFODDL_PNBELBCHAIF_OFFSET UNITYSDK_OFFSET(0xC28A310)
#define PJJKDGFODDL_PNGAHOGHECD_OFFSET UNITYSDK_OFFSET(0xC28A580)
#define PJJKDGFODDL_PNKGOAAFCLO_OFFSET UNITYSDK_OFFSET(0xC288950)

inline static constexpr unsigned int PJJKDGFODDL_TypeDefinitionIndex = 75632;

	class PJJKDGFODDL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* IFMBNFDCLCL; // 0x10
		::RPG::GameCore::GameWorld* LMMOLOCONLH; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* EOIDJEJEAHO; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* DHCDNCFIPNG; // 0x28
		::System::String* HEPFDOBGIME; // 0x30
		::MCLDPNEJPBG* EGJNACIPNKF; // 0x38
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::String*>>* POLGFOEHLEK; // 0x40
		::HHCKNGMIAKL* HOJLLCOOLDN; // 0x48
		::PJJKDGFODDL_CNDPPBCPHOJ* JHIHDPHBCBP; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::RPG::GameCore::GameEntity*, ::IFEEMEAJMEJ*>>* MACFIIFMDDP; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* MMPLDEINPJH; // 0x60
		::RPG::Client::Pet::PetLineupShape MDMCHPCNACE; // 0x68
		::System::Boolean OGGFENEKPDB; // 0x6C
		static ::PJJKDGFODDL_CNDPPBCPHOJ** StaticGet_NCPJBCONKHP()
		{
			return (::PJJKDGFODDL_CNDPPBCPHOJ**)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0x36DA0);
		}

		static ::PJJKDGFODDL_CNDPPBCPHOJ** StaticGet_ILNAPOLDNPN()
		{
			return (::PJJKDGFODDL_CNDPPBCPHOJ**)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0x36DA8);
		}

		static ::PJJKDGFODDL_CNDPPBCPHOJ** StaticGet_KEBIFDCCIME()
		{
			return (::PJJKDGFODDL_CNDPPBCPHOJ**)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0x36DB0);
		}

		static ::RPG::GameCore::StringHash* StaticGet_HDBELMCBEON()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0xB120);
		}

		static ::RPG::GameCore::StringHash* StaticGet_OHFHMPMNLOI()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0xB124);
		}

		static ::RPG::GameCore::StringHash* StaticGet_FGJKACCDDAP()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0xB128);
		}

		static ::RPG::GameCore::StringHash* StaticGet_GDMDBGOEJDG()
		{
			return (::RPG::GameCore::StringHash*)UnitySDK::FromName("", "PJJKDGFODDL")->GetStaticField(0xB12C);
		}

		// static const ::System::String* EJLNGPIFPCE; // 0x0
		// static const ::System::Object FOCNENDODJI; // 0x0
		// static const ::System::Object EKJNFKBAHII; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameWorld* a1, ::HHCKNGMIAKL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*, ::HHCKNGMIAKL*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJJKDGFODDL_CCTOR_OFFSET))();
		}

		::System::Boolean GLPADIMIOHC(::RPG::GameCore::GameEntity* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJKDGFODDL_GLPADIMIOHC_OFFSET))(this, a1, a2);
		}

		::System::Void EAKFOLICBGK(::System::Action_2<::System::UInt32, ::RPG::Client::Pet::IPet*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::UInt32, ::RPG::Client::Pet::IPet*>*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_EAKFOLICBGK_OFFSET))(this, a1);
		}

		::System::Void OBFKIKOKDMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_OBFKIKOKDMD_OFFSET))(this);
		}

		static ::System::Boolean DAHLHNKNLHJ(::IFEEMEAJMEJ* a1, ::RPG::Client::Pet::IPetRepository* a2, ::System::Object* a3, ::RPG::Client::Pet::PetLineupShape a4)
		{
			return ((::System::Boolean(*)(::IFEEMEAJMEJ*, ::RPG::Client::Pet::IPetRepository*, ::System::Object*, ::RPG::Client::Pet::PetLineupShape))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DAHLHNKNLHJ_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean PNKGOAAFCLO(::KBGKLKLKLFG* a1, ::RPG::Client::Pet::IPetRepository* a2, ::RPG::Client::Pet::IPet* a3)
		{
			return ((::System::Boolean(*)(::KBGKLKLKLFG*, ::RPG::Client::Pet::IPetRepository*, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_PNKGOAAFCLO_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean OLJGBCMMMPA(::PFNJCDINMLA* a1, ::RPG::Client::Pet::IPetRepository* a2, ::RPG::Client::Pet::IPet* a3)
		{
			return ((::System::Boolean(*)(::PFNJCDINMLA*, ::RPG::Client::Pet::IPetRepository*, ::RPG::Client::Pet::IPet*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_OLJGBCMMMPA_OFFSET))(a1, a2, a3);
		}

		::System::Void DCDMEMIPHOJ(::PJJKDGFODDL_BFADGAHEKLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJJKDGFODDL_BFADGAHEKLK*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DCDMEMIPHOJ_OFFSET))(this, a1);
		}

		::System::Void DKPGOHPOMLD(::PJJKDGFODDL_BFADGAHEKLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJJKDGFODDL_BFADGAHEKLK*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DKPGOHPOMLD_OFFSET))(this, a1);
		}

		::NNKDKMBKFHC* FGAADACBMCJ(::PJJKDGFODDL_BFADGAHEKLK* a1, ::System::String* a2)
		{
			return ((::NNKDKMBKFHC*(*)(::PVOID, ::PJJKDGFODDL_BFADGAHEKLK*, ::System::String*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_FGAADACBMCJ_OFFSET))(this, a1, a2);
		}

		::System::Void DGCEOIHOEIC(::PJJKDGFODDL_BFADGAHEKLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJJKDGFODDL_BFADGAHEKLK*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DGCEOIHOEIC_OFFSET))(this, a1);
		}

		::System::Void PNBELBCHAIF(::PJJKDGFODDL_BFADGAHEKLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJJKDGFODDL_BFADGAHEKLK*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_PNBELBCHAIF_OFFSET))(this, a1);
		}

		::System::Void NNDHBDJPOOO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_NNDHBDJPOOO_OFFSET))(this);
		}

		static ::System::String* MGIMPAMFGBN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJKDGFODDL_MGIMPAMFGBN_OFFSET))(a1, a2);
		}

		::System::Void PNGAHOGHECD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_PNGAHOGHECD_OFFSET))(this, a1);
		}

		::System::Void AIEHIOGKIPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_AIEHIOGKIPP_OFFSET))(this);
		}

		::System::Void BJIJFIMKCNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_BJIJFIMKCNF_OFFSET))(this);
		}

		::System::Void JMAOGENNAMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_JMAOGENNAMH_OFFSET))(this);
		}

		::System::Void KHBGHBLEBOL(::System::String* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJKDGFODDL_KHBGHBLEBOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KMNEFGMKFKL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_KMNEFGMKFKL_OFFSET))(this);
		}

		::System::Void MJIPADAIMFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_MJIPADAIMFH_OFFSET))(this);
		}

		::System::Void LFLKDOMPNMP(::System::String* a1, ::System::UInt32 a2, ::PJJKDGFODDL_CNDPPBCPHOJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::PJJKDGFODDL_CNDPPBCPHOJ*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_LFLKDOMPNMP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HPCIDALLOEP(::System::String* a1, ::PJJKDGFODDL_OCHAIPCAONE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::PJJKDGFODDL_OCHAIPCAONE*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_HPCIDALLOEP_OFFSET))(this, a1, a2);
		}

		::System::Void DBMPLDCDANC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DBMPLDCDANC_OFFSET))(this);
		}

		::System::Void JNCFDFGIGML(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_JNCFDFGIGML_OFFSET))(this, a1);
		}

		::System::Void PKLFMEMBGDC(::System::String* a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PJJKDGFODDL_PKLFMEMBGDC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGJHCBFNLCF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DGJHCBFNLCF_OFFSET))(this, a1);
		}

		::System::Void FPKCNKEOGMD(::System::Boolean a1, ::RPG::GameCore::CharacterVisibleReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::CharacterVisibleReason))((::PBYTE)hIl2Cpp + PJJKDGFODDL_FPKCNKEOGMD_OFFSET))(this, a1, a2);
		}

		::System::Boolean EEAHEHPHIKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_EEAHEHPHIKB_OFFSET))(this);
		}

		::System::Void FPOAPPOEHIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_FPOAPPOEHIB_OFFSET))(this);
		}

		static ::System::String* PAOOKMIFAGI(::RPG::Client::Pet::PetSummonStateType a1, ::System::UInt32 a2)
		{
			return ((::System::String*(*)(::RPG::Client::Pet::PetSummonStateType, ::System::UInt32))((::PBYTE)hIl2Cpp + PJJKDGFODDL_PAOOKMIFAGI_OFFSET))(a1, a2);
		}

		::RPG::GameCore::GameEntity* BCGGPNOKMCA(::System::String* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_BCGGPNOKMCA_OFFSET))(this, a1);
		}

		static ::PJJKDGFODDL_CNDPPBCPHOJ* ELFIGCCMOBJ(::RPG::Client::Pet::PetSummonStateType a1)
		{
			return ((::PJJKDGFODDL_CNDPPBCPHOJ*(*)(::RPG::Client::Pet::PetSummonStateType))((::PBYTE)hIl2Cpp + PJJKDGFODDL_ELFIGCCMOBJ_OFFSET))(a1);
		}

		::RPG::GameCore::GameEntity* MIEHGFNOLND()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_MIEHGFNOLND_OFFSET))(this);
		}

		::System::Boolean EOBPLCJJFFH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_EOBPLCJJFFH_OFFSET))(this);
		}

		::System::Boolean AHHHBCBAGBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_AHHHBCBAGBC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DISPOSE_OFFSET))(this);
		}

		::System::Void DJIBINODJIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DJIBINODJIN_OFFSET))(this);
		}

		::System::Void PBGHCDKEAFC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_PBGHCDKEAFC_OFFSET))(this, a1);
		}

		::System::Void NHLCHGCMOGD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_NHLCHGCMOGD_OFFSET))(this, a1);
		}

		::System::Void DMHAPBHBAPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_DMHAPBHBAPL_OFFSET))(this, a1);
		}

		::System::Void MOCEDBHGEEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_MOCEDBHGEEG_OFFSET))(this, a1);
		}

		static ::System::String* FJHKMIJOOGO(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + PJJKDGFODDL_FJHKMIJOOGO_OFFSET))(a1);
		}

		static ::System::UInt32 CNHLFFLEJEL()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + PJJKDGFODDL_CNHLFFLEJEL_OFFSET))();
		}

		::System::String* EMOPDONONDA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_EMOPDONONDA_OFFSET))(this);
		}

		static ::System::String* FBLBFOJCHLF(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + PJJKDGFODDL_FBLBFOJCHLF_OFFSET))(a1);
		}

		::KOFOPJEMGNA* AGELLKIOIMI()
		{
			return ((::KOFOPJEMGNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJJKDGFODDL_AGELLKIOIMI_OFFSET))(this);
		}

	};
