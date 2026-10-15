#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class FABRIK; }
namespace RPG::Client { class LookAtIK; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define BABYHIPPLENCONTROLLER_AWAKE_OFFSET UNITYSDK_OFFSET(0xC1B0AE0)
#define BABYHIPPLENCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xC1B31C0)
#define BABYHIPPLENCONTROLLER_DOAIADLNJFE_OFFSET UNITYSDK_OFFSET(0xC1B1A90)
#define BABYHIPPLENCONTROLLER_ENABLENECKIK_OFFSET UNITYSDK_OFFSET(0xC1B0A90)
#define BABYHIPPLENCONTROLLER_FDHNENGOLKK_OFFSET UNITYSDK_OFFSET(0xC1B08B0)
#define BABYHIPPLENCONTROLLER_FEFBNIIHCGJ_OFFSET UNITYSDK_OFFSET(0xC1B09D0)
#define BABYHIPPLENCONTROLLER_GETHEADTRANS_OFFSET UNITYSDK_OFFSET(0xC1B0580)
#define BABYHIPPLENCONTROLLER_JKBGMGMKGFM_OFFSET UNITYSDK_OFFSET(0xC1B0930)
#define BABYHIPPLENCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xC1B0DF0)
#define BABYHIPPLENCONTROLLER_NNEGLKFCMNE_OFFSET UNITYSDK_OFFSET(0xC1B2BE0)
#define BABYHIPPLENCONTROLLER_OBBDHDHNMJD_OFFSET UNITYSDK_OFFSET(0xC1B0F20)
#define BABYHIPPLENCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0xC1B2CB0)
#define BABYHIPPLENCONTROLLER_PJMIIFNBCAJ_OFFSET UNITYSDK_OFFSET(0xC1B2820)
#define BABYHIPPLENCONTROLLER_PLAYANIMSEQ_OFFSET UNITYSDK_OFFSET(0xC1B06E0)
#define BABYHIPPLENCONTROLLER_PNJNDJJCBFA_OFFSET UNITYSDK_OFFSET(0xC1B0EB0)
#define BABYHIPPLENCONTROLLER_RISEHEADFORSECONDS_OFFSET UNITYSDK_OFFSET(0xC1B0640)
#define BABYHIPPLENCONTROLLER_SETATTENTIONTRANS_OFFSET UNITYSDK_OFFSET(0xC1B05C0)
#define BABYHIPPLENCONTROLLER_STARTPETTING_OFFSET UNITYSDK_OFFSET(0xC1B2DA0)
#define BABYHIPPLENCONTROLLER_START_OFFSET UNITYSDK_OFFSET(0xC1B0BC0)
#define BABYHIPPLENCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xC1B0D20)

	class BabyHipplenController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* AttentionTrans; // 0x18
		::UnityEngine::Transform* MoveTrans; // 0x20
		::UnityEngine::Transform* LookAtTrans; // 0x28
		::UnityEngine::Transform* LookAtTargetTransform; // 0x30
		::UnityEngine::Transform* NeckIKTargetTrans; // 0x38
		::UnityEngine::Transform* NeckIKTargetTransDefault; // 0x40
		::UnityEngine::Transform* RiseHeadTrans; // 0x48
		::UnityEngine::Transform* ArtTrans; // 0x50
		::UnityEngine::Transform* HeadTrans; // 0x58
		::UnityEngine::Transform* NeckRootTrans; // 0x60
		::RPG::Client::FABRIK* NeckIK; // 0x68
		::RPG::Client::LookAtIK* LookAtIK; // 0x70
		::System::Single lookAtLerpSpd; // 0x78
		::System::Single lookAtPointDist; // 0x7C
		::System::Boolean NeckIKEnabled; // 0x80
		::System::Byte _padding0[0x3];
		::System::Single neckAngleRestraint; // 0x84
		::UnityEngine::Vector2 neckDeltaHeightRangeSmall; // 0x88
		::UnityEngine::Vector2 neckDeltaHeightRangeBig; // 0x90
		::System::Single neckIKLerpSpd; // 0x98
		::System::Single minNeckDist; // 0x9C
		::System::Single maxNeckDist; // 0xA0
		::System::Boolean isMoveEnabled; // 0xA4
		::System::Boolean isRun; // 0xA5
		::System::Byte _padding1[0x2];
		::System::Single moveSpdMax; // 0xA8
		::System::Single runSpdMult; // 0xAC
		::System::Single moveAcc; // 0xB0
		::System::Single steerSpdMax; // 0xB4
		::System::Single steerAcc; // 0xB8
		::System::Byte _padding2[0x4];
		::UnityEngine::Transform* BIABGGPFEBH; // 0xC0
		::UnityEngine::Transform* LCJODBLMEOG; // 0xC8
		::UnityEngine::Animator* DGOLMMAONAI; // 0xD0
		::UnityEngine::Transform* CCKNADPGAEM; // 0xD8
		::System::Single LCCCAFILOBI; // 0xE0
		::UnityEngine::Vector2 AAOMOCADIHD; // 0xE4
		::System::Single ACPEGNAPPNL; // 0xEC
		::System::Single CDEOPAHKDLL; // 0xF0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetHeadTrans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_GETHEADTRANS_OFFSET))(this);
		}

		::System::Void SetAttentionTrans(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2, ::UnityEngine::Transform* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_SETATTENTIONTRANS_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* RiseHeadForSeconds(::System::Single a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_RISEHEADFORSECONDS_OFFSET))(this, a1);
		}

		::System::Void PlayAnimSeq(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_PLAYANIMSEQ_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* FDHNENGOLKK()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_FDHNENGOLKK_OFFSET))(this);
		}

		::System::Collections::IEnumerator* JKBGMGMKGFM()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_JKBGMGMKGFM_OFFSET))(this);
		}

		::System::Collections::IEnumerator* FEFBNIIHCGJ(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_FEFBNIIHCGJ_OFFSET))(this, a1, a2);
		}

		::System::Void EnableNeckIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_ENABLENECKIK_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void PNJNDJJCBFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_PNJNDJJCBFA_OFFSET))(this);
		}

		::System::Void PJMIIFNBCAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_PJMIIFNBCAJ_OFFSET))(this);
		}

		::System::Void OBBDHDHNMJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_OBBDHDHNMJD_OFFSET))(this);
		}

		::System::Void DOAIADLNJFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_DOAIADLNJFE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

		::System::Single NNEGLKFCMNE(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_NNEGLKFCMNE_OFFSET))(this, a1, a2);
		}

		::System::Void StartPetting(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + BABYHIPPLENCONTROLLER_STARTPETTING_OFFSET))(this, a1, a2);
		}

	};
