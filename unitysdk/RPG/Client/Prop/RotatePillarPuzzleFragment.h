#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/System/Nullable_1.h"
namespace RPG::Client::Prop { class RotatePillarPuzzleFragment; }
namespace RPG::Client::Prop { class RotatePillarPuzzleFragmentData; }
namespace RPG::Client::Prop { class RotatePillarPuzzleFragmentMono; }
namespace RPG::Client::Prop { class RotatePillarPuzzlePillar; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_ACDDMODKLBJ_OFFSET UNITYSDK_OFFSET(0xDD97E00)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_BGJENOCGHFF_OFFSET UNITYSDK_OFFSET(0xDD973C0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_CCTOR_OFFSET UNITYSDK_OFFSET(0xDD98A60)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xDD95B50)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_CLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xDD98A10)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_COUNTERCLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xDD98A00)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISCOMPLETE_OFFSET UNITYSDK_OFFSET(0xDD97B90)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISMAINROTATE_OFFSET UNITYSDK_OFFSET(0xDD98960)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISROTATE_OFFSET UNITYSDK_OFFSET(0xDD98950)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT0_OFFSET UNITYSDK_OFFSET(0xDD98A20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT1_OFFSET UNITYSDK_OFFSET(0xDD98A30)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT2_OFFSET UNITYSDK_OFFSET(0xDD98A40)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT3_OFFSET UNITYSDK_OFFSET(0xDD98A50)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0xDD98810)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_HKGODOGHHFI_OFFSET UNITYSDK_OFFSET(0xDD96AE0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_IEBCOMLKLEJ_OFFSET UNITYSDK_OFFSET(0xDD96BD0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_JFKCECJKHNB_OFFSET UNITYSDK_OFFSET(0xDD98540)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_LAPJCIBMPIH_OFFSET UNITYSDK_OFFSET(0xDD96C20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_LKODPOPDGDO_OFFSET UNITYSDK_OFFSET(0xDD95B70)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MEJPCDCODCM_OFFSET UNITYSDK_OFFSET(0xDD967B0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MIDKKNAGOFA_OFFSET UNITYSDK_OFFSET(0xDD97FF0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MKAFMHGLAHK_OFFSET UNITYSDK_OFFSET(0xDD97C20)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MKIIOCKCCBM_OFFSET UNITYSDK_OFFSET(0xDD977D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_ODPIJBFAJAA_OFFSET UNITYSDK_OFFSET(0xDD985E0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_PKMHPFPGCJE_OFFSET UNITYSDK_OFFSET(0xDD98970)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_CLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xDD96080)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_COUNTERCLOCKWISELIGHT_OFFSET UNITYSDK_OFFSET(0xDD95F10)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT0_OFFSET UNITYSDK_OFFSET(0xDD961F0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT1_OFFSET UNITYSDK_OFFSET(0xDD96360)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT2_OFFSET UNITYSDK_OFFSET(0xDD964D0)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT3_OFFSET UNITYSDK_OFFSET(0xDD96640)
#define RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__ONROTATEFINISH_B__13_0_OFFSET UNITYSDK_OFFSET(0xDD98B90)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RotatePillarPuzzleFragment_TypeDefinitionIndex = 78806;

	class RotatePillarPuzzleFragment : public ::System::Object
	{
	public:
		::RPG::Client::Prop::RotatePillarPuzzleFragmentData* Data; // 0x10
		::UnityEngine::Vector3 RotateDirection; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* _Obj; // 0x28
		::RPG::Client::Prop::RotatePillarPuzzleFragmentMono* _FragmentMono; // 0x30
		::System::String* CompleteTriggerCustomString; // 0x38
		::System::Boolean light0; // 0x40
		::System::Boolean light1; // 0x41
		::System::Boolean light2; // 0x42
		::System::Boolean light3; // 0x43
		::System::Boolean light4; // 0x44
		::System::Boolean light5; // 0x45
		::System::Byte _padding1[0x2];
		::System::Int32 _NowDegree; // 0x48
		::System::Boolean _IsRotate; // 0x4C
		::System::Boolean _IsMainRotate; // 0x4D
		::System::Boolean _IsComplete; // 0x4E
		::System::Byte _padding2[0x1];
		::System::Action_3<::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean>* _RotateFinishCallback; // 0x50
		::RPG::GameCore::GameEntity* _Owner; // 0x58
		::RPG::Client::Prop::RotatePillarPuzzlePillar* _OwnerPillar; // 0x60
		::System::Int32 _UniqueID; // 0x68
		::System::Byte _padding3[0x4];
		::UnityEngine::Animator* _Animator; // 0x70
		::System::Collections::Generic::List_1<::System::String*>* _ChildFrag; // 0x78
		::System::String* _ParentFrag; // 0x80
		::System::Collections::IEnumerator* _DelaySelect; // 0x88
		::System::Boolean _HideInteractive; // 0x90
		::System::Byte _padding4[0x3];
		::System::UInt32 _BlockHandler; // 0x94
		::System::Int32 serial_id; // 0x98
		static ::System::String** StaticGet__ChangeToNotCompleteSound()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RotatePillarPuzzleFragment")->GetStaticField(0x5C830);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_StartRotateSound()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client.Prop", "RotatePillarPuzzleFragment")->GetStaticField(0x5C838);
		}

		static ::System::String** StaticGet__ChangeToCompleteSound()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client.Prop", "RotatePillarPuzzleFragment")->GetStaticField(0x5C840);
		}

		static ::Il2CppArray<::System::String*>** StaticGet_StopRotateSound()
		{
			return (::Il2CppArray<::System::String*>**)UnitySDK::FromName("RPG.Client.Prop", "RotatePillarPuzzleFragment")->GetStaticField(0x5C848);
		}

		static ::System::Int32* StaticGet__UniqueIDCnt()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client.Prop", "RotatePillarPuzzleFragment")->GetStaticField(0x14090);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_CCTOR_OFFSET))();
		}

		::System::Void LKODPOPDGDO(::RPG::Client::Prop::RotatePillarPuzzlePillar* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::Client::Prop::RotatePillarPuzzleFragmentData* a3, ::System::Action_3<::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::RotatePillarPuzzlePillar*, ::RPG::GameCore::GameEntity*, ::RPG::Client::Prop::RotatePillarPuzzleFragmentData*, ::System::Action_3<::RPG::Client::Prop::RotatePillarPuzzleFragment*, ::System::Boolean, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_LKODPOPDGDO_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void HKGODOGHHFI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_HKGODOGHHFI_OFFSET))(this, a1);
		}

		::System::Void IEBCOMLKLEJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_IEBCOMLKLEJ_OFFSET))(this, a1);
		}

		::System::Void LAPJCIBMPIH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_LAPJCIBMPIH_OFFSET))(this, a1);
		}

		::System::Boolean MKIIOCKCCBM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MKIIOCKCCBM_OFFSET))(this);
		}

		::System::Void MKAFMHGLAHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MKAFMHGLAHK_OFFSET))(this);
		}

		::System::Void ACDDMODKLBJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_ACDDMODKLBJ_OFFSET))(this, a1);
		}

		::System::Void MIDKKNAGOFA(::System::Boolean a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MIDKKNAGOFA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ODPIJBFAJAA(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_ODPIJBFAJAA_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_HADOHLNHHGB_OFFSET))(this);
		}

		::System::Collections::IEnumerator* JFKCECJKHNB(::System::Boolean a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Boolean, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_JFKCECJKHNB_OFFSET))(this, a1, a2, a3);
		}

		::System::Collections::IEnumerator* BGJENOCGHFF(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Nullable_1<::System::Single> a4, ::System::Boolean a5)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Nullable_1<::System::Single>, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_BGJENOCGHFF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void MEJPCDCODCM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_MEJPCDCODCM_OFFSET))(this, a1);
		}

		::System::Boolean get_IsComplete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISCOMPLETE_OFFSET))(this);
		}

		::System::Boolean get_IsRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISROTATE_OFFSET))(this);
		}

		::System::Boolean get_IsMainRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_ISMAINROTATE_OFFSET))(this);
		}

		::System::Void PKMHPFPGCJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_PKMHPFPGCJE_OFFSET))(this);
		}

		::System::Boolean get_CounterClockwiseLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_COUNTERCLOCKWISELIGHT_OFFSET))(this);
		}

		::System::Void set_CounterClockwiseLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_COUNTERCLOCKWISELIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_ClockwiseLight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_CLOCKWISELIGHT_OFFSET))(this);
		}

		::System::Void set_ClockwiseLight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_CLOCKWISELIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_Light0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT0_OFFSET))(this);
		}

		::System::Void set_Light0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT0_OFFSET))(this, a1);
		}

		::System::Boolean get_Light1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT1_OFFSET))(this);
		}

		::System::Void set_Light1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT1_OFFSET))(this, a1);
		}

		::System::Boolean get_Light2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT2_OFFSET))(this);
		}

		::System::Void set_Light2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT2_OFFSET))(this, a1);
		}

		::System::Boolean get_Light3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_GET_LIGHT3_OFFSET))(this);
		}

		::System::Void set_Light3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT_SET_LIGHT3_OFFSET))(this, a1);
		}

		::System::Void _OnRotateFinish_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_ROTATEPILLARPUZZLEFRAGMENT__ONROTATEFINISH_B__13_0_OFFSET))(this);
		}

	};
}
