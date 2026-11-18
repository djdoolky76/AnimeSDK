#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define OGADKOBJHJL_LGJFLGADHCC_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x14F758D0)
#define OGADKOBJHJL_LGJFLGADHCC__CTOR_OFFSET UNITYSDK_OFFSET(0x14F758C0)

inline static constexpr unsigned int OGADKOBJHJL_LGJFLGADHCC_TypeDefinitionIndex = 91632;

class OGADKOBJHJL_LGJFLGADHCC : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* FAJHPKBELMF; // 0x10
	::System::Single HACJFKBLODH; // 0x18
	::System::Single MDPPNMIPDMP; // 0x1C
	::System::Single JBFOAKELCNK; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGADKOBJHJL_LGJFLGADHCC__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGADKOBJHJL_LGJFLGADHCC_NPOLNFDBOOD_OFFSET))(this);
	}
};
