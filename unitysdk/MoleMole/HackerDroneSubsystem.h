#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class IBHAIJIKIAB;
namespace MoleMole::Cameras { class ScopedOverShoulderCamera; }
namespace MoleMole::Config { class HackerDroneConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKERDRONESUBSYSTEM_DESTROYCONTEXT_OFFSET UNITYSDK_OFFSET(0x11920550)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_GET_POSSESSEDDRONE_OFFSET UNITYSDK_OFFSET(0x119204B0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_INITCONTEXT_OFFSET UNITYSDK_OFFSET(0x119204C0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x11920DE0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11920E90)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x11922400)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11922390)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11922140)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x11921EF0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_POSSESSDRONE_OFFSET UNITYSDK_OFFSET(0x11921450)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_REGISTER_OFFSET UNITYSDK_OFFSET(0x11921080)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_TRYDISPOSECAMERA_OFFSET UNITYSDK_OFFSET(0x11921CE0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_1_OFFSET UNITYSDK_OFFSET(0x11921370)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_OFFSET UNITYSDK_OFFSET(0x119211D0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UNPOSSESSDRONE_OFFSET UNITYSDK_OFFSET(0x11920670)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x119212A0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATECONTEXT_OFFSET UNITYSDK_OFFSET(0x11920CB0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATEGLOBALVALUE_OFFSET UNITYSDK_OFFSET(0x11921DA0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM__CCTOR_OFFSET UNITYSDK_OFFSET(0x11922490)
#define MOLEMOLE_HACKERDRONESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x11922470)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x119224A0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11922530)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x119225C0)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11922660)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x11922700)
#define MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x119227A0)

namespace MoleMole
{
	inline static constexpr unsigned int HackerDroneSubsystem_TypeDefinitionIndex = 39087;

	class HackerDroneSubsystem
	{
	public:
		static ::System::Boolean* StaticGet_EnableContextPostLateUpdate()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(HackerDroneSubsystem_TypeDefinitionIndex)->GetStaticField(0x13510);
		}
		::MoleMole::EntityHandle _possessedDrone; // 0x10
		::System::Collections::Generic::List_1<::IBHAIJIKIAB*>* _contexts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM__CCTOR_OFFSET))();
		}

		::MoleMole::EntityHandle get_PossessedDrone()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_GET_POSSESSEDDRONE_OFFSET))(this);
		}

		::System::Void InitContext(::IBHAIJIKIAB* context)
		{
			return ((::System::Void(*)(::PVOID, ::IBHAIJIKIAB*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_INITCONTEXT_OFFSET))(this, context);
		}

		::System::Void DestroyContext(::IBHAIJIKIAB* context)
		{
			return ((::System::Void(*)(::PVOID, ::IBHAIJIKIAB*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_DESTROYCONTEXT_OFFSET))(this, context);
		}

		::System::Void UpdateContext(::IBHAIJIKIAB* context)
		{
			return ((::System::Void(*)(::PVOID, ::IBHAIJIKIAB*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATECONTEXT_OFFSET))(this, context);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void Register(::MoleMole::EntityHandle entity, ::MoleMole::Config::HackerDroneConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Config::HackerDroneConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_REGISTER_OFFSET))(this, entity, config);
		}

		::System::Void Unregister(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UNREGISTER_OFFSET))(this, entity);
		}

		::System::Void PossessDrone(::MoleMole::EntityHandle entity, ::MoleMole::Cameras::ScopedOverShoulderCamera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::Cameras::ScopedOverShoulderCamera*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_POSSESSDRONE_OFFSET))(this, entity, camera);
		}

		::System::Void UnpossessDrone(::MoleMole::EntityHandle entityHandle)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UNPOSSESSDRONE_OFFSET))(this, entityHandle);
		}

		::System::Void TryDisposeCamera(::IBHAIJIKIAB* context)
		{
			return ((::System::Void(*)(::PVOID, ::IBHAIJIKIAB*))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_TRYDISPOSECAMERA_OFFSET))(this, context);
		}

		::System::Void UpdateGlobalValue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_UPDATEGLOBALVALUE_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnPostLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONPOSTLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnLateUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONLATEUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void OnFixedUpdate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, deltaTime);
		}

		::System::Boolean TryGetContext(::System::UInt32 entityID, ::IBHAIJIKIAB*& context)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::IBHAIJIKIAB*&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_OFFSET))(this, entityID, context);
		}

		::System::Boolean TryGetContext_1(::System::UInt32 entityID, ::IBHAIJIKIAB*& context, ::System::Int32& index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::IBHAIJIKIAB*&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM_TRYGETCONTEXT_1_OFFSET))(this, entityID, context, index);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnPostLateUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONPOSTLATEUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKERDRONESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
