#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

template <typename T1, typename T2> class CNKGGMABMGE_2;

#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EB22F0)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EB2400)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EB23A0)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_REGISTERVOPHYSICSCASTTARGET_OFFSET UNITYSDK_OFFSET(0x13EB2510)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_UNREGISTERVOPHYSICSCASTTARGET_OFFSET UNITYSDK_OFFSET(0x13EB2590)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x13EB2610)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x13EB2630)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x13EB26C0)
#define MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x13EB2750)

namespace MoleMole
{
	inline static constexpr unsigned int VoPhysicsCastSubsystem_TypeDefinitionIndex = 62054;

	class VoPhysicsCastSubsystem
	{
	public:
		::CNKGGMABMGE_2<::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle>* GroupToTargetViewObject; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterVoPhysicsCastTarget(::System::UInt32 groupID, ::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_REGISTERVOPHYSICSCASTTARGET_OFFSET))(this, groupID, handle);
		}

		::System::Void UnregisterVoPhysicsCastTarget(::System::UInt32 groupID, ::Foundation::ViewObject::ViewObjectHandle handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM_UNREGISTERVOPHYSICSCASTTARGET_OFFSET))(this, groupID, handle);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPHYSICSCASTSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
