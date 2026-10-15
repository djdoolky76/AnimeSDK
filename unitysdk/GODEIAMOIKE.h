#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLFHMKMJNPK.h"
class FDPALAEIHPB;
namespace UnityEngine { class AnimationCurve; }

#define GODEIAMOIKE_CTOR_OFFSET UNITYSDK_OFFSET(0x15B2A700)
#define GODEIAMOIKE_JAILHGGFLDH_OFFSET UNITYSDK_OFFSET(0x15B2A710)

inline static constexpr unsigned int GODEIAMOIKE_TypeDefinitionIndex = 76617;

	class GODEIAMOIKE : public ::HLFHMKMJNPK
	{
	public:
		::UnityEngine::AnimationCurve* PNOHBBMHGLB; // 0x18
		::System::Void _ctor(::FDPALAEIHPB* a1, ::UnityEngine::AnimationCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + GODEIAMOIKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single JAILHGGFLDH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GODEIAMOIKE_JAILHGGFLDH_OFFSET))(this, a1);
		}

	};
