#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace BDC595893C6EE433 { class A35817262A53CA5C; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Reflection { class FieldInfo; }
template <typename T> class FAC5EDF6DB9C4EFE;

#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ANYPROPERTIESISOVERRIDDEN_OFFSET UNITYSDK_OFFSET(0x403D010)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_FINDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x403D0C0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x403D580)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x16BD320)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x403DF20)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x403D640)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x403D650)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x403D760)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_OVERRIDE_OFFSET UNITYSDK_OFFSET(0x403D960)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_RELEASE_OFFSET UNITYSDK_OFFSET(0x403DAD0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET UNITYSDK_OFFSET(0x403DB90)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETOVERRIDESTO_OFFSET UNITYSDK_OFFSET(0x403DBA0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x16BD3B0)
#define UNITYENGINE_RENDERING_VOLUMECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x403DE70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VolumeComponent_TypeDefinitionIndex = 20363;

	class VolumeComponent : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean active; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* _displayName_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::BDC595893C6EE433::A35817262A53CA5C*>* parameterList; // 0x28
		::FAC5EDF6DB9C4EFE<::BDC595893C6EE433::A35817262A53CA5C*>* m_ParameterReadOnlyCollection; // 0x30

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GETHASHCODE_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT__CTOR_OFFSET))(this);
		}

		::FAC5EDF6DB9C4EFE<::BDC595893C6EE433::A35817262A53CA5C*>* get_parameters()
		{
			return ((::FAC5EDF6DB9C4EFE<::BDC595893C6EE433::A35817262A53CA5C*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_PARAMETERS_OFFSET))(this);
		}

		static ::System::Void FindParameters(::System::Object* E1B624472530B0E4, ::System::Collections::Generic::List_1<::BDC595893C6EE433::A35817262A53CA5C*>* B652C74F012A9C5B, ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>* E203455021A9D06D)
		{
			return ((::System::Void(*)(::System::Object*, ::System::Collections::Generic::List_1<::BDC595893C6EE433::A35817262A53CA5C*>*, ::System::Func_2<::System::Reflection::FieldInfo*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_FINDPARAMETERS_OFFSET))(E1B624472530B0E4, B652C74F012A9C5B, E203455021A9D06D);
		}

		::System::Boolean AnyPropertiesIsOverridden()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ANYPROPERTIESISOVERRIDDEN_OFFSET))(this);
		}

		::System::Void set_displayName(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SET_DISPLAYNAME_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void SetAllOverridesTo(::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETALLOVERRIDESTO_OFFSET))(this, E5EB06E4FD2C32F7);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_RELEASE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONENABLE_OFFSET))(this);
		}

		::System::Void Override(::UnityEngine::Rendering::VolumeComponent* E5EB06E4FD2C32F7, ::System::Single AD659F8823DB7803)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeComponent*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_OVERRIDE_OFFSET))(this, E5EB06E4FD2C32F7, AD659F8823DB7803);
		}

		::System::String* get_displayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_ONDESTROY_OFFSET))(this);
		}

		::System::Void SetOverridesTo(::System::Collections::Generic::IEnumerable_1<::BDC595893C6EE433::A35817262A53CA5C*>* A2799F3ECCAC46F7, ::System::Boolean E5EB06E4FD2C32F7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BDC595893C6EE433::A35817262A53CA5C*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUMECOMPONENT_SETOVERRIDESTO_OFFSET))(this, A2799F3ECCAC46F7, E5EB06E4FD2C32F7);
		}
	};
}
