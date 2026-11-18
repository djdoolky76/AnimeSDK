#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class HMMIIBDGKFL_PNMFANLHFBL;
namespace MoleMole::Cameras { class AnimationVirtualCamera; }
namespace System { class Object; }

#define HMMIIBDGKFL_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16CFE290)
#define HMMIIBDGKFL_OIJGAOIHCMN_OFFSET UNITYSDK_OFFSET(0x16CFE150)
#define HMMIIBDGKFL_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16CFD010)
#define HMMIIBDGKFL_PALLNLODODO_OFFSET UNITYSDK_OFFSET(0x16CFE2A0)
#define HMMIIBDGKFL_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16CFE280)
#define HMMIIBDGKFL_PREPAREFRAME_OFFSET UNITYSDK_OFFSET(0x16CFD060)
#define HMMIIBDGKFL_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16CFD0E0)
#define HMMIIBDGKFL__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFE270)

inline static constexpr unsigned int HMMIIBDGKFL_TypeDefinitionIndex = 50274;

class HMMIIBDGKFL : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::HMMIIBDGKFL_PNMFANLHFBL** StaticGet_LKECLGGPKKF()
	{
		return (::HMMIIBDGKFL_PNMFANLHFBL**)Il2CppClass::FromTypeDefinitionIndex(HMMIIBDGKFL_TypeDefinitionIndex)->GetStaticField(0x53120);
	}
	::MoleMole::Cameras::AnimationVirtualCamera* KBDJAECOBJL; // 0x10
	::System::Boolean NEMNEFNNAHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMIIBDGKFL__CTOR_OFFSET))(this);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void PrepareFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PREPAREFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void PALLNLODODO(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_PALLNLODODO_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Single OIJGAOIHCMN(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMMIIBDGKFL_OIJGAOIHCMN_OFFSET))(this, PMNLNNGEIFM);
	}
};
