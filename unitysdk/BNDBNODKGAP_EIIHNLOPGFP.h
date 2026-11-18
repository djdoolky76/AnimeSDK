#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BNDBNODKGAP_GEJMMOILJIA;
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class AnimationCurve; }

#define BNDBNODKGAP_EIIHNLOPGFP_COLOEHOOGPO_OFFSET UNITYSDK_OFFSET(0x128B4950)
#define BNDBNODKGAP_EIIHNLOPGFP__CTOR_OFFSET UNITYSDK_OFFSET(0x128B4940)

inline static constexpr unsigned int BNDBNODKGAP_EIIHNLOPGFP_TypeDefinitionIndex = 78406;

class BNDBNODKGAP_EIIHNLOPGFP : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* IODFDLCOHFM; // 0x10
	::UnityEngine::AnimationCurve* MMMCMJOGMPE; // 0x18
	::UnityEngine::AnimationCurve* OJNOCNHALJF; // 0x20
	::BNDBNODKGAP_GEJMMOILJIA* KGFKHBMEKBL; // 0x28
	::UnityEngine::Vector3 GGLGLBNLDDO; // 0x30
	::System::Single JOFGIANGHMK; // 0x3C
	::System::Single DJINDDHCOOC; // 0x40
	::System::Single PLKFJECCKHH; // 0x44
	::System::Single OCOGLJAIPGI; // 0x48
	::UnityEngine::Vector3 JOIKHMKJGDD; // 0x4C
	::UnityEngine::Vector3 AHNGGOAPMNO; // 0x58
	::System::Single KJFFKCHCHJP; // 0x64
	::System::Single JIDJFEBOGKB; // 0x68
	::UnityEngine::Vector3 FDJAKCMBFBK; // 0x6C
	::System::Single JPLFBPIJFCE; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_EIIHNLOPGFP__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerator* COLOEHOOGPO()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNDBNODKGAP_EIIHNLOPGFP_COLOEHOOGPO_OFFSET))(this);
	}
};
