#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPDKILGLJNF;
namespace UnityEngine { class AnimationCurve; }

#define BPDKILGLJNF_CEPIHLBMLPB__CTOR_OFFSET UNITYSDK_OFFSET(0x16A06F50)

inline static constexpr unsigned int BPDKILGLJNF_CEPIHLBMLPB_TypeDefinitionIndex = 50587;

class BPDKILGLJNF_CEPIHLBMLPB : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x10
	::BPDKILGLJNF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDKILGLJNF_CEPIHLBMLPB__CTOR_OFFSET))(this);
	}
};
