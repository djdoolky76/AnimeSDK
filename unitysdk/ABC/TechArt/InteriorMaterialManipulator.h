#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace ABC::TechArt { class InteriorBox; }
namespace ABC::TechArt { class InteriorPlane; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ABC_TECHART_INTERIORMATERIALMANIPULATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x28B7E80)

namespace ABC::TechArt
{
	inline static constexpr unsigned int InteriorMaterialManipulator_TypeDefinitionIndex = 16258;

	class InteriorMaterialManipulator
	{
	public:
		::System::Int32 InteriorPlaneCount; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::ABC::TechArt::InteriorPlane*>* InteriorPlanes; // 0x30
		::System::Int32 InteriorBoxCount; // 0x38
		::System::Byte _padding1[0x4];
		::System::Collections::Generic::List_1<::ABC::TechArt::InteriorBox*>* InteriorBoxes; // 0x40
		::System::Boolean UseRandom; // 0x48
		::System::Byte _padding2[0x3];
		::UnityEngine::E46B881AA2636190 FakeWindowColor; // 0x4C
		::System::Single FakeWindowIntensity; // 0x5C
		::UnityEngine::E46B881AA2636190 CurtainColor; // 0x60
		::System::Single CurtainColorIntensity; // 0x70
		::UnityEngine::Vector2 CurtainPosition; // 0x74

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_TECHART_INTERIORMATERIALMANIPULATOR__CTOR_OFFSET))(this);
		}
	};
}
