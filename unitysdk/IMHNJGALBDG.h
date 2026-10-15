#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PedestrianState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FHOLDPBFDLO;
class IEMCCEBKBLB;
class IJEKJNBKPJN;
class IMHNJGALBDG;
class KBGKAMMKDCE;
namespace RPG::Client { class NpcBodySizeInfo; }
namespace RPG::Client { class RootMotionHandler; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NpcWalkStyleWeightInfo; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define IMHNJGALBDG_AHKEGKNPBPJ_OFFSET UNITYSDK_OFFSET(0x164D6F40)
#define IMHNJGALBDG_AKONGKOPFMG_OFFSET UNITYSDK_OFFSET(0x164D4F70)
#define IMHNJGALBDG_ALLOPBODCAH_OFFSET UNITYSDK_OFFSET(0x164D6C70)
#define IMHNJGALBDG_BGDKFHEBDFJ_OFFSET UNITYSDK_OFFSET(0x164D4BF0)
#define IMHNJGALBDG_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x164D5030)
#define IMHNJGALBDG_CAJHNADOHLP_OFFSET UNITYSDK_OFFSET(0x164D5640)
#define IMHNJGALBDG_CEOEEDHHDIO_OFFSET UNITYSDK_OFFSET(0x164D8690)
#define IMHNJGALBDG_CTOR_OFFSET UNITYSDK_OFFSET(0x164D4C00)
#define IMHNJGALBDG_DFFCHNLKELO_OFFSET UNITYSDK_OFFSET(0x164D5140)
#define IMHNJGALBDG_DMAJMLBHMPK_OFFSET UNITYSDK_OFFSET(0x164D9A70)
#define IMHNJGALBDG_DMDDKCBHBBM_OFFSET UNITYSDK_OFFSET(0x164D6E10)
#define IMHNJGALBDG_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x164D9330)
#define IMHNJGALBDG_DNKJJODOAJA_OFFSET UNITYSDK_OFFSET(0x164D8DB0)
#define IMHNJGALBDG_DPICFBFDGNB_OFFSET UNITYSDK_OFFSET(0x164D4BC0)
#define IMHNJGALBDG_EKFAGMCODMG_OFFSET UNITYSDK_OFFSET(0x164D9B20)
#define IMHNJGALBDG_FAMGIFPFOJA_OFFSET UNITYSDK_OFFSET(0x164D9750)
#define IMHNJGALBDG_FBLELBOMIDN_OFFSET UNITYSDK_OFFSET(0x164D6260)
#define IMHNJGALBDG_FDOOLGLCKHH_OFFSET UNITYSDK_OFFSET(0x164D8DF0)
#define IMHNJGALBDG_GDMFCJDMIIN_OFFSET UNITYSDK_OFFSET(0x164D7C10)
#define IMHNJGALBDG_GET_ANIMATORMOVECALLBACKORDER_OFFSET UNITYSDK_OFFSET(0x164D4BD0)
#define IMHNJGALBDG_GET_ENABLEANIMATORMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164D4BE0)
#define IMHNJGALBDG_GHMMEPLMEIC_OFFSET UNITYSDK_OFFSET(0x164D9690)
#define IMHNJGALBDG_HABADHLJBIO_OFFSET UNITYSDK_OFFSET(0x164D7E10)
#define IMHNJGALBDG_JGABBGHJBAF_OFFSET UNITYSDK_OFFSET(0x164D79A0)
#define IMHNJGALBDG_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x164D9460)
#define IMHNJGALBDG_KJECHJKGBPG_OFFSET UNITYSDK_OFFSET(0x164D8120)
#define IMHNJGALBDG_LIADOFLHKNF_OFFSET UNITYSDK_OFFSET(0x164D6BE0)
#define IMHNJGALBDG_LJPDMHMGOIJ_OFFSET UNITYSDK_OFFSET(0x164D9600)
#define IMHNJGALBDG_MEMABPLBMMM_OFFSET UNITYSDK_OFFSET(0x164D7EE0)
#define IMHNJGALBDG_NKNHBLBEGCH_OFFSET UNITYSDK_OFFSET(0x164D81B0)
#define IMHNJGALBDG_NLBGDCKPILC_OFFSET UNITYSDK_OFFSET(0x164D7840)
#define IMHNJGALBDG_OAIMHGOFNDG_OFFSET UNITYSDK_OFFSET(0x164D60E0)
#define IMHNJGALBDG_OCGJCLMKJBA_OFFSET UNITYSDK_OFFSET(0x164D97A0)
#define IMHNJGALBDG_OGMDDPBHHKH_OFFSET UNITYSDK_OFFSET(0x164D61C0)
#define IMHNJGALBDG_OJDIBHNIDHN_OFFSET UNITYSDK_OFFSET(0x164D7250)
#define IMHNJGALBDG_ONANIMATORMOVE_OFFSET UNITYSDK_OFFSET(0x164D9210)
#define IMHNJGALBDG_PKPMAJDLMNI_OFFSET UNITYSDK_OFFSET(0x164D6310)
#define IMHNJGALBDG__HIDE_B__58_0_OFFSET UNITYSDK_OFFSET(0x164D9CB0)

inline static constexpr unsigned int IMHNJGALBDG_TypeDefinitionIndex = 69215;

	class IMHNJGALBDG : public ::System::Object
	{
	public:
		::IEMCCEBKBLB* BOIIFBOHNCH; // 0x10
		::IJEKJNBKPJN* LNJHBFDBLJN; // 0x18
		::KBGKAMMKDCE* ECKLOOLFCNO; // 0x20
		::RPG::GameCore::NpcWalkStyleWeightInfo* EMACJMPOIIA; // 0x28
		::RPG::Client::RootMotionHandler* ALKMPEBIMHH; // 0x30
		::UnityEngine::Transform* BFPEBHOHFGK; // 0x38
		::System::Action* KJFJCIFMACB; // 0x40
		::System::String* LGPJHEABONH; // 0x48
		::Il2CppArray<::UnityEngine::Vector3>* INMIMFKNKJF; // 0x50
		::FHOLDPBFDLO* AJIHEFMLGJM; // 0x58
		::System::Action* LEEEFJLOCBA; // 0x60
		::RPG::GameCore::GameEntity* CKPJNDKOHBE; // 0x68
		::RPG::GameCore::TransformComponent* PPLDOKDKOOE; // 0x70
		::RPG::Client::NpcBodySizeInfo* FLPEFKEJNJH; // 0x78
		::System::String* BJABJJNPNFD; // 0x80
		::System::Single NGBIPLOKAOE; // 0x88
		::System::Single LHPBGBLGADG; // 0x8C
		::RPG::Client::PedestrianState NNKMIKNIELL; // 0x90
		::System::Single PFCMKIMALJB; // 0x94
		::System::Boolean NPEMLPCDKGK; // 0x98
		::System::Boolean JICGNPBCLAP; // 0x99
		::System::Byte _padding0[0x2];
		::System::Single NFKFCPJKFEB; // 0x9C
		::System::Single IEKGFDOOBKE; // 0xA0
		::System::Boolean LFKHNMLCNEI; // 0xA4
		::System::Boolean PHKEOKGOPEO; // 0xA5
		::System::Boolean KHCDHHFKGOB; // 0xA6
		::System::Boolean BGJFGKGKCEB; // 0xA7
		::System::Single CMHOIHDNDNO; // 0xA8
		::System::Single FECBHFMFGPE; // 0xAC
		::System::UInt32 NCINJANBEBB; // 0xB0
		::System::Int32 MHAPHMCJIGA; // 0xB4
		::UnityEngine::Vector3 PABJCPDCMNA; // 0xB8
		::UnityEngine::Vector3 ADAMLNOKDPM; // 0xC4
		::System::Int32 BHGIOJNHLJA; // 0xD0
		::UnityEngine::Vector3 LOLMFMLEEMF; // 0xD4
		::System::Int32 PHFBFKNPMEC; // 0xE0
		::System::Single IKMIGMBFLKO; // 0xE4
		// static const ::System::Object INLGOFJHAKD; // 0x0
		// static const ::System::Object HFFCGDLMOLE; // 0x0
		// static const ::System::Object EKHJIFJBBCJ; // 0x0
		// static const ::System::Object KBEEMOFCOCE; // 0x0
		// static const ::System::Object CFGCPDGFEHC; // 0x0
		// static const ::System::Object KMNAKCDIJHB; // 0x0
		// static const ::System::Object JIJIPAADPCD; // 0x0
		// static const ::System::Object DOFJBDFCIIB; // 0x0
		::System::Void _ctor(::KBGKAMMKDCE* a1, ::System::String* a2, ::System::String* a3, ::FHOLDPBFDLO* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::KBGKAMMKDCE*, ::System::String*, ::System::String*, ::FHOLDPBFDLO*, ::System::Action*))((::PBYTE)hIl2Cpp + IMHNJGALBDG_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 DPICFBFDGNB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_DPICFBFDGNB_OFFSET))(this);
		}

		::System::Int32 get_AnimatorMoveCallbackOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_GET_ANIMATORMOVECALLBACKORDER_OFFSET))(this);
		}

		::System::Boolean get_EnableAnimatorMoveCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_GET_ENABLEANIMATORMOVECALLBACK_OFFSET))(this);
		}

		::RPG::Client::PedestrianState BGDKFHEBDFJ()
		{
			return ((::RPG::Client::PedestrianState(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_BGDKFHEBDFJ_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void DFFCHNLKELO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_DFFCHNLKELO_OFFSET))(this, a1);
		}

		::System::Boolean ALLOPBODCAH(::System::Boolean a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_ALLOPBODCAH_OFFSET))(this, a1, a2);
		}

		::System::Void OJDIBHNIDHN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_OJDIBHNIDHN_OFFSET))(this, a1);
		}

		::System::Void JGABBGHJBAF(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IMHNJGALBDG_JGABBGHJBAF_OFFSET))(this, a1);
		}

		::System::Void GDMFCJDMIIN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IMHNJGALBDG_GDMFCJDMIIN_OFFSET))(this, a1, a2);
		}

		::System::Void HABADHLJBIO(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + IMHNJGALBDG_HABADHLJBIO_OFFSET))(this, a1, a2);
		}

		::System::Void DMDDKCBHBBM(::FHOLDPBFDLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHOLDPBFDLO*))((::PBYTE)hIl2Cpp + IMHNJGALBDG_DMDDKCBHBBM_OFFSET))(this, a1);
		}

		::System::Void MEMABPLBMMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_MEMABPLBMMM_OFFSET))(this);
		}

		::System::Void CAJHNADOHLP(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + IMHNJGALBDG_CAJHNADOHLP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NKNHBLBEGCH(::System::Single a1, ::System::Boolean a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_NKNHBLBEGCH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LIADOFLHKNF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMHNJGALBDG_LIADOFLHKNF_OFFSET))(this, a1);
		}

		::System::Boolean PKPMAJDLMNI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_PKPMAJDLMNI_OFFSET))(this);
		}

		::System::Void OnAnimatorMove(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + IMHNJGALBDG_ONANIMATORMOVE_OFFSET))(this, a1);
		}

		::System::Void DMKJAJLNEBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_DMKJAJLNEBK_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Void FBLELBOMIDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_FBLELBOMIDN_OFFSET))(this);
		}

		::System::Void LJPDMHMGOIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_LJPDMHMGOIJ_OFFSET))(this);
		}

		::System::Void NLBGDCKPILC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_NLBGDCKPILC_OFFSET))(this);
		}

		::System::Void OAIMHGOFNDG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMHNJGALBDG_OAIMHGOFNDG_OFFSET))(this, a1);
		}

		::System::Void CEOEEDHHDIO(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_CEOEEDHHDIO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 FDOOLGLCKHH(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_FDOOLGLCKHH_OFFSET))(this, a1, a2);
		}

		static ::System::Single GHMMEPLMEIC(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_GHMMEPLMEIC_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void OGMDDPBHHKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_OGMDDPBHHKH_OFFSET))(this);
		}

		::System::Void FAMGIFPFOJA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IMHNJGALBDG_FAMGIFPFOJA_OFFSET))(this, a1);
		}

		::System::Void OCGJCLMKJBA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IMHNJGALBDG_OCGJCLMKJBA_OFFSET))(this, a1);
		}

		::System::Void AKONGKOPFMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_AKONGKOPFMG_OFFSET))(this);
		}

		::System::Void AHKEGKNPBPJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_AHKEGKNPBPJ_OFFSET))(this);
		}

		::System::Void KJECHJKGBPG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMHNJGALBDG_KJECHJKGBPG_OFFSET))(this, a1);
		}

		::System::Void EKFAGMCODMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_EKFAGMCODMG_OFFSET))(this);
		}

		::System::Single DMAJMLBHMPK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_DMAJMLBHMPK_OFFSET))(this);
		}

		::System::Void DNKJJODOAJA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG_DNKJJODOAJA_OFFSET))(this);
		}

		::System::Void _Hide_b__58_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMHNJGALBDG__HIDE_B__58_0_OFFSET))(this);
		}

	};
