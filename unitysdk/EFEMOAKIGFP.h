#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace MoleMole { class UITransitionPanelPopWindowController; }
namespace System { class Object; }

#define EFEMOAKIGFP_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x1414AD40)
#define EFEMOAKIGFP_HMFCFBCMFAK_OFFSET UNITYSDK_OFFSET(0x1414AD50)
#define EFEMOAKIGFP_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0x1414A380)
#define EFEMOAKIGFP_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1414A100)
#define EFEMOAKIGFP_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x1414AD30)
#define EFEMOAKIGFP_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x1414A400)
#define EFEMOAKIGFP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1414AD10)
#define EFEMOAKIGFP__CTOR_OFFSET UNITYSDK_OFFSET(0x1414AD00)

inline static constexpr unsigned int EFEMOAKIGFP_TypeDefinitionIndex = 76162;

class EFEMOAKIGFP : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	static ::System::Boolean* StaticGet_AIIFFIEJEDL()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EFEMOAKIGFP_TypeDefinitionIndex)->GetStaticField(0xC890);
	}
	static ::UnityEngine::Color* StaticGet_CGICCOBHACH()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(EFEMOAKIGFP_TypeDefinitionIndex)->GetStaticField(0xC894);
	}
	::MoleMole::UITransitionPanelPopWindowController* OAAMODNKCJN; // 0x10
	::System::Boolean BDHKKHKCNDP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFEMOAKIGFP__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFEMOAKIGFP__CCTOR_OFFSET))();
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EFEMOAKIGFP_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + EFEMOAKIGFP_ONBEHAVIOURPLAY_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EFEMOAKIGFP_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + EFEMOAKIGFP_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + EFEMOAKIGFP_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	::System::Void HMFCFBCMFAK(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + EFEMOAKIGFP_HMFCFBCMFAK_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
