#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Nap/NapECS/ComponentMask.h"
#include "unitysdk/Nap/NapECS/EcsDataCompScopeWriter.h"

namespace Nap::NapECS { class EcsArchetype; }
namespace Nap::NapECS { class EcsComponent; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NAP_NAPECS_ECSENTITY_ADDPRELOADCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CE07030)
#define NAP_NAPECS_ECSENTITY_ADDSTATEMASK_OFFSET UNITYSDK_OFFSET(0x1CE069F0)
#define NAP_NAPECS_ECSENTITY_CLEARPRELOADCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CE07390)
#define NAP_NAPECS_ECSENTITY_DISABLECUSTOMMASK_OFFSET UNITYSDK_OFFSET(0x1CE05EE0)
#define NAP_NAPECS_ECSENTITY_ENABLECUSTOMMASK_OFFSET UNITYSDK_OFFSET(0x1CE05E80)
#define NAP_NAPECS_ECSENTITY_GETBIT_OFFSET UNITYSDK_OFFSET(0x1CE07DA0)
#define NAP_NAPECS_ECSENTITY_GETCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CE06D10)
#define NAP_NAPECS_ECSENTITY_GETSTRUCTCOMPWRITER_OFFSET UNITYSDK_OFFSET(0x1CE06FD0)
#define NAP_NAPECS_ECSENTITY_GET_ARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1CE05F50)
#define NAP_NAPECS_ECSENTITY_GET_COMPONENTLIST_OFFSET UNITYSDK_OFFSET(0x1CE05F40)
#define NAP_NAPECS_ECSENTITY_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1CE04EF0)
#define NAP_NAPECS_ECSENTITY_GET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1CE04F30)
#define NAP_NAPECS_ECSENTITY_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CE04F00)
#define NAP_NAPECS_ECSENTITY_GET_ISDEBUGPAUSE_OFFSET UNITYSDK_OFFSET(0x1CE05B70)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADYBIT_OFFSET UNITYSDK_OFFSET(0x1CE05040)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1CE04F50)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADYBIT_OFFSET UNITYSDK_OFFSET(0x1CE051D0)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1CDFFDC0)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADYBIT_OFFSET UNITYSDK_OFFSET(0x1CE05570)
#define NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1CE05480)
#define NAP_NAPECS_ECSENTITY_GET_ISPAUSEBIT_OFFSET UNITYSDK_OFFSET(0x1CE057E0)
#define NAP_NAPECS_ECSENTITY_GET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1CE05700)
#define NAP_NAPECS_ECSENTITY_GET_ISPRELOADBIT_OFFSET UNITYSDK_OFFSET(0x1CE05C70)
#define NAP_NAPECS_ECSENTITY_GET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1CE05B80)
#define NAP_NAPECS_ECSENTITY_GET_ISSTATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1CE06670)
#define NAP_NAPECS_ECSENTITY_GET_ISVALIDBIT_OFFSET UNITYSDK_OFFSET(0x1CE06710)
#define NAP_NAPECS_ECSENTITY_GET_MASK_OFFSET UNITYSDK_OFFSET(0x1CE032E0)
#define NAP_NAPECS_ECSENTITY_GET_REFWORLD_OFFSET UNITYSDK_OFFSET(0x1CE04F10)
#define NAP_NAPECS_ECSENTITY_HASALLCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1CE07630)
#define NAP_NAPECS_ECSENTITY_HASCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CE07490)
#define NAP_NAPECS_ECSENTITY_INIT_OFFSET UNITYSDK_OFFSET(0x1CE05F60)
#define NAP_NAPECS_ECSENTITY_ISINSTATEMASK_OFFSET UNITYSDK_OFFSET(0x1CE067B0)
#define NAP_NAPECS_ECSENTITY_ISREMOVING_OFFSET UNITYSDK_OFFSET(0x1CE068E0)
#define NAP_NAPECS_ECSENTITY_ISRUNNABLE_OFFSET UNITYSDK_OFFSET(0x1CDFFEB0)
#define NAP_NAPECS_ECSENTITY_ISTOBEREMOVED_OFFSET UNITYSDK_OFFSET(0x1CE06970)
#define NAP_NAPECS_ECSENTITY_ISVALID_OFFSET UNITYSDK_OFFSET(0x1CE062D0)
#define NAP_NAPECS_ECSENTITY_MARKARCHETYPESINGLEDATAWRITE_OFFSET UNITYSDK_OFFSET(0x1CE04DF0)
#define NAP_NAPECS_ECSENTITY_ONADDCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CE07960)
#define NAP_NAPECS_ECSENTITY_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x1CE07D60)
#define NAP_NAPECS_ECSENTITY_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CE07B50)
#define NAP_NAPECS_ECSENTITY_ONREMOVECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CE07A00)
#define NAP_NAPECS_ECSENTITY_ONUPDATEARCHETYPE_OFFSET UNITYSDK_OFFSET(0x1CE07690)
#define NAP_NAPECS_ECSENTITY_REMOVESTATEMASK_OFFSET UNITYSDK_OFFSET(0x1CE06A90)
#define NAP_NAPECS_ECSENTITY_RESET_OFFSET UNITYSDK_OFFSET(0x1CE06BA0)
#define NAP_NAPECS_ECSENTITY_SETBIT_OFFSET UNITYSDK_OFFSET(0x1CE07DF0)
#define NAP_NAPECS_ECSENTITY_SET_ENTITYNAME_OFFSET UNITYSDK_OFFSET(0x1CE04F40)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADYBIT_OFFSET UNITYSDK_OFFSET(0x1CE050F0)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADY_OFFSET UNITYSDK_OFFSET(0x1CE050E0)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADYBIT_OFFSET UNITYSDK_OFFSET(0x1CE053A0)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADY_OFFSET UNITYSDK_OFFSET(0x1CE05270)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADYBIT_OFFSET UNITYSDK_OFFSET(0x1CE05620)
#define NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADY_OFFSET UNITYSDK_OFFSET(0x1CE05610)
#define NAP_NAPECS_ECSENTITY_SET_ISPAUSEBIT_OFFSET UNITYSDK_OFFSET(0x1CE05AA0)
#define NAP_NAPECS_ECSENTITY_SET_ISPAUSE_OFFSET UNITYSDK_OFFSET(0x1CE05880)
#define NAP_NAPECS_ECSENTITY_SET_ISPRELOADBIT_OFFSET UNITYSDK_OFFSET(0x1CE05DA0)
#define NAP_NAPECS_ECSENTITY_SET_ISPRELOAD_OFFSET UNITYSDK_OFFSET(0x1CE05D10)
#define NAP_NAPECS_ECSENTITY_SET_ISSTATEDIRTY_OFFSET UNITYSDK_OFFSET(0x1CE061F0)
#define NAP_NAPECS_ECSENTITY_SET_ISVALIDBIT_OFFSET UNITYSDK_OFFSET(0x1CE06800)
#define NAP_NAPECS_ECSENTITY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE07EC0)
#define NAP_NAPECS_ECSENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE07E60)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntity_TypeDefinitionIndex = 36026;

	class EcsEntity : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::Nap::NapECS::EcsComponent*>** StaticGet_s_ClassIdComparison()
		{
			return (::System::Comparison_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity_TypeDefinitionIndex)->GetStaticField(0x2B6E0);
		}
		static ::System::Predicate_1<::Nap::NapECS::EcsComponent*>** StaticGet_s_NullPredicate()
		{
			return (::System::Predicate_1<::Nap::NapECS::EcsComponent*>**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity_TypeDefinitionIndex)->GetStaticField(0x2B6E8);
		}
		::Nap::NapECS::EcsArchetype* _archetype; // 0x10
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* _componentList; // 0x18
		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* _preloadingComponentList; // 0x20
		::System::String* _entityName; // 0x28
		::System::Int32 _indexInArchetype; // 0x30
		::System::UInt32 _id; // 0x34
		::System::Boolean _isDebugPause; // 0x38
		::System::Byte _entityFlags; // 0x39
		::System::Byte _entityState; // 0x3A
		::System::Boolean editorFoldout; // 0x3B

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY__CCTOR_OFFSET))();
		}

		::System::UInt32 get_entityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ENTITYID_OFFSET))(this);
		}

		::System::UInt32 get_id()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ID_OFFSET))(this);
		}

		::Nap::NapECS::ComponentMask& get_Mask()
		{
			return ((::Nap::NapECS::ComponentMask&(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_MASK_OFFSET))(this);
		}

		::Nap::NapECS::EcsWorld* get_RefWorld()
		{
			return ((::Nap::NapECS::EcsWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_REFWORLD_OFFSET))(this);
		}

		::System::String* get_EntityName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ENTITYNAME_OFFSET))(this);
		}

		::System::Void set_EntityName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ENTITYNAME_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntityOnPreReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADY_OFFSET))(this);
		}

		::System::Void set_IsEntityOnPreReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntityOnReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADY_OFFSET))(this);
		}

		::System::Void set_IsEntityOnReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsEntitySendReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADY_OFFSET))(this);
		}

		::System::Void set_IsEntitySendReady(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADY_OFFSET))(this, value);
		}

		::System::Boolean get_IsPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISPAUSE_OFFSET))(this);
		}

		::System::Void set_IsPause(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISPAUSE_OFFSET))(this, value);
		}

		::System::Boolean get_IsDebugPause()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISDEBUGPAUSE_OFFSET))(this);
		}

		::System::Boolean get_IsPreload()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISPRELOAD_OFFSET))(this);
		}

		::System::Void set_IsPreload(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISPRELOAD_OFFSET))(this, value);
		}

		::System::Void EnableCustomMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ENABLECUSTOMMASK_OFFSET))(this, mask);
		}

		::System::Void DisableCustomMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_DISABLECUSTOMMASK_OFFSET))(this, mask);
		}

		::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* get_componentList()
		{
			return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_COMPONENTLIST_OFFSET))(this);
		}

		::Nap::NapECS::EcsArchetype* get_Archetype()
		{
			return ((::Nap::NapECS::EcsArchetype*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ARCHETYPE_OFFSET))(this);
		}

		::Nap::NapECS::EcsEntity* Init(::Nap::NapECS::EcsWorld* ecsWorld)
		{
			return ((::Nap::NapECS::EcsEntity*(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_INIT_OFFSET))(this, ecsWorld);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISVALID_OFFSET))(this);
		}

		::System::Boolean IsRemoving()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISREMOVING_OFFSET))(this);
		}

		::System::Boolean IsToBeRemoved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISTOBEREMOVED_OFFSET))(this);
		}

		::System::Boolean IsInStateMask(::System::Byte mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISINSTATEMASK_OFFSET))(this, mask);
		}

		::System::Void AddStateMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ADDSTATEMASK_OFFSET))(this, mask);
		}

		::System::Void RemoveStateMask(::System::Byte mask)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_REMOVESTATEMASK_OFFSET))(this, mask);
		}

		::System::Boolean IsRunnable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ISRUNNABLE_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_RESET_OFFSET))(this);
		}

		::Nap::NapECS::EcsComponent* GetComponent(::System::Int32 classID)
		{
			return ((::Nap::NapECS::EcsComponent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GETCOMPONENT_OFFSET))(this, classID);
		}

		::Nap::NapECS::EcsDataCompScopeWriter GetStructCompWriter()
		{
			return ((::Nap::NapECS::EcsDataCompScopeWriter(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GETSTRUCTCOMPWRITER_OFFSET))(this);
		}

		::System::Void AddPreloadComponent(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ADDPRELOADCOMPONENT_OFFSET))(this, component);
		}

		::System::Void ClearPreloadComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_CLEARPRELOADCOMPONENT_OFFSET))(this);
		}

		::System::Boolean HasComponent(::System::Int32 classID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_HASCOMPONENT_OFFSET))(this, classID);
		}

		::System::Boolean HasAllComponents(::Nap::NapECS::ComponentMask& componentMask)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::ComponentMask&))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_HASALLCOMPONENTS_OFFSET))(this, componentMask);
		}

		::System::Void OnUpdateArchetype(::Nap::NapECS::ComponentMask& inNewCompMask, ::System::Boolean needSortCompList, ::System::Boolean needClearCompList)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::ComponentMask&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONUPDATEARCHETYPE_OFFSET))(this, inNewCompMask, needSortCompList, needClearCompList);
		}

		::System::Void OnAddComponent(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONADDCOMPONENT_OFFSET))(this, component);
		}

		::System::Void OnRemoveComponent(::Nap::NapECS::EcsComponent* component)
		{
			return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONREMOVECOMPONENT_OFFSET))(this, component);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONDESTROY_OFFSET))(this);
		}

		::System::Void MarkArchetypeSingleDataWrite(::System::Boolean write)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_MARKARCHETYPESINGLEDATAWRITE_OFFSET))(this, write);
		}

		::System::Void OnClean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_ONCLEAN_OFFSET))(this);
		}

		static ::System::Boolean GetBit(::System::Byte flags, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::Byte, ::System::Int32))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GETBIT_OFFSET))(flags, index);
		}

		static ::System::Void SetBit(::System::Byte& flags, ::System::Int32 index, ::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Byte&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SETBIT_OFFSET))(flags, index, value);
		}

		::System::Boolean get_isPauseBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISPAUSEBIT_OFFSET))(this);
		}

		::System::Void set_isPauseBit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISPAUSEBIT_OFFSET))(this, value);
		}

		::System::Boolean get_isPreloadBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISPRELOADBIT_OFFSET))(this);
		}

		::System::Void set_isPreloadBit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISPRELOADBIT_OFFSET))(this, value);
		}

		::System::Boolean get_isEntityOnReadyBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYONREADYBIT_OFFSET))(this);
		}

		::System::Void set_isEntityOnReadyBit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYONREADYBIT_OFFSET))(this, value);
		}

		::System::Boolean get_IsStateDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISSTATEDIRTY_OFFSET))(this);
		}

		::System::Void set_IsStateDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISSTATEDIRTY_OFFSET))(this, value);
		}

		::System::Boolean get_isValidBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISVALIDBIT_OFFSET))(this);
		}

		::System::Void set_isValidBit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISVALIDBIT_OFFSET))(this, value);
		}

		::System::Boolean get_isEntitySendReadyBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYSENDREADYBIT_OFFSET))(this);
		}

		::System::Void set_isEntitySendReadyBit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYSENDREADYBIT_OFFSET))(this, value);
		}

		::System::Boolean get_isEntityOnPreReadyBit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_GET_ISENTITYONPREREADYBIT_OFFSET))(this);
		}

		::System::Void set_isEntityOnPreReadyBit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY_SET_ISENTITYONPREREADYBIT_OFFSET))(this, value);
		}
	};
}
