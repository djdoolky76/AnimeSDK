#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace IFix::Core { class NewFieldInfo; }
namespace IFix::Core { class VirtualMachine; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class FieldInfo; }

#define IFIX_CORE_EVALUATIONSTACKOPERATION_MGET_OFFSET UNITYSDK_OFFSET(0x1E4126E0)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_MSET_OFFSET UNITYSDK_OFFSET(0x1E412B70)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_PUSHOBJECT_OFFSET UNITYSDK_OFFSET(0x1E410290)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_TOOBJECT_OFFSET UNITYSDK_OFFSET(0x1E40F800)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_UNBOXPRIMITIVE_OFFSET UNITYSDK_OFFSET(0x1E412110)
#define IFIX_CORE_EVALUATIONSTACKOPERATION_UPDATEREFERENCE_OFFSET UNITYSDK_OFFSET(0x1E411870)

namespace IFix::Core
{
	inline static constexpr unsigned int EvaluationStackOperation_TypeDefinitionIndex = 6953;

	class EvaluationStackOperation : public ::System::Object
	{
	public:
		static ::System::Void UnboxPrimitive(::PVOID evaluationStackPointer, ::System::Object* obj, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_UNBOXPRIMITIVE_OFFSET))(evaluationStackPointer, obj, type);
		}

		static ::System::Object* mGet(::System::Boolean isArray, ::System::Object* root, ::System::Int32 layer, ::Il2CppArray<::System::Int32>* fieldIdList, ::Il2CppArray<::System::Reflection::FieldInfo*>* fieldInfos, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* newFieldInfos)
		{
			return ((::System::Object*(*)(::System::Boolean, ::System::Object*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_MGET_OFFSET))(isArray, root, layer, fieldIdList, fieldInfos, newFieldInfos);
		}

		static ::System::Void mSet(::System::Boolean isArray, ::System::Object* root, ::System::Object* val, ::System::Int32 layer, ::Il2CppArray<::System::Int32>* fieldIdList, ::Il2CppArray<::System::Reflection::FieldInfo*>* fieldInfos, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>* newFieldInfos)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Object*, ::System::Object*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Reflection::FieldInfo*>*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::IFix::Core::NewFieldInfo*>*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_MSET_OFFSET))(isArray, root, val, layer, fieldIdList, fieldInfos, newFieldInfos);
		}

		static ::System::Object* ToObject(::PVOID evaluationStackBase, ::PVOID evaluationStackPointer, ::Il2CppArray<::System::Object*>* managedStack, ::System::Type* type, ::IFix::Core::VirtualMachine* virtualMachine, ::System::Boolean valueTypeClone)
		{
			return ((::System::Object*(*)(::PVOID, ::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Type*, ::IFix::Core::VirtualMachine*, ::System::Boolean))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_TOOBJECT_OFFSET))(evaluationStackBase, evaluationStackPointer, managedStack, type, virtualMachine, valueTypeClone);
		}

		static ::System::Void PushObject(::PVOID evaluationStackBase, ::PVOID evaluationStackPointer, ::Il2CppArray<::System::Object*>* managedStack, ::System::Object* obj, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_PUSHOBJECT_OFFSET))(evaluationStackBase, evaluationStackPointer, managedStack, obj, type);
		}

		static ::System::Void UpdateReference(::PVOID evaluationStackBase, ::PVOID evaluationStackPointer, ::Il2CppArray<::System::Object*>* managedStack, ::System::Object* obj, ::IFix::Core::VirtualMachine* virtualMachine, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::Il2CppArray<::System::Object*>*, ::System::Object*, ::IFix::Core::VirtualMachine*, ::System::Type*))((::PBYTE)hIl2Cpp + IFIX_CORE_EVALUATIONSTACKOPERATION_UPDATEREFERENCE_OFFSET))(evaluationStackBase, evaluationStackPointer, managedStack, obj, virtualMachine, type);
		}
	};
}
