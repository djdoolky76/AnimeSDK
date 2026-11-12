#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::ComponentModel { class TypeDescriptor_MemberDescriptorComparer; }

#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_CCTOR_OFFSET UNITYSDK_OFFSET(0x202B38B0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x202B36D0)
#define SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_CTOR_OFFSET UNITYSDK_OFFSET(0x202B38A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int TypeDescriptor_MemberDescriptorComparer_TypeDefinitionIndex = 2640;

	class TypeDescriptor_MemberDescriptorComparer : public ::System::Object
	{
	public:
		static ::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer** StaticGet_Instance()
		{
			return (::System::ComponentModel::TypeDescriptor_MemberDescriptorComparer**)UnitySDK::FromName("System.ComponentModel", "MemberDescriptorComparer")->GetStaticField(0x2BAD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_CCTOR_OFFSET))();
		}

		::System::Int32 Compare(::System::Object* a1, ::System::Object* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_TYPEDESCRIPTOR_MEMBERDESCRIPTORCOMPARER_COMPARE_OFFSET))(this, a1, a2);
		}

	};
}
