#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MemberAccessException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MISSINGMEMBEREXCEPTION_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D402DD0)
#define SYSTEM_MISSINGMEMBEREXCEPTION_CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D402ED0)
#define SYSTEM_MISSINGMEMBEREXCEPTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D403380)
#define SYSTEM_MISSINGMEMBEREXCEPTION_FORMATSIGNATURE_OFFSET UNITYSDK_OFFSET(0x1D4032B0)
#define SYSTEM_MISSINGMEMBEREXCEPTION_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1D403420)
#define SYSTEM_MISSINGMEMBEREXCEPTION_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1D403150)

namespace System
{
	inline static constexpr unsigned int MissingMemberException_TypeDefinitionIndex = 300;

	class MissingMemberException : public ::System::MemberAccessException
	{
	public:
		::System::String* MemberName; // 0x88
		::System::String* ClassName; // 0x90
		::Il2CppArray<::System::Byte>* Signature; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_GET_MESSAGE_OFFSET))(this);
		}

		static ::System::String* FormatSignature(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_FORMATSIGNATURE_OFFSET))(a1);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MISSINGMEMBEREXCEPTION_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}

	};
}
