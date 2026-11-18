#pragma once
#include "unitysdk/unitysdk.h"

class FJBKLCGGKHI;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_AIRBUSSUBSYSTEM_HASPLAYERINOUTTRIGGERAIRBUSINFO_OFFSET UNITYSDK_OFFSET(0x177DC780)
#define MOLEMOLE_AIRBUSSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x177DC4C0)
#define MOLEMOLE_AIRBUSSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x177DC5C0)
#define MOLEMOLE_AIRBUSSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x177DC950)
#define MOLEMOLE_AIRBUSSUBSYSTEM_REGISTERMANAGER_OFFSET UNITYSDK_OFFSET(0x177DC660)
#define MOLEMOLE_AIRBUSSUBSYSTEM_UNREGISTERMANAGER_OFFSET UNITYSDK_OFFSET(0x177DC6F0)
#define MOLEMOLE_AIRBUSSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x177DCD90)
#define MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x177DCDB0)
#define MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x177DCE40)
#define MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x177DCED0)

namespace MoleMole
{
	inline static constexpr unsigned int AirBusSubSystem_TypeDefinitionIndex = 83450;

	class AirBusSubSystem
	{
	public:
		// static const ::System::Single _fixRate; // 0x0
		::System::Collections::Generic::List_1<::FJBKLCGGKHI*>* _managers; // 0x10
		::System::Single _fixTimer; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void RegisterManager(::FJBKLCGGKHI* manager)
		{
			return ((::System::Void(*)(::PVOID, ::FJBKLCGGKHI*))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_REGISTERMANAGER_OFFSET))(this, manager);
		}

		::System::Void UnregisterManager(::FJBKLCGGKHI* manager)
		{
			return ((::System::Void(*)(::PVOID, ::FJBKLCGGKHI*))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_UNREGISTERMANAGER_OFFSET))(this, manager);
		}

		::System::Boolean HasPlayerInOutTriggerAirBusInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_HASPLAYERINOUTTRIGGERAIRBUSINFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_AIRBUSSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
