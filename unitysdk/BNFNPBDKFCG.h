#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define BNFNPBDKFCG_DPFEOMHPMKD_OFFSET UNITYSDK_OFFSET(0x6797B0)
#define BNFNPBDKFCG_GGDJMCCGAAD_OFFSET UNITYSDK_OFFSET(0x113FDA30)
#define BNFNPBDKFCG_JPCNEIDOFOL_OFFSET UNITYSDK_OFFSET(0x679840)
#define BNFNPBDKFCG_PDIEGOGDJKA_OFFSET UNITYSDK_OFFSET(0x6798D0)
#define BNFNPBDKFCG__CCTOR_OFFSET UNITYSDK_OFFSET(0x113FD8F0)

inline static constexpr unsigned int BNFNPBDKFCG_TypeDefinitionIndex = 72074;

struct alignas(8) BNFNPBDKFCG
{
	static ::UnityEngine::AnimationCurve** StaticGet_IIPOALFEFHI()
	{
		return (::UnityEngine::AnimationCurve**)Il2CppClass::FromTypeDefinitionIndex(BNFNPBDKFCG_TypeDefinitionIndex)->GetStaticField(0x3A490);
	}
	::System::String* NBBJCGEJOGF; // 0x10
	::System::String* OECBMDBCPAN; // 0x18
	::UnityEngine::Vector3 HKDDMPOEMMI; // 0x20
	::UnityEngine::Vector3 LEOEICACEOA; // 0x2C

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BNFNPBDKFCG__CCTOR_OFFSET))();
	}

	::UnityEngine::AnimationCurve* DPFEOMHPMKD()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNPBDKFCG_DPFEOMHPMKD_OFFSET))(this);
	}

	::UnityEngine::AnimationCurve* JPCNEIDOFOL()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNPBDKFCG_JPCNEIDOFOL_OFFSET))(this);
	}

	static ::UnityEngine::AnimationCurve* GGDJMCCGAAD(::System::String* CBMDJKGKBFF)
	{
		return ((::UnityEngine::AnimationCurve*(*)(::System::String*))((::PBYTE)hIl2Cpp + BNFNPBDKFCG_GGDJMCCGAAD_OFFSET))(CBMDJKGKBFF);
	}

	::UnityEngine::AnimationCurve* PDIEGOGDJKA()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFNPBDKFCG_PDIEGOGDJKA_OFFSET))(this);
	}
};
