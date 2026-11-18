#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BCPKGJLDNAJ;
class EAKOMPBLNOG;
class LELFJCFONLP;
class MMEOMPHPOFC;
class PPEPCNGLLLF;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDCHECKINGENTITY_OFFSET UNITYSDK_OFFSET(0x14BC8000)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDCONTROLENTITY_OFFSET UNITYSDK_OFFSET(0x14BC77B0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDDEBUGGER_OFFSET UNITYSDK_OFFSET(0x14BC5FF0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x14BC7A60)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ADDVELOCITY_OFFSET UNITYSDK_OFFSET(0x14BC6450)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ENTRYSLIDINGSTATE_OFFSET UNITYSDK_OFFSET(0x14BC6D70)
#define MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECHECKINGCONTEXT_OFFSET UNITYSDK_OFFSET(0x14BC8510)
#define MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECONTROLCONTEXT_OFFSET UNITYSDK_OFFSET(0x14BC8460)
#define MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATEROTATIONCONTEXT_OFFSET UNITYSDK_OFFSET(0x14BC85D0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_GETCURRENTVELOCITY_OFFSET UNITYSDK_OFFSET(0x14BC7110)
#define MOLEMOLE_SLIDINGSUBSYSTEM_GETORCREATECOMMONCONTEXT_OFFSET UNITYSDK_OFFSET(0x14BC7330)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ISCHECKINGENTITY_OFFSET UNITYSDK_OFFSET(0x14BC7050)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ISSLIDINGENTITY_OFFSET UNITYSDK_OFFSET(0x14BC6E90)
#define MOLEMOLE_SLIDINGSUBSYSTEM_MULTIPLYVELOCITY_OFFSET UNITYSDK_OFFSET(0x14BC6C30)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14BC5CB0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14BC5F70)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC8320)
#define MOLEMOLE_SLIDINGSUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC8640)
#define MOLEMOLE_SLIDINGSUBSYSTEM_POPMAXSPEEDXZ_OFFSET UNITYSDK_OFFSET(0x14BC7550)
#define MOLEMOLE_SLIDINGSUBSYSTEM_POPSLIDINGFLINGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14BC7630)
#define MOLEMOLE_SLIDINGSUBSYSTEM_PUSHMAXSPEEDXZ_OFFSET UNITYSDK_OFFSET(0x14BC72A0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_PUSHSLIDINGFLINGTHRESHOLD_OFFSET UNITYSDK_OFFSET(0x14BC74C0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REFRESHEXITVELOCITY_OFFSET UNITYSDK_OFFSET(0x14BC7710)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECHECKINGENTITY_OFFSET UNITYSDK_OFFSET(0x14BC8160)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECONTROLENTITY_OFFSET UNITYSDK_OFFSET(0x14BC7D50)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEDEBUGGER_OFFSET UNITYSDK_OFFSET(0x14BC6220)
#define MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEROTATIONENTITY_OFFSET UNITYSDK_OFFSET(0x14BC7BF0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_RESETSLIDINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x14BC6AE0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_RESETSURFACE_OFFSET UNITYSDK_OFFSET(0x14BC88A0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SETSLIDINGDIRECTION_OFFSET UNITYSDK_OFFSET(0x14BC6590)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SETSURFACE_OFFSET UNITYSDK_OFFSET(0x14BC8750)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SETVELOCITY_OFFSET UNITYSDK_OFFSET(0x14BC6730)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOFLYING_OFFSET UNITYSDK_OFFSET(0x14BC6960)
#define MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOSLIDING_OFFSET UNITYSDK_OFFSET(0x14BC81E0)
#define MOLEMOLE_SLIDINGSUBSYSTEM_UPDATECONTROLCONTEXT_OFFSET UNITYSDK_OFFSET(0x14BC86E0)
#define MOLEMOLE_SLIDINGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x14BC8A60)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONAWAKE_OFFSET UNITYSDK_OFFSET(0x14BC8A80)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x14BC8B10)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC8BA0)
#define MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x14BC8C40)

namespace MoleMole
{
	inline static constexpr unsigned int SlidingSubsystem_TypeDefinitionIndex = 42961;

	class SlidingSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::PPEPCNGLLLF*>* _debuggers; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LELFJCFONLP*>* _rotationContexts; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EAKOMPBLNOG*>* _controlContexts; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::BCPKGJLDNAJ*>* _checkingContexts; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MMEOMPHPOFC*>* _commonContexts; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		::System::Void OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONAWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONDESTROY_OFFSET))(this);
		}

		::System::Void AddDebugger(::PPEPCNGLLLF* debugger)
		{
			return ((::System::Void(*)(::PVOID, ::PPEPCNGLLLF*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDDEBUGGER_OFFSET))(this, debugger);
		}

		::System::Void RemoveDebugger(::PPEPCNGLLLF* debugger)
		{
			return ((::System::Void(*)(::PVOID, ::PPEPCNGLLLF*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEDEBUGGER_OFFSET))(this, debugger);
		}

		::System::Void AddVelocity(::MoleMole::Battle::Entity* entity, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void SetSlidingDirection(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SETSLIDINGDIRECTION_OFFSET))(this, entity, value);
		}

		::System::Void SetVelocity(::MoleMole::Battle::Entity* entity, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SETVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void SwitchIntoFlying(::MoleMole::Battle::Entity* entity, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOFLYING_OFFSET))(this, entity, duration);
		}

		::System::Void ResetSlidingDirection(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_RESETSLIDINGDIRECTION_OFFSET))(this, entity);
		}

		::System::Void MultiplyVelocity(::MoleMole::Battle::Entity* entity, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_MULTIPLYVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void EntrySlidingState(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ENTRYSLIDINGSTATE_OFFSET))(this, entity);
		}

		::System::Boolean IsSlidingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ISSLIDINGENTITY_OFFSET))(this, entity);
		}

		::System::Boolean IsCheckingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ISCHECKINGENTITY_OFFSET))(this, entity);
		}

		::System::Boolean GetCurrentVelocity(::MoleMole::Battle::Entity* entity, ::UnityEngine::Vector3& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_GETCURRENTVELOCITY_OFFSET))(this, entity, value);
		}

		::System::Void PushMaxSpeedXZ(::MoleMole::Battle::Entity* entity, ::System::String* tag, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_PUSHMAXSPEEDXZ_OFFSET))(this, entity, tag, value);
		}

		::System::Void PushSlidingFlingThreshold(::MoleMole::Battle::Entity* entity, ::System::String* tag, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_PUSHSLIDINGFLINGTHRESHOLD_OFFSET))(this, entity, tag, value);
		}

		::System::Void PopMaxSpeedXZ(::MoleMole::Battle::Entity* entity, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_POPMAXSPEEDXZ_OFFSET))(this, entity, tag);
		}

		::System::Void PopSlidingFlingThreshold(::MoleMole::Battle::Entity* entity, ::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_POPSLIDINGFLINGTHRESHOLD_OFFSET))(this, entity, tag);
		}

		::System::Void RefreshExitVelocity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REFRESHEXITVELOCITY_OFFSET))(this, entity);
		}

		::System::Void AddControlEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDCONTROLENTITY_OFFSET))(this, entity);
		}

		::MMEOMPHPOFC* GetOrCreateCommonContext(::MoleMole::Battle::Entity* entity)
		{
			return ((::MMEOMPHPOFC*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_GETORCREATECOMMONCONTEXT_OFFSET))(this, entity);
		}

		::System::Void AddRotationEntity(::MoleMole::Battle::Entity* entity, ::System::Single rotateSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDROTATIONENTITY_OFFSET))(this, entity, rotateSpeed);
		}

		::System::Void RemoveRotationEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVEROTATIONENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveControlEntity(::MoleMole::Battle::Entity* entity, ::System::Action_1<::EAKOMPBLNOG*>* destroy)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Action_1<::EAKOMPBLNOG*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECONTROLENTITY_OFFSET))(this, entity, destroy);
		}

		::System::Void AddCheckingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ADDCHECKINGENTITY_OFFSET))(this, entity);
		}

		::System::Void RemoveCheckingEntity(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_REMOVECHECKINGENTITY_OFFSET))(this, entity);
		}

		::System::Void SwitchIntoSliding(::MoleMole::Battle::Entity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SWITCHINTOSLIDING_OFFSET))(this, entity);
		}

		::System::Void OnFixedUpdate(::System::Single _deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONFIXEDUPDATE_OFFSET))(this, _deltaTime);
		}

		static ::System::Void FixedUpdateControlContext(::System::UInt32 entityId, ::EAKOMPBLNOG* context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::EAKOMPBLNOG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECONTROLCONTEXT_OFFSET))(entityId, context, deltaTime);
		}

		static ::System::Void FixedUpdateCheckingContext(::System::UInt32 entityId, ::BCPKGJLDNAJ* context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::BCPKGJLDNAJ*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATECHECKINGCONTEXT_OFFSET))(entityId, context, deltaTime);
		}

		static ::System::Void FixedUpdateRotationContext(::System::UInt32 entityId, ::LELFJCFONLP* context, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::UInt32, ::LELFJCFONLP*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_FIXEDUPDATEROTATIONCONTEXT_OFFSET))(entityId, context, deltaTime);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		static ::System::Void UpdateControlContext(::System::UInt32 entityId, ::EAKOMPBLNOG* context, ::System::Single _)
		{
			return ((::System::Void(*)(::System::UInt32, ::EAKOMPBLNOG*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_UPDATECONTROLCONTEXT_OFFSET))(entityId, context, _);
		}

		::System::Void SetSurface(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* actor, ::System::String* surface)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_SETSURFACE_OFFSET))(this, entity, actor, surface);
		}

		::System::Void ResetSurface(::MoleMole::Battle::Entity* entity, ::MoleMole::Battle::Entity* actor)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM_RESETSURFACE_OFFSET))(this, entity, actor);
		}

		::System::Void __base_OnAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONAWAKE_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnFixedUpdate(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONFIXEDUPDATE_OFFSET))(this, P0);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SLIDINGSUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
