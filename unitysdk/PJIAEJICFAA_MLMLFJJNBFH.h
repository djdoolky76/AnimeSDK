#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJGICDJIDFN.h"

class HFOPDHLEBHJ;
class PJIAEJICFAA;
namespace MoleMole { class CharacterScriptConfig; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define PJIAEJICFAA_MLMLFJJNBFH_FFMADCIFODD_OFFSET UNITYSDK_OFFSET(0x1C1D8400)
#define PJIAEJICFAA_MLMLFJJNBFH_GAGJEFLLOCE_OFFSET UNITYSDK_OFFSET(0x1C1D7BD0)
#define PJIAEJICFAA_MLMLFJJNBFH_KENJANGJMOO_OFFSET UNITYSDK_OFFSET(0x1C1D7E70)
#define PJIAEJICFAA_MLMLFJJNBFH_KLOMJPDDJBH_OFFSET UNITYSDK_OFFSET(0x1C1D7F20)
#define PJIAEJICFAA_MLMLFJJNBFH_MGDEHEOAKLA_OFFSET UNITYSDK_OFFSET(0x1C1D8240)
#define PJIAEJICFAA_MLMLFJJNBFH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D7BC0)

inline static constexpr unsigned int PJIAEJICFAA_MLMLFJJNBFH_TypeDefinitionIndex = 39659;

class PJIAEJICFAA_MLMLFJJNBFH : public ::OJGICDJIDFN
{
public:
	::UnityEngine::Animator* FPGIEMNHLEF; // 0x18
	::HFOPDHLEBHJ* EGPPGBACGLN; // 0x20
	::UnityEngine::Rigidbody* CFCDGNIJMNL; // 0x28
	::UnityEngine::Transform* HJHEDIGLKIH; // 0x30
	::MoleMole::CharacterScriptConfig* GJANFHHPMNC; // 0x38

	::System::Void _ctor(::PJIAEJICFAA* HBNBIBADGNH)
	{
		return ((::System::Void(*)(::PVOID, ::PJIAEJICFAA*))((::PBYTE)hIl2Cpp + PJIAEJICFAA_MLMLFJJNBFH__CTOR_OFFSET))(this, HBNBIBADGNH);
	}

	::UnityEngine::Transform* GAGJEFLLOCE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_MLMLFJJNBFH_GAGJEFLLOCE_OFFSET))(this);
	}

	::HFOPDHLEBHJ* KENJANGJMOO()
	{
		return ((::HFOPDHLEBHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_MLMLFJJNBFH_KENJANGJMOO_OFFSET))(this);
	}

	::UnityEngine::Animator* KLOMJPDDJBH()
	{
		return ((::UnityEngine::Animator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_MLMLFJJNBFH_KLOMJPDDJBH_OFFSET))(this);
	}

	::MoleMole::CharacterScriptConfig* MGDEHEOAKLA()
	{
		return ((::MoleMole::CharacterScriptConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_MLMLFJJNBFH_MGDEHEOAKLA_OFFSET))(this);
	}

	::UnityEngine::Rigidbody* FFMADCIFODD()
	{
		return ((::UnityEngine::Rigidbody*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIAEJICFAA_MLMLFJJNBFH_FFMADCIFODD_OFFSET))(this);
	}
};
