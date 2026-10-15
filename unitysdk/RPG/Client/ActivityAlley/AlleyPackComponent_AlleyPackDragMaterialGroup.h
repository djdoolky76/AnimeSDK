#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0xC3C1EE0)
#define RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3C1F20)

namespace RPG::Client::ActivityAlley
{
	class AlleyPackComponent_AlleyPackDragMaterialGroup : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::Material*>* RedMaterials; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* GreenMaterials; // 0x18
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYALLEY_ALLEYPACKCOMPONENT_ALLEYPACKDRAGMATERIALGROUP_DISPOSE_OFFSET))(this);
		}

	};
}
