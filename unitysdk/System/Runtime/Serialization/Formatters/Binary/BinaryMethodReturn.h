#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/MessageEnum.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A73A810)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A73A8A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_DUMP_OFFSET UNITYSDK_OFFSET(0x1A73ACE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_WRITE_OFFSET UNITYSDK_OFFSET(0x1A73A8B0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryMethodReturn_TypeDefinitionIndex = 1151;

	class BinaryMethodReturn : public ::System::Object
	{
	public:
		::System::Object* returnValue; // 0x10
		::System::Type* returnType; // 0x18
		::Il2CppArray<::System::Object*>* args; // 0x20
		::System::Object* callContext; // 0x28
		::Il2CppArray<::System::Type*>* argTypes; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum; // 0x38
		::System::Boolean bArgsPrimitive; // 0x3C
		static ::System::Object** StaticGet_instanceOfVoid()
		{
			return (::System::Object**)UnitySDK::FromName("System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn")->GetStaticField(0x19570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_WRITE_OFFSET))(this, a1);
		}

		::System::Void Dump()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYMETHODRETURN_DUMP_OFFSET))(this);
		}

	};
}
