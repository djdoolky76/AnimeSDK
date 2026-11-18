#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeVariable_1.h"
#include "unitysdk/HPDPDGOMKFF.h"
#include "unitysdk/PMBCHGNJMKF.h"
#include "unitysdk/PipelineCamera/Optional_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationLayerMixerPlayable.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Animations/PropertyStreamHandle.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace Foundation { class NativeMemory; }
namespace MoleMole::Photo { class PlayableUnitBlendShapeConfig; }
namespace MoleMole::Photo { class Skeleton; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class AvatarMask; }

#define KAMGGOJKJCM_BKKKLJDAOHP_OFFSET UNITYSDK_OFFSET(0x12974390)
#define KAMGGOJKJCM_CCHPKBBMOEB_OFFSET UNITYSDK_OFFSET(0x12974140)
#define KAMGGOJKJCM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12973F00)
#define KAMGGOJKJCM_DMKOAIOCHLO_OFFSET UNITYSDK_OFFSET(0x12974130)
#define KAMGGOJKJCM_IOKHLKHAOJF_OFFSET UNITYSDK_OFFSET(0x12974150)
#define KAMGGOJKJCM_JGENCIAJAND_OFFSET UNITYSDK_OFFSET(0x129744A0)
#define KAMGGOJKJCM_JMBCGNNCDGD_OFFSET UNITYSDK_OFFSET(0x12974270)
#define KAMGGOJKJCM_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x12974490)
#define KAMGGOJKJCM_PLAANJLKADF_OFFSET UNITYSDK_OFFSET(0x129748F0)
#define KAMGGOJKJCM__CTOR_OFFSET UNITYSDK_OFFSET(0x12973610)

inline static constexpr unsigned int KAMGGOJKJCM_TypeDefinitionIndex = 77485;

class KAMGGOJKJCM : public ::System::Object
{
public:
	// static const ::System::Int32 LDKBLOLCGHA = 0x1; // 0x0
	::UnityEngine::Animator* FPGIEMNHLEF; // 0x10
	::Foundation::NativeMemory* JGNNPBEEHPP; // 0x18
	::UnityEngine::AvatarMask* DBPGPJFBEJF; // 0x20
	::MoleMole::Photo::Skeleton* AGNPPGPGGPP; // 0x28
	::UnityEngine::Animations::AnimationLayerMixerPlayable KIDGHPDOPDI; // 0x30
	::UnityEngine::Playables::PlayableGraph CDAANDKNPIG; // 0x40
	::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::HPDPDGOMKFF>> LBLDJIPHIAK; // 0x50
	::System::Byte _padding0[0x8];
	::PMBCHGNJMKF DAAAEJDBNFI; // 0x60
	::UnityEngine::Animations::AnimationScriptPlayable MPMLNJGIIAI; // 0xF0

	::System::Void _ctor(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::Animator* ICAAMDMMDDJ, ::PMBCHGNJMKF AAOCANGHBDG, ::MoleMole::Photo::PlayableUnitBlendShapeConfig* DFMKILICPFB, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle> ELPACEKKACB, ::Foundation::NativeVariableArray_1<::System::Single> HNGKKJODNNK, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::HPDPDGOMKFF>> FIJBHPMBNHF, ::Foundation::NativeVariableArray_1<::System::Single> JCINGAEGLDN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::PMBCHGNJMKF, ::MoleMole::Photo::PlayableUnitBlendShapeConfig*, ::Foundation::NativeVariableArray_1<::UnityEngine::Animations::PropertyStreamHandle>, ::Foundation::NativeVariableArray_1<::System::Single>, ::Foundation::NativeVariable_1<::PipelineCamera::Optional_1<::HPDPDGOMKFF>>, ::Foundation::NativeVariableArray_1<::System::Single>))((::PBYTE)hIl2Cpp + KAMGGOJKJCM__CTOR_OFFSET))(this, MHPNGBGGMMN, ICAAMDMMDDJ, AAOCANGHBDG, DFMKILICPFB, ELPACEKKACB, HNGKKJODNNK, FIJBHPMBNHF, JCINGAEGLDN);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_DISPOSE_OFFSET))(this);
	}

	::System::Int32 DMKOAIOCHLO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_DMKOAIOCHLO_OFFSET))(this);
	}

	::System::Int32 CCHPKBBMOEB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_CCHPKBBMOEB_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> IOKHLKHAOJF(::System::Int32 ENJCPELCNKI)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_IOKHLKHAOJF_OFFSET))(this, ENJCPELCNKI);
	}

	::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32> JMBCGNNCDGD(::System::Int32 LOLNDLEGMPO)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Playables::Playable, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_JMBCGNNCDGD_OFFSET))(this, LOLNDLEGMPO);
	}

	::System::Boolean BKKKLJDAOHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_BKKKLJDAOHP_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_PGHAJOMNDDJ_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Void JGENCIAJAND(::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_JGENCIAJAND_OFFSET))(this, MDPPNMIPDMP);
	}

	::System::Void PLAANJLKADF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAMGGOJKJCM_PLAANJLKADF_OFFSET))(this);
	}
};
