#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace MoleMole { class UIAvatarLightSetting; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define APPCFJKJKND_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x6800A0)
#define APPCFJKJKND_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x7A1390)
#define APPCFJKJKND_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x7A13B0)
#define APPCFJKJKND_POAGIBADJBI_OFFSET UNITYSDK_OFFSET(0x7A1310)

inline static constexpr unsigned int APPCFJKJKND_TypeDefinitionIndex = 75589;

struct alignas(8) APPCFJKJKND
{
	::MoleMole::EAvatarLightChangeType FNLGDLHAEGD; // 0x10
	::System::Single KKJKPJEGKJC; // 0x14
	::System::Single NPEEDEJIKKN; // 0x18
	::UnityEngine::Quaternion DNNFINMKHCN; // 0x1C
	::UnityEngine::Quaternion DMHNKKHEJBH; // 0x2C
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* KHIHLNMKLND; // 0x40

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + APPCFJKJKND_BNFDOJPKBMO_OFFSET))(this);
	}

	::System::Single POAGIBADJBI(::System::Single IMGGHKGGNPE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APPCFJKJKND_POAGIBADJBI_OFFSET))(this, IMGGHKGGNPE);
	}

	::UnityEngine::Quaternion ODEEJCPBCMM(::MoleMole::UIAvatarLightSetting* MDANKKPCLKO, ::UnityEngine::Transform* BOFLNBPPEDE)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::MoleMole::UIAvatarLightSetting*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + APPCFJKJKND_ODEEJCPBCMM_OFFSET))(this, MDANKKPCLKO, BOFLNBPPEDE);
	}

	::UnityEngine::Quaternion OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::UnityEngine::Transform* BOFLNBPPEDE)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + APPCFJKJKND_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, BOFLNBPPEDE);
	}
};
