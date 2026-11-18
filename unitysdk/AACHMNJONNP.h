#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

class AACHMNJONNP_KLLGNFPBMAF;
namespace System { class Object; }
namespace System { class String; }

#define AACHMNJONNP_AGDAOJOPLEF_OFFSET UNITYSDK_OFFSET(0x154C1870)
#define AACHMNJONNP_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x154C1AC0)
#define AACHMNJONNP_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x154C17D0)
#define AACHMNJONNP_LMGCBKENOPJ_OFFSET UNITYSDK_OFFSET(0x154C1AD0)
#define AACHMNJONNP_MOONNIIOGKP_OFFSET UNITYSDK_OFFSET(0x154C1AB0)
#define AACHMNJONNP_ONGRAPHSTART_OFFSET UNITYSDK_OFFSET(0x154C1950)
#define AACHMNJONNP_ONGRAPHSTOP_OFFSET UNITYSDK_OFFSET(0x154C19E0)
#define AACHMNJONNP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x154C0C60)
#define AACHMNJONNP__CTOR_OFFSET UNITYSDK_OFFSET(0x154C1A50)

inline static constexpr unsigned int AACHMNJONNP_TypeDefinitionIndex = 74673;

class AACHMNJONNP : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	::Il2CppArray<::System::String*>* PHKJJEPPCDK; // 0x10
	::AACHMNJONNP_KLLGNFPBMAF* JDKMECAHILE; // 0x18
	::System::String* HFBDGPKPNFG; // 0x20
	::System::String* FBHOKKMMMDM; // 0x28
	::System::String* KMKDKKIDGGL; // 0x30
	::System::String* NGMJGLMBPMP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AACHMNJONNP__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AACHMNJONNP_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnGraphStart(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AACHMNJONNP_ONGRAPHSTART_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnGraphStop(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AACHMNJONNP_ONGRAPHSTOP_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void MOONNIIOGKP(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AACHMNJONNP_MOONNIIOGKP_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + AACHMNJONNP_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void LMGCBKENOPJ(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + AACHMNJONNP_LMGCBKENOPJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean KOPLHACOBFC(::System::Int32 MBABHIFLICA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AACHMNJONNP_KOPLHACOBFC_OFFSET))(this, MBABHIFLICA);
	}

	static ::System::Boolean AGDAOJOPLEF(::Il2CppArray<::System::String*>* EJCBEJMGFAJ, ::Il2CppArray<::System::String*>* EBFCACIEKBC)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::System::String*>*, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + AACHMNJONNP_AGDAOJOPLEF_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC);
	}
};
