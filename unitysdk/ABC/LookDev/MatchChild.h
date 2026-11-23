#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class Transform; }

#define ABC_LOOKDEV_MATCHCHILD_BDD4F81B5D8F2BBB_OFFSET UNITYSDK_OFFSET(0x1B09C10)
#define ABC_LOOKDEV_MATCHCHILD_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x1B0A3B0)
#define ABC_LOOKDEV_MATCHCHILD__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace ABC::LookDev
{
	inline static constexpr unsigned int MatchChild_TypeDefinitionIndex = 2026;

	class MatchChild : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* RootA; // 0x20
		::UnityEngine::Transform* ChildA; // 0x28
		::UnityEngine::Transform* RootB; // 0x30
		::UnityEngine::Transform* ChildB; // 0x38
		::System::Boolean match; // 0x40
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 ChildAWorldPos; // 0x44
		::UnityEngine::Vector3 ChildAWorldRotAngles; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_MATCHCHILD__CTOR_OFFSET))(this);
		}

		::System::Void BDD4F81B5D8F2BBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_MATCHCHILD_BDD4F81B5D8F2BBB_OFFSET))(this);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_LOOKDEV_MATCHCHILD_E02954280801633F_OFFSET))(this);
		}
	};
}
