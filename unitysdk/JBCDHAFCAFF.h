#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EAvatarLightChangeType.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define JBCDHAFCAFF_BNFDOJPKBMO_OFFSET UNITYSDK_OFFSET(0x6800A0)
#define JBCDHAFCAFF_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x7911B0)
#define JBCDHAFCAFF_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x7911C0)
#define JBCDHAFCAFF_POAGIBADJBI_OFFSET UNITYSDK_OFFSET(0x7911D0)

inline static constexpr unsigned int JBCDHAFCAFF_TypeDefinitionIndex = 73980;

struct alignas(8) JBCDHAFCAFF
{
	::MoleMole::EAvatarLightChangeType FNLGDLHAEGD; // 0x10
	::System::Single KKJKPJEGKJC; // 0x14
	::System::Single NPEEDEJIKKN; // 0x18
	::UnityEngine::Vector2 IGHFNLFCADE; // 0x1C
	::UnityEngine::Vector2 KGBDHFODGJC; // 0x24
	::System::Byte _padding0[0x4];
	::UnityEngine::AnimationCurve* KHIHLNMKLND; // 0x30

	::UnityEngine::Vector2 ODEEJCPBCMM(::MoleMole::EAvatarLightChangeType BPINANLEDPD, ::System::Single MDPPNMIPDMP, ::System::String* KGACICGODJD, ::UnityEngine::Vector2 PIGGJNJIHPP, ::UnityEngine::Vector2 KFJBOALBCPD)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MoleMole::EAvatarLightChangeType, ::System::Single, ::System::String*, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JBCDHAFCAFF_ODEEJCPBCMM_OFFSET))(this, BPINANLEDPD, MDPPNMIPDMP, KGACICGODJD, PIGGJNJIHPP, KFJBOALBCPD);
	}

	::System::Boolean BNFDOJPKBMO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCDHAFCAFF_BNFDOJPKBMO_OFFSET))(this);
	}

	::UnityEngine::Vector2 OKJCHFGIKBH(::System::Single PMNLNNGEIFM, ::UnityEngine::Vector2 KKIIEDCDIKK)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + JBCDHAFCAFF_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM, KKIIEDCDIKK);
	}

	::System::Single POAGIBADJBI(::System::Single IMGGHKGGNPE)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBCDHAFCAFF_POAGIBADJBI_OFFSET))(this, IMGGHKGGNPE);
	}
};
