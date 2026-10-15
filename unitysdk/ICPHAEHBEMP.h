#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"
class EKFMIDBJDIA;
namespace RPG::Client { class DecalPuzzle; }
namespace RPG::Client { class FreeDecal; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class SphereCollider; }

#define ICPHAEHBEMP_AJGFMHNLBHE_OFFSET UNITYSDK_OFFSET(0x15E586F0)
#define ICPHAEHBEMP_CEFBAJMONHM_OFFSET UNITYSDK_OFFSET(0x15E57400)
#define ICPHAEHBEMP_CJGAHJKHAMB_OFFSET UNITYSDK_OFFSET(0x15E56280)
#define ICPHAEHBEMP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E59200)
#define ICPHAEHBEMP_ENLFEDMFBCA_OFFSET UNITYSDK_OFFSET(0x15E58BE0)
#define ICPHAEHBEMP_GBJBPNIFGIB_OFFSET UNITYSDK_OFFSET(0x15E56100)
#define ICPHAEHBEMP_GLJGGGIJJNI_OFFSET UNITYSDK_OFFSET(0x15E56F70)
#define ICPHAEHBEMP_HDPPOIMFAKA_OFFSET UNITYSDK_OFFSET(0x15E58310)
#define ICPHAEHBEMP_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x15E56090)
#define ICPHAEHBEMP_IFGIIKEDIEO_OFFSET UNITYSDK_OFFSET(0x15E56AD0)
#define ICPHAEHBEMP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15E58A80)
#define ICPHAEHBEMP_JCNEPNKAPIB_OFFSET UNITYSDK_OFFSET(0x15E58AD0)
#define ICPHAEHBEMP_LMGGLILNAHC_OFFSET UNITYSDK_OFFSET(0x15E590B0)
#define ICPHAEHBEMP_MHLAJOMDJOG_OFFSET UNITYSDK_OFFSET(0x15E58980)
#define ICPHAEHBEMP_MOJAGOBHDKD_OFFSET UNITYSDK_OFFSET(0x15E57220)
#define ICPHAEHBEMP_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x15E55E50)
#define ICPHAEHBEMP_OKHEDIADOEC_OFFSET UNITYSDK_OFFSET(0x15E58F70)
#define ICPHAEHBEMP_PFFEBEKJLNB_OFFSET UNITYSDK_OFFSET(0x15E56D00)
#define ICPHAEHBEMP_PLINLIIFAPF_OFFSET UNITYSDK_OFFSET(0x15E568C0)
#define ICPHAEHBEMP_POJBKNGKIMP_OFFSET UNITYSDK_OFFSET(0x15E56B70)

inline static constexpr unsigned int ICPHAEHBEMP_TypeDefinitionIndex = 68658;

	class ICPHAEHBEMP : public ::RPG::Client::BehaviorBase
	{
	public:
		::RPG::GameCore::GameEntity* JOIPPIKNILC; // 0x18
		::UnityEngine::SphereCollider* LGJKAAIMJLD; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* JHBIGOHDKKG; // 0x28
		::RPG::GameCore::PropComponent* CLGHBANCIDF; // 0x30
		::RPG::GameCore::EventManager* EBOCGAJBGPG; // 0x38
		::UnityEngine::Animator* IKHNGKOLIEC; // 0x40
		::UnityEngine::BoxCollider* GDJEPIMALFI; // 0x48
		::RPG::GameCore::GameEntity* MFOAFKNAIOD; // 0x50
		::System::String* FDHGBLNNFCJ; // 0x58
		::System::String* BIDGMFEGNGM; // 0x60
		::System::Boolean POHEELFNCOM; // 0x68
		::System::Byte _padding0[0x3];
		::System::Single PMCOJONMBNO; // 0x6C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_CTOR_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void GBJBPNIFGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_GBJBPNIFGIB_OFFSET))(this);
		}

		::System::Void CJGAHJKHAMB(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_CJGAHJKHAMB_OFFSET))(this, a1);
		}

		::System::Void GLJGGGIJJNI(::RPG::Client::FreeDecal* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FreeDecal*))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_GLJGGGIJJNI_OFFSET))(this, a1);
		}

		::System::Void MOJAGOBHDKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_MOJAGOBHDKD_OFFSET))(this);
		}

		::System::Void CEFBAJMONHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_CEFBAJMONHM_OFFSET))(this);
		}

		::System::Void HDPPOIMFAKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_HDPPOIMFAKA_OFFSET))(this);
		}

		::System::Void AJGFMHNLBHE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_AJGFMHNLBHE_OFFSET))(this, a1);
		}

		::System::Void IFGIIKEDIEO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_IFGIIKEDIEO_OFFSET))(this, a1);
		}

		::System::Void POJBKNGKIMP(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_POJBKNGKIMP_OFFSET))(this, a1, a2);
		}

		::System::Void ILEMLGEGLCC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_ILEMLGEGLCC_OFFSET))(this, a1);
		}

		::System::Boolean PFFEBEKJLNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_PFFEBEKJLNB_OFFSET))(this);
		}

		::System::Void MHLAJOMDJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_MHLAJOMDJOG_OFFSET))(this);
		}

		::System::Void ENLFEDMFBCA(::UnityEngine::Rect a1, ::UnityEngine::Color a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_ENLFEDMFBCA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OKHEDIADOEC(::UnityEngine::Vector2 a1, ::System::Single a2, ::UnityEngine::Color a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_OKHEDIADOEC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean PLINLIIFAPF(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_PLINLIIFAPF_OFFSET))(this, a1);
		}

		::System::Void LMGGLILNAHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_LMGGLILNAHC_OFFSET))(this, a1);
		}

		::System::Int32 JCNEPNKAPIB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_JCNEPNKAPIB_OFFSET))(this);
		}

		::RPG::Client::DecalPuzzle* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::DecalPuzzle*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICPHAEHBEMP_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
