#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config { class FloorStreamingLayerLoadEntry; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x156DFF20)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONRECYCLE_OFFSET UNITYSDK_OFFSET(0x156E0610)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x156E0660)
#define FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x156E0680)

namespace Foundation::ViewObject::Donjon
{
	inline static constexpr unsigned int FloorStreamingLayerLoadComponent_TypeDefinitionIndex = 45917;

	class FloorStreamingLayerLoadComponent
	{
	public:
		::System::Collections::Generic::IReadOnlyList_1<::MoleMole::Config::FloorStreamingLayerLoadEntry*>* LoadList; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT_ONRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_DONJON_FLOORSTREAMINGLAYERLOADCOMPONENT___BASE_ONENABLE_OFFSET))(this);
		}
	};
}
