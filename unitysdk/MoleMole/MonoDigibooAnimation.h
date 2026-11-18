#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace Spine::Unity { class SkeletonAnimation; }

#define MOLEMOLE_MONODIGIBOOANIMATION_AWAKE_OFFSET UNITYSDK_OFFSET(0x12473B50)
#define MOLEMOLE_MONODIGIBOOANIMATION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x12473C20)
#define MOLEMOLE_MONODIGIBOOANIMATION__CTOR_OFFSET UNITYSDK_OFFSET(0x12473E00)

namespace MoleMole
{
	inline static constexpr unsigned int MonoDigibooAnimation_TypeDefinitionIndex = 40446;

	class MonoDigibooAnimation : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean PlayOnAwake; // 0x18
		::System::Byte _padding0[0x7];
		::Spine::Unity::SkeletonAnimation* AMBBJKIHCLB; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOANIMATION__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOANIMATION_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONODIGIBOOANIMATION_ONENABLE_OFFSET))(this);
		}
	};
}
