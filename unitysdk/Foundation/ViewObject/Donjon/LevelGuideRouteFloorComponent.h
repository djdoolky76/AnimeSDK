#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigLevelGuideRouteEntry.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_LEVELGUIDEROUTEFLOORCOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x142C15B0)
#define FOUNDATION_VIEWOBJECT_DONJON_LEVELGUIDEROUTEFLOORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x142C1600)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int LevelGuideRouteFloorComponent_TypeDefinitionIndex = 60043;

	class LevelGuideRouteFloorComponent
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::ConfigLevelGuideRouteEntry>* RouteEntries; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_LEVELGUIDEROUTEFLOORCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_LEVELGUIDEROUTEFLOORCOMPONENT_ONRECYCLE_OFFSET))(this);
		}
	};
}
