#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/StateMachineBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STATERUNBLENDTREE_BBNJEHOMCED_OFFSET UNITYSDK_OFFSET(0xE130EC0)
#define RPG_CLIENT_STATERUNBLENDTREE_CDEDILIBHDM_OFFSET UNITYSDK_OFFSET(0xE132340)
#define RPG_CLIENT_STATERUNBLENDTREE_CHKHGHDDFOM_OFFSET UNITYSDK_OFFSET(0xE130030)
#define RPG_CLIENT_STATERUNBLENDTREE_CTOR_OFFSET UNITYSDK_OFFSET(0xE1325D0)
#define RPG_CLIENT_STATERUNBLENDTREE_EIINHODAMMM_OFFSET UNITYSDK_OFFSET(0xE131700)
#define RPG_CLIENT_STATERUNBLENDTREE_HNPFKDENCPL_OFFSET UNITYSDK_OFFSET(0xE131000)
#define RPG_CLIENT_STATERUNBLENDTREE_IMOGHEFIEBG_OFFSET UNITYSDK_OFFSET(0xE131150)
#define RPG_CLIENT_STATERUNBLENDTREE_KBGMNFBPOAI_OFFSET UNITYSDK_OFFSET(0xE131940)
#define RPG_CLIENT_STATERUNBLENDTREE_KMLPAKJOHGE_OFFSET UNITYSDK_OFFSET(0xE131E60)
#define RPG_CLIENT_STATERUNBLENDTREE_KPNKOABCAPB_OFFSET UNITYSDK_OFFSET(0xE131BB0)
#define RPG_CLIENT_STATERUNBLENDTREE_LOGNBHIGHIB_OFFSET UNITYSDK_OFFSET(0xE130B40)
#define RPG_CLIENT_STATERUNBLENDTREE_MPLPCDODCKA_OFFSET UNITYSDK_OFFSET(0xE132530)
#define RPG_CLIENT_STATERUNBLENDTREE_NGJFNKPKJMO_OFFSET UNITYSDK_OFFSET(0xE130A90)
#define RPG_CLIENT_STATERUNBLENDTREE_NPDLBFFOLHB_OFFSET UNITYSDK_OFFSET(0xE130750)
#define RPG_CLIENT_STATERUNBLENDTREE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE12FFC0)
#define RPG_CLIENT_STATERUNBLENDTREE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE12FF60)
#define RPG_CLIENT_STATERUNBLENDTREE_ONSTATEENTER_OFFSET UNITYSDK_OFFSET(0xE130340)
#define RPG_CLIENT_STATERUNBLENDTREE_ONSTATEEXIT_OFFSET UNITYSDK_OFFSET(0xE131FB0)
#define RPG_CLIENT_STATERUNBLENDTREE_ONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE1312C0)
#define RPG_CLIENT_STATERUNBLENDTREE_PDNMPCIAFIJ_OFFSET UNITYSDK_OFFSET(0xE1321C0)
#define RPG_CLIENT_STATERUNBLENDTREE_PLJCDHFKOEH_OFFSET UNITYSDK_OFFSET(0xE130C90)
#define RPG_CLIENT_STATERUNBLENDTREE_PPOAAAJLNCN_OFFSET UNITYSDK_OFFSET(0xE130D30)

namespace RPG::Client
{
	inline static constexpr unsigned int StateRunBlendTree_TypeDefinitionIndex = 68842;

	class StateRunBlendTree : public ::UnityEngine::StateMachineBehaviour
	{
	public:
		::System::Single runGaitLerpTime; // 0x18
		::System::Single walkGaitLerpTime; // 0x1C
		::Il2CppArray<::System::String*>* walkStateNames; // 0x20
		::Il2CppArray<::System::String*>* runStateNames; // 0x28
		::Il2CppArray<::System::String*>* fastRunStateNames; // 0x30
		::Il2CppArray<::System::String*>* toFastRunStateNames; // 0x38
		::Il2CppArray<::UnityEngine::Vector2>* walkKeepRanges; // 0x40
		::Il2CppArray<::UnityEngine::Vector2>* runKeepRanges; // 0x48
		::Il2CppArray<::UnityEngine::Vector2>* fastRunKeepRanges; // 0x50
		::System::Single enterFastRunGaitLimit; // 0x58
		::System::Byte _padding0[0x4];
		::System::String* onEnteredFastRunEvent; // 0x60
		::System::String* onEnteredRunEvent; // 0x68
		::System::Boolean useRunForwardTime; // 0x70
		::System::Byte _padding1[0x7];
		::UnityEngine::AnimationCurve* leftFootUpStairWeightCurve; // 0x78
		::UnityEngine::AnimationCurve* rightFootUpStairWeightCurve; // 0x80
		::RPG::GameCore::CharacterMotionFlag _MotionFlag; // 0x88
		::System::Single _lastRunGaitValue; // 0x8C
		::System::Single _lastRunTargetGaitValue; // 0x90
		::System::Byte _padding2[0x4];
		::Il2CppArray<::System::Int32>* _walkStateNameHashes; // 0x98
		::Il2CppArray<::System::Int32>* _runStateNameHashes; // 0xA0
		::Il2CppArray<::System::Int32>* _fastRunStateNameHashes; // 0xA8
		::Il2CppArray<::System::Int32>* _toFastRunStateNameHashes; // 0xB0
		::System::Int32 _lastStateNameHash; // 0xB8
		::System::Byte _padding3[0x4];
		::UnityEngine::GameObject* _gameObject; // 0xC0
		::System::Nullable_1<::System::Single> _rtpcValue; // 0xC8
		::System::Nullable_1<::System::Boolean> _sendRTPC; // 0xD0
		::System::Collections::Generic::List_1<::System::Object*>* _poseLerpDatas; // 0xD8
		// static const ::System::Object RUN_FORWARD_LIMIT_ANGLE; // 0x0
		// static const ::System::String* MOTION_GATE_RTPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONDISABLE_OFFSET))(this);
		}

		::System::Void CHKHGHDDFOM(::System::String* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CHKHGHDDFOM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnStateEnter(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONSTATEENTER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateUpdate(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONSTATEUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnStateExit(::UnityEngine::Animator* a1, ::UnityEngine::AnimatorStateInfo a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::AnimatorStateInfo, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_ONSTATEEXIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LOGNBHIGHIB(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_LOGNBHIGHIB_OFFSET))(this, a1);
		}

		::System::Void KPNKOABCAPB(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_KPNKOABCAPB_OFFSET))(this, a1, a2);
		}

		::System::Void PPOAAAJLNCN(::UnityEngine::Animator* a1, ::System::Single a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_PPOAAAJLNCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NGJFNKPKJMO(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_NGJFNKPKJMO_OFFSET))(this, a1, a2);
		}

		::System::Void EIINHODAMMM(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_EIINHODAMMM_OFFSET))(this, a1, a2);
		}

		::System::Void BBNJEHOMCED(::UnityEngine::Animator* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_BBNJEHOMCED_OFFSET))(this, a1);
		}

		::System::Void NPDLBFFOLHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_NPDLBFFOLHB_OFFSET))(this);
		}

		::System::Single HNPFKDENCPL(::UnityEngine::Animator* a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_HNPFKDENCPL_OFFSET))(this, a1, a2);
		}

		::System::Void KBGMNFBPOAI(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_KBGMNFBPOAI_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean MPLPCDODCKA(::Il2CppArray<::UnityEngine::Vector2>* a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_MPLPCDODCKA_OFFSET))(a1, a2);
		}

		::System::Single PLJCDHFKOEH(::UnityEngine::Animator* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_PLJCDHFKOEH_OFFSET))(this, a1);
		}

		::RPG::GameCore::CharacterMotionFlag IMOGHEFIEBG(::UnityEngine::Animator* a1, ::System::Single a2)
		{
			return ((::RPG::GameCore::CharacterMotionFlag(*)(::PVOID, ::UnityEngine::Animator*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_IMOGHEFIEBG_OFFSET))(this, a1, a2);
		}

		::System::Single KMLPAKJOHGE(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_KMLPAKJOHGE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean PDNMPCIAFIJ(::UnityEngine::Animator* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_PDNMPCIAFIJ_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* CDEDILIBHDM(::UnityEngine::Animator* a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Animator*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATERUNBLENDTREE_CDEDILIBHDM_OFFSET))(this, a1);
		}

	};
}
