#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define NFMAIACOLBF_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x6800A0)
#define NFMAIACOLBF_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x6801A0)
#define NFMAIACOLBF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x6800B0)
#define NFMAIACOLBF_POAGIBADJBI_OFFSET UNITYSDK_OFFSET(0x680120)

inline static constexpr unsigned int NFMAIACOLBF_TypeDefinitionIndex = 68357;

struct alignas(8) NFMAIACOLBF
{
	::MoleMole::EAvatarLightChangeType FNLGDLHAEGD; // 0x10
	::System::Single KKJKPJEGKJC; // 0x14
	::System::Single NPEEDEJIKKN; // 0x18
	::UnityEngine::Quaternion GGOGDHBLBJC; // 0x1C
	::UnityEngine::Quaternion LEFDANNBLHJ; // 0x2C
	::UnityEngine::Quaternion HDNPAKEIILM; // 0x3C
	::UnityEngine::Quaternion FOCJJKJJMKC; // 0x4C
	::UnityEngine::Vector4 KGBDHFODGJC; // 0x5C
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* KHIHLNMKLND; // 0x70

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMAIACOLBF_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::UnityEngine::Quaternion CMGLBFCPHHM, ::UnityEngine::Quaternion OPDOJNLLJCO, ::UnityEngine::Vector3 BHFAGMPDIGJ)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NFMAIACOLBF_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, CMGLBFCPHHM, OPDOJNLLJCO, BHFAGMPDIGJ);
	}

	::System::Single POAGIBADJBI(::System::Single IMGGHKGGNPE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NFMAIACOLBF_POAGIBADJBI_OFFSET))(this, IMGGHKGGNPE);
	}

	::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion> ODEEJCPBCMM(::MoleMole::EAvatarLightChangeType BPINANLEDPD, ::System::Single MDPPNMIPDMP, ::System::String* KGACICGODJD, ::UnityEngine::Vector4 KFJBOALBCPD, ::UnityEngine::Quaternion IHFBHODJDLH, ::UnityEngine::Quaternion LBGMLFMCKHK, ::UnityEngine::Quaternion FMAIEMFHPFE, ::UnityEngine::Quaternion EFKPDIMMJJM)
	{
		return ((::System::ValueTuple_2<::UnityEngine::Quaternion, ::UnityEngine::Quaternion>(*)(::PVOID, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector4, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NFMAIACOLBF_ODEEJCPBCMM_OFFSET))(this, BPINANLEDPD, MDPPNMIPDMP, KGACICGODJD, KFJBOALBCPD, IHFBHODJDLH, LBGMLFMCKHK, FMAIEMFHPFE, EFKPDIMMJJM);
	}
};
