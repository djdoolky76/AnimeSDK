#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Sirenix::Serialization
{
	inline static constexpr unsigned int BaseFormatter_1_TypeDefinitionIndex = 7457;

	template <typename T>
	class BaseFormatter_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_OnSerializingCallbacks()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_OnSerializedCallbacks()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_OnDeserializingCallbacks()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Object*>** StaticGet_OnDeserializedCallbacks()
		{
			return (::Il2CppArray<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_IsValueType()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ImplementsISerializationCallbackReceiver()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ImplementsIDeserializationCallback()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_ImplementsIObjectReference()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(BaseFormatter_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
