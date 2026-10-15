#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Match3/BombType.h"
#include "unitysdk/RPG/GameCore/Match3/PieceTag.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector2.h"
class JEANAIHDCAA;
class MOGBNBGMIHF;
class TutorialNode;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class MatchThreeBoard; }
namespace RPG::Client { class TextOutline; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_MATCHTHREEPIECE_AAFDLGGFLDE_OFFSET UNITYSDK_OFFSET(0xD5A8C40)
#define RPG_CLIENT_MATCHTHREEPIECE_BFKKEECJJAK_OFFSET UNITYSDK_OFFSET(0xD5A7E30)
#define RPG_CLIENT_MATCHTHREEPIECE_BMKNENLDFIA_OFFSET UNITYSDK_OFFSET(0xD5A7630)
#define RPG_CLIENT_MATCHTHREEPIECE_CDMNGEGKKDK_OFFSET UNITYSDK_OFFSET(0xD5A6350)
#define RPG_CLIENT_MATCHTHREEPIECE_CTOR_OFFSET UNITYSDK_OFFSET(0xD5A8C90)
#define RPG_CLIENT_MATCHTHREEPIECE_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xD5A8240)
#define RPG_CLIENT_MATCHTHREEPIECE_DKGDEOLHNOH_OFFSET UNITYSDK_OFFSET(0xD5A8AC0)
#define RPG_CLIENT_MATCHTHREEPIECE_DPFONMCODKI_OFFSET UNITYSDK_OFFSET(0xD5A72E0)
#define RPG_CLIENT_MATCHTHREEPIECE_EMOGHDHGHDH_OFFSET UNITYSDK_OFFSET(0xD5A7BD0)
#define RPG_CLIENT_MATCHTHREEPIECE_FBGMOKEMCPG_OFFSET UNITYSDK_OFFSET(0xD5A76E0)
#define RPG_CLIENT_MATCHTHREEPIECE_GET_PIECEDATA_OFFSET UNITYSDK_OFFSET(0xD5A5A40)
#define RPG_CLIENT_MATCHTHREEPIECE_GET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD5A5850)
#define RPG_CLIENT_MATCHTHREEPIECE_GIKGKFFKGHM_OFFSET UNITYSDK_OFFSET(0xD5A64F0)
#define RPG_CLIENT_MATCHTHREEPIECE_GNGOBDNNOHH_OFFSET UNITYSDK_OFFSET(0xD5A6020)
#define RPG_CLIENT_MATCHTHREEPIECE_HKCKAEICPBE_OFFSET UNITYSDK_OFFSET(0xD5A68D0)
#define RPG_CLIENT_MATCHTHREEPIECE_HODBMFHDEIG_OFFSET UNITYSDK_OFFSET(0xD5A7340)
#define RPG_CLIENT_MATCHTHREEPIECE_INIT_OFFSET UNITYSDK_OFFSET(0xD5A5A60)
#define RPG_CLIENT_MATCHTHREEPIECE_JPEFEOAKLCO_OFFSET UNITYSDK_OFFSET(0xD5A8BF0)
#define RPG_CLIENT_MATCHTHREEPIECE_MANLJLCPHIA_OFFSET UNITYSDK_OFFSET(0xD5A8A60)
#define RPG_CLIENT_MATCHTHREEPIECE_MATCHED_OFFSET UNITYSDK_OFFSET(0xD5A79D0)
#define RPG_CLIENT_MATCHTHREEPIECE_MCHBCDCEDCM_OFFSET UNITYSDK_OFFSET(0xD5A7D80)
#define RPG_CLIENT_MATCHTHREEPIECE_MOVEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xD5A6AB0)
#define RPG_CLIENT_MATCHTHREEPIECE_MOVEPATH_OFFSET UNITYSDK_OFFSET(0xD5A6BE0)
#define RPG_CLIENT_MATCHTHREEPIECE_NEBGEBBIJAD_OFFSET UNITYSDK_OFFSET(0xD5A6B80)
#define RPG_CLIENT_MATCHTHREEPIECE_OIGKAPKPJKE_OFFSET UNITYSDK_OFFSET(0xD5A6950)
#define RPG_CLIENT_MATCHTHREEPIECE_ONCREATE_OFFSET UNITYSDK_OFFSET(0xD5A84A0)
#define RPG_CLIENT_MATCHTHREEPIECE_ONDRAG_OFFSET UNITYSDK_OFFSET(0xD5A8620)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERDOWN_OFFSET UNITYSDK_OFFSET(0xD5A8680)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERENTER_OFFSET UNITYSDK_OFFSET(0xD5A8740)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTEREXIT_OFFSET UNITYSDK_OFFSET(0xD5A8800)
#define RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERUP_OFFSET UNITYSDK_OFFSET(0xD5A86E0)
#define RPG_CLIENT_MATCHTHREEPIECE_PBIHIBPFPHF_OFFSET UNITYSDK_OFFSET(0xD5A7290)
#define RPG_CLIENT_MATCHTHREEPIECE_PENNHJNNPFJ_OFFSET UNITYSDK_OFFSET(0xD5A8060)
#define RPG_CLIENT_MATCHTHREEPIECE_PLAYBOMBLOOPANIM_OFFSET UNITYSDK_OFFSET(0xD5A6A60)
#define RPG_CLIENT_MATCHTHREEPIECE_PLAYFADEINANIM_OFFSET UNITYSDK_OFFSET(0xD5A6820)
#define RPG_CLIENT_MATCHTHREEPIECE_PPCNACEIHLM_OFFSET UNITYSDK_OFFSET(0xD5A8B60)
#define RPG_CLIENT_MATCHTHREEPIECE_SETBOARD_OFFSET UNITYSDK_OFFSET(0xD5A5E60)
#define RPG_CLIENT_MATCHTHREEPIECE_SETHOVERED_OFFSET UNITYSDK_OFFSET(0xD5A5F90)
#define RPG_CLIENT_MATCHTHREEPIECE_SETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0xD5A5F30)
#define RPG_CLIENT_MATCHTHREEPIECE_SETSELECTED_OFFSET UNITYSDK_OFFSET(0xD5A6150)
#define RPG_CLIENT_MATCHTHREEPIECE_SETSIZE_OFFSET UNITYSDK_OFFSET(0xD5A5EB0)
#define RPG_CLIENT_MATCHTHREEPIECE_SETUPPIECEDATA_OFFSET UNITYSDK_OFFSET(0xD5A67D0)
#define RPG_CLIENT_MATCHTHREEPIECE_SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD5A6210)
#define RPG_CLIENT_MATCHTHREEPIECE_SET_PIECEDATA_OFFSET UNITYSDK_OFFSET(0xD5A5A50)
#define RPG_CLIENT_MATCHTHREEPIECE_SET_POSINDEX_OFFSET UNITYSDK_OFFSET(0xD5A5890)
#define RPG_CLIENT_MATCHTHREEPIECE_SHAKE_OFFSET UNITYSDK_OFFSET(0xD5A7F30)
#define RPG_CLIENT_MATCHTHREEPIECE_SPAWNED_OFFSET UNITYSDK_OFFSET(0xD5A80D0)
#define RPG_CLIENT_MATCHTHREEPIECE_STOPSHAKE_OFFSET UNITYSDK_OFFSET(0xD5A7FB0)
#define RPG_CLIENT_MATCHTHREEPIECE_SWITCHTO_OFFSET UNITYSDK_OFFSET(0xD5A88C0)

namespace RPG::Client
{
	inline static constexpr unsigned int MatchThreePiece_TypeDefinitionIndex = 65959;

	class MatchThreePiece : public ::UnityEngine::MonoBehaviour
	{
	public:
		::JEANAIHDCAA* _PieceData_k__BackingField; // 0x18
		::UnityEngine::Vector2Int FNOMAKFJKFB; // 0x20
		::System::Single CNMJLANLGBK; // 0x28
		::System::Single GINLBNMBLCA; // 0x2C
		::System::Single KHECLAFLAPJ; // 0x30
		::System::Single GFHJNHOMCCN; // 0x34
		::System::Boolean LAMLKCBNAIP; // 0x38
		::System::Boolean FHBNNGCEPFD; // 0x39
		::System::Byte _padding0[0x6];
		::RPG::Client::MatchThreeBoard* MIPPNCGOJNM; // 0x40
		::UnityEngine::Animation* PMOJILOJEPE; // 0x48
		::UnityEngine::UI::Image* FFGMMMAJLBC; // 0x50
		::UnityEngine::UI::Image* HMDBNINAEDI; // 0x58
		::RPG::Client::AnimatorButton* AAFGIHCCPOP; // 0x60
		::TutorialNode* PHCKLEILNME; // 0x68
		::UnityEngine::Transform* CGDDPIMNLJD; // 0x70
		::UnityEngine::Transform* OCANLBKMJCB; // 0x78
		::UnityEngine::Transform* FIDPAGNLAAN; // 0x80
		::UnityEngine::Transform* BDFAHHKOPBG; // 0x88
		::UnityEngine::Transform* DEMLLKECJLG; // 0x90
		::UnityEngine::Animator* APPGGMLEPLN; // 0x98
		::UnityEngine::Transform* GGGPEDOCALJ; // 0xA0
		::UnityEngine::UI::Text* DMAOHOGFHDI; // 0xA8
		::RPG::Client::TextOutline* EPFIBNGLAAM; // 0xB0
		::UnityEngine::Transform* FKIEMCKBNDA; // 0xB8
		::System::Int32 IJOELJINKBL; // 0xC0
		::System::Int32 PJHJKHCJPGC; // 0xC4
		::System::Int32 HCIFKIKMBAA; // 0xC8
		::System::UInt32 NCJAJNLIIIB; // 0xCC
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::ValueTuple_2<::UnityEngine::Color, ::UnityEngine::Color>>* CGPBKIPMJPL; // 0xD0
		// static const ::System::Object BBJNBAHIDPK; // 0x0
		// static const ::System::String* LPLOCNEGJKG; // 0x0
		// static const ::System::String* LGJNOMEGOHG; // 0x0
		// static const ::System::String* FPJCMLOLPGH; // 0x0
		// static const ::System::String* KFLPMIFBIJA; // 0x0
		// static const ::System::String* DHHHBBGDGIN; // 0x0
		// static const ::System::String* FGJJFDEPHDI; // 0x0
		// static const ::System::String* FHGIABGCOBB; // 0x0
		// static const ::System::String* DPJGINMNAHD; // 0x0
		// static const ::System::String* BKFNPDMBKJN; // 0x0
		// static const ::System::String* GBPJMODHAIP; // 0x0
		// static const ::System::String* PDPKHOGOAHF; // 0x0
		// static const ::System::String* IJCAMCAKCHP; // 0x0
		// static const ::System::Object LOIOMJIIMLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2Int get_PosIndex()
		{
			return ((::UnityEngine::Vector2Int(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_GET_POSINDEX_OFFSET))(this);
		}

		::System::Void set_PosIndex(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SET_POSINDEX_OFFSET))(this, a1);
		}

		::JEANAIHDCAA* get_PieceData()
		{
			return ((::JEANAIHDCAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_GET_PIECEDATA_OFFSET))(this);
		}

		::System::Void set_PieceData(::JEANAIHDCAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEANAIHDCAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SET_PIECEDATA_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_INIT_OFFSET))(this);
		}

		::System::Void SetBoard(::RPG::Client::MatchThreeBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MatchThreeBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETBOARD_OFFSET))(this, a1);
		}

		::System::Void SetSize(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETSIZE_OFFSET))(this, a1);
		}

		::System::Void SetInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void SetHovered(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETHOVERED_OFFSET))(this, a1);
		}

		::System::Void SetSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETSELECTED_OFFSET))(this, a1);
		}

		::System::Void SetupView(::JEANAIHDCAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEANAIHDCAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETUPVIEW_OFFSET))(this, a1);
		}

		::System::Void SetupPieceData(::JEANAIHDCAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEANAIHDCAA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SETUPPIECEDATA_OFFSET))(this, a1);
		}

		::System::Void PlayFadeInAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PLAYFADEINANIM_OFFSET))(this);
		}

		::System::Void PlayBombLoopAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PLAYBOMBLOOPANIM_OFFSET))(this);
		}

		::System::Void MoveImmediately(::UnityEngine::Vector2Int a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MOVEIMMEDIATELY_OFFSET))(this, a1);
		}

		::System::Void MovePath(::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector2Int>*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MOVEPATH_OFFSET))(this, a1, a2);
		}

		::System::Void Matched(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MATCHED_OFFSET))(this, a1, a2);
		}

		::System::Void Shake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SHAKE_OFFSET))(this);
		}

		::System::Void StopShake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_STOPSHAKE_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SPAWNED_OFFSET))(this);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_DESPAWNED_OFFSET))(this);
		}

		::System::Void OnCreate(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONCREATE_OFFSET))(this, a1);
		}

		::System::Void OnDrag(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONDRAG_OFFSET))(this, a1);
		}

		::System::Void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERDOWN_OFFSET))(this, a1);
		}

		::System::Void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERUP_OFFSET))(this, a1);
		}

		::System::Void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTERENTER_OFFSET))(this, a1);
		}

		::System::Void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_ONPOINTEREXIT_OFFSET))(this, a1);
		}

		::System::Void SwitchTo(::UnityEngine::Vector2Int a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2Int, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_SWITCHTO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 NEBGEBBIJAD(::UnityEngine::Vector2Int a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_NEBGEBBIJAD_OFFSET))(this, a1);
		}

		::System::Single BFKKEECJJAK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_BFKKEECJJAK_OFFSET))(this);
		}

		::System::Single MCHBCDCEDCM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MCHBCDCEDCM_OFFSET))(this);
		}

		::System::String* CDMNGEGKKDK(::System::UInt32 a1, ::RPG::GameCore::Match3::BombType a2, ::RPG::GameCore::Match3::PieceTag a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::Match3::BombType, ::RPG::GameCore::Match3::PieceTag))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_CDMNGEGKKDK_OFFSET))(this, a1, a2, a3);
		}

		::MOGBNBGMIHF* FBGMOKEMCPG(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Single a3)
		{
			return ((::MOGBNBGMIHF*(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_FBGMOKEMCPG_OFFSET))(this, a1, a2, a3);
		}

		::MOGBNBGMIHF* HODBMFHDEIG(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2, ::System::Single a3)
		{
			return ((::MOGBNBGMIHF*(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_HODBMFHDEIG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HKCKAEICPBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_HKCKAEICPBE_OFFSET))(this);
		}

		::System::Void EMOGHDHGHDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_EMOGHDHGHDH_OFFSET))(this);
		}

		::System::Boolean MANLJLCPHIA(::RPG::GameCore::Match3::BombType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::Match3::BombType))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_MANLJLCPHIA_OFFSET))(this, a1);
		}

		::System::Void OIGKAPKPJKE(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_OIGKAPKPJKE_OFFSET))(this, a1);
		}

		::System::Void PPCNACEIHLM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PPCNACEIHLM_OFFSET))(this);
		}

		::System::Void JPEFEOAKLCO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_JPEFEOAKLCO_OFFSET))(this);
		}

		::System::Void PENNHJNNPFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PENNHJNNPFJ_OFFSET))(this);
		}

		::System::Boolean DPFONMCODKI(::UnityEngine::Vector2Int a1, ::UnityEngine::Vector2Int a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2Int, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_DPFONMCODKI_OFFSET))(this, a1, a2);
		}

		::System::Single BMKNENLDFIA(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_BMKNENLDFIA_OFFSET))(this, a1, a2);
		}

		::System::Single DKGDEOLHNOH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_DKGDEOLHNOH_OFFSET))(this, a1);
		}

		::System::Single PBIHIBPFPHF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_PBIHIBPFPHF_OFFSET))(this);
		}

		::System::Single AAFDLGGFLDE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_AAFDLGGFLDE_OFFSET))(this);
		}

		::System::Void GNGOBDNNOHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_GNGOBDNNOHH_OFFSET))(this);
		}

		::System::Void GIKGKFFKGHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MATCHTHREEPIECE_GIKGKFFKGHM_OFFSET))(this);
		}

	};
}
