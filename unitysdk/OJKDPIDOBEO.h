#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OJKDPIDOBEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJKDPIDOBEO_AENLHLGIANN_OFFSET UNITYSDK_OFFSET(0x1DE5A880)
#define OJKDPIDOBEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE5AC40)
#define OJKDPIDOBEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE5AE00)
#define OJKDPIDOBEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE5A820)
#define OJKDPIDOBEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE5A7F0)
#define OJKDPIDOBEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5A7E0)
#define OJKDPIDOBEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE5A970)
#define OJKDPIDOBEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE5A890)
#define OJKDPIDOBEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE5AAF0)
#define OJKDPIDOBEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE5A7A0)
#define OJKDPIDOBEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE5ACA0)
#define OJKDPIDOBEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE5AC70)
#define OJKDPIDOBEO_MMKLJCAEGNM_OFFSET UNITYSDK_OFFSET(0x1DE5A870)
#define OJKDPIDOBEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE5A7D0)
#define OJKDPIDOBEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE5AB20)
#define OJKDPIDOBEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE5AB80)

inline static constexpr unsigned int OJKDPIDOBEO_TypeDefinitionIndex = 32537;

	class OJKDPIDOBEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BDCACOOKMFC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OJKDPIDOBEO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJKDPIDOBEO*>**)UnitySDK::FromName("", "OJKDPIDOBEO")->GetStaticField(0x1CB10);
		}

		// static const ::System::Object PIBNEIEPDNG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJKDPIDOBEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJKDPIDOBEO*))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJKDPIDOBEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJKDPIDOBEO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJKDPIDOBEO*>*(*)())((::PBYTE)hIl2Cpp + OJKDPIDOBEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJKDPIDOBEO* Clone()
		{
			return ((::OJKDPIDOBEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_CLONE_OFFSET))(this);
		}

		::System::Boolean MMKLJCAEGNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_MMKLJCAEGNM_OFFSET))(this);
		}

		::System::Void AENLHLGIANN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_AENLHLGIANN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJKDPIDOBEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJKDPIDOBEO*))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJKDPIDOBEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJKDPIDOBEO*))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJKDPIDOBEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
