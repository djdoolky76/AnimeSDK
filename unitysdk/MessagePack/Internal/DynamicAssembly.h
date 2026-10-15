#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/TypeAttributes.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Immutable { class ImmutableHashSet; }
namespace System::Reflection { class AssemblyName; }
namespace System::Reflection::Emit { class AssemblyBuilder; }
namespace System::Reflection::Emit { class ModuleBuilder; }
namespace System::Reflection::Emit { class TypeBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB8B6A0)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8B620)
#define MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET UNITYSDK_OFFSET(0x1BB8B670)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicAssembly_TypeDefinitionIndex = 7290;

	class DynamicAssembly : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ModuleBuilder* moduleBuilder; // 0x10
		::System::Reflection::Emit::AssemblyBuilder* assemblyBuilder; // 0x18
		static ::System::Boolean* StaticGet_AvoidDynamicCode()
		{
			return (::System::Boolean*)UnitySDK::FromName("MessagePack.Internal", "DynamicAssembly")->GetStaticField(0x82D0);
		}

		::System::Void _ctor(::System::String* a1, ::System::Collections::Immutable::ImmutableHashSet* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Immutable::ImmutableHashSet*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_CCTOR_OFFSET))();
		}

		::System::Reflection::Emit::TypeBuilder* DefineType(::System::String* a1, ::System::Reflection::TypeAttributes a2, ::System::Type* a3, ::Il2CppArray<::System::Type*>* a4)
		{
			return ((::System::Reflection::Emit::TypeBuilder*(*)(::PVOID, ::System::String*, ::System::Reflection::TypeAttributes, ::System::Type*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICASSEMBLY_DEFINETYPE_OFFSET))(this, a1, a2, a3, a4);
		}

	};
}
