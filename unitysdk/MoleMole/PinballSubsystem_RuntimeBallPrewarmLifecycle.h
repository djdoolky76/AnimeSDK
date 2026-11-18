#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/PinballSubsystem_BallComponentData.h"
#include "unitysdk/MoleMole/PinballSubsystem_BallSpawnData.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/MoleMole/PinballSubsystem_RuntimeBallActivationData.h"

namespace MoleMole { class PinballSubsystem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_ACTIVATE_OFFSET UNITYSDK_OFFSET(0x1A7143D0)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1A714630)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A713EB0)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1A7146A0)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_GET_LIFECYCLEMANAGEDCOMPONENTCLASSIDS_OFFSET UNITYSDK_OFFSET(0x1A713E50)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_PREPAREPREWARMEDBALL_OFFSET UNITYSDK_OFFSET(0x1A7140F0)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_PREWARM_OFFSET UNITYSDK_OFFSET(0x1A714080)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_TRYCREATEACTIVE_OFFSET UNITYSDK_OFFSET(0x1A714310)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A714710)
#define MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A713E20)

namespace MoleMole
{
	inline static constexpr unsigned int PinballSubsystem_RuntimeBallPrewarmLifecycle_TypeDefinitionIndex = 56738;

	class PinballSubsystem_RuntimeBallPrewarmLifecycle : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_LifecycleManagedComponentClassIds()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PinballSubsystem_RuntimeBallPrewarmLifecycle_TypeDefinitionIndex)->GetStaticField(0x3EB20);
		}
		::System::String* _templateKey; // 0x10
		::MoleMole::PinballSubsystem_BallComponentData _componentData; // 0x18
		::MoleMole::PinballSubsystem* _owner; // 0xF0
		::MoleMole::PinballSubsystem_BallSpawnData _spawnData; // 0xF8

		::System::Void _ctor(::MoleMole::PinballSubsystem* owner, ::System::String* templateKey, ::MoleMole::PinballSubsystem_BallSpawnData spawnData, ::MoleMole::PinballSubsystem_BallComponentData componentData)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::PinballSubsystem*, ::System::String*, ::MoleMole::PinballSubsystem_BallSpawnData, ::MoleMole::PinballSubsystem_BallComponentData))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE__CTOR_OFFSET))(this, owner, templateKey, spawnData, componentData);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* get_LifecycleManagedComponentClassIds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_GET_LIFECYCLEMANAGEDCOMPONENTCLASSIDS_OFFSET))(this);
		}

		::MoleMole::EntityHandle Create()
		{
			return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_CREATE_OFFSET))(this);
		}

		::System::Boolean Prewarm(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_PREWARM_OFFSET))(this, entity);
		}

		::System::Boolean TryCreateActive(::MoleMole::PinballSubsystem_RuntimeBallActivationData activation, ::MoleMole::EntityHandle& entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::PinballSubsystem_RuntimeBallActivationData, ::MoleMole::EntityHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_TRYCREATEACTIVE_OFFSET))(this, activation, entity);
		}

		::System::Boolean PreparePrewarmedBall(::MoleMole::EntityHandle entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_PREPAREPREWARMEDBALL_OFFSET))(this, entity);
		}

		::System::Boolean Activate(::MoleMole::EntityHandle entity, ::MoleMole::PinballSubsystem_RuntimeBallActivationData activation)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::PinballSubsystem_RuntimeBallActivationData))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_ACTIVATE_OFFSET))(this, entity, activation);
		}

		::System::Void Complete(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_COMPLETE_OFFSET))(this, entity);
		}

		::System::Void Destroy(::MoleMole::EntityHandle entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_PINBALLSUBSYSTEM_RUNTIMEBALLPREWARMLIFECYCLE_DESTROY_OFFSET))(this, entity);
		}
	};
}
