#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FGOAKLAGGOO.h"
#include "unitysdk/NMHCKJOBLBP.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole::Timeline { class LookAtIKConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define JIJFLKBAMIL_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1528DFD0)
#define JIJFLKBAMIL_KBKDOGIKMGN_OFFSET UNITYSDK_OFFSET(0x1528DFE0)
#define JIJFLKBAMIL_MBMACJAKEDD_OFFSET UNITYSDK_OFFSET(0x1528DC20)
#define JIJFLKBAMIL_NDHLFHAPIPC_OFFSET UNITYSDK_OFFSET(0x1528DF70)
#define JIJFLKBAMIL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1528D720)
#define JIJFLKBAMIL_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1528DFC0)
#define JIJFLKBAMIL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1528C910)
#define JIJFLKBAMIL__CTOR_OFFSET UNITYSDK_OFFSET(0x1528DF60)

inline static constexpr unsigned int JIJFLKBAMIL_TypeDefinitionIndex = 66824;

class JIJFLKBAMIL : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::UnityEngine::Playables::PlayableDirector* GALAOBFOBFA; // 0x10
	::System::Action_1<::System::Single>* KNNINIMAKHF; // 0x18
	::Il2CppArray<::System::String*>* BOOBKMPELKK; // 0x20
	::UnityEngine::Transform* HODAIDNDKHD; // 0x28
	::Il2CppArray<::System::String*>* FDIDPNALJJA; // 0x30
	::MoleMole::Timeline::LookAtIKConfig* EOBJDALEFLK; // 0x38
	::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* ALFCADNJAAB; // 0x40
	::Il2CppArray<::UnityEngine::Transform*>* LBEPLOGEJFJ; // 0x48
	::UnityEngine::AnimationClip* JFFPOMFMNMO; // 0x50
	::Unity::Collections::NativeArray_1<::NMHCKJOBLBP> OJNGPCMGAKI; // 0x58
	::System::Byte _padding0[0x8];
	::System::Boolean GNBPNBCHJOP; // 0x68
	::System::Byte _padding1[0x7];
	::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> FCOCEPIDFGI; // 0x70
	::System::Byte _padding2[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> OMLKCGNJGNL; // 0x80
	::System::Byte _padding3[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> LMOLKNKOMJC; // 0x90
	::System::Byte _padding4[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> AGNOHGNJGHF; // 0xA0
	::System::Byte _padding5[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle> IJPDDEDIOLP; // 0xB0
	::System::Byte _padding6[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformSceneHandle> MHIJLNPPDAC; // 0xC0
	::System::Byte _padding7[0x8];
	::Unity::Collections::NativeArray_1<::System::Boolean> CMMEFPLPFKE; // 0xD0
	::System::Byte _padding8[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> CNPPGCCOIGI; // 0xE0
	::System::Byte _padding9[0x8];
	::Unity::Collections::NativeArray_1<::System::Single> EMECLHNCIMP; // 0xF0
	::System::Byte _padding10[0x8];
	::Unity::Collections::NativeArray_1<::System::Single> NJNHGNFICKL; // 0x100
	::System::Byte _padding11[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> GHMDHGDKOAA; // 0x110
	::System::Byte _padding12[0x8];
	::Unity::Collections::NativeArray_1<::UnityEngine::Quaternion> FPEGIOMNIOE; // 0x120
	::System::Byte _padding13[0x8];
	::Unity::Collections::NativeArray_1<::System::Single> JLENAJOAANA; // 0x130
	::System::Byte _padding14[0x8];
	::Unity::Collections::NativeArray_1<::System::Single> GGPMNMPFHLM; // 0x140
	::System::Byte _padding15[0x8];
	::UnityEngine::Animations::AnimationScriptPlayable NAIJFAJKECG; // 0x150
	::Unity::Collections::NativeArray_1<::FGOAKLAGGOO> ILOCJPOFLDD; // 0x160
	::System::Byte _padding16[0x8];
	::Unity::Collections::NativeArray_1<::System::Boolean> BPEOIHOMLGH; // 0x170

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJFLKBAMIL__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void NDHLFHAPIPC(::UnityEngine::Playables::PlayableDirector* JONDBBDJDGD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_NDHLFHAPIPC_OFFSET))(this, JONDBBDJDGD);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void MBMACJAKEDD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_MBMACJAKEDD_OFFSET))(this);
	}

	::System::Void KBKDOGIKMGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIJFLKBAMIL_KBKDOGIKMGN_OFFSET))(this);
	}
};
