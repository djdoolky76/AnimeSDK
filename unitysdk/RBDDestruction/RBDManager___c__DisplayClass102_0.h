#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RBDDestruction { class RBDManager; }

#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3CB40)
#define RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS102_0__PROCESSGROUNDEVENTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EA3CB50)

namespace RBDDestruction
{
	inline static constexpr unsigned int RBDManager___c__DisplayClass102_0_TypeDefinitionIndex = 26558;

	class RBDManager___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::RBDDestruction::RBDManager* __4__this; // 0x10
		::System::Int32 buildingTypeID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _ProcessGroundEvents_b__0(::Il2CppArray<::System::Object*>* batch)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RBDDESTRUCTION_RBDMANAGER___C__DISPLAYCLASS102_0__PROCESSGROUNDEVENTS_B__0_OFFSET))(this, batch);
		}
	};
}
