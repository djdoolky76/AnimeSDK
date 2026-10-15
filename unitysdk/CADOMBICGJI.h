#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CADOMBICGJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CADOMBICGJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0297A0)
#define CADOMBICGJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E029840)
#define CADOMBICGJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E029490)
#define CADOMBICGJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E029460)
#define CADOMBICGJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E029450)
#define CADOMBICGJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0295A0)
#define CADOMBICGJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0294D0)
#define CADOMBICGJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E029700)
#define CADOMBICGJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E029410)
#define CADOMBICGJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0297F0)
#define CADOMBICGJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0297C0)
#define CADOMBICGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E029440)
#define CADOMBICGJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E029730)
#define CADOMBICGJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E029790)

inline static constexpr unsigned int CADOMBICGJI_TypeDefinitionIndex = 26131;

	class CADOMBICGJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CADOMBICGJI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CADOMBICGJI*>**)UnitySDK::FromName("", "CADOMBICGJI")->GetStaticField(0x601A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CADOMBICGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADOMBICGJI*))((::PBYTE)hIl2Cpp + CADOMBICGJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CADOMBICGJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CADOMBICGJI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CADOMBICGJI*>*(*)())((::PBYTE)hIl2Cpp + CADOMBICGJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CADOMBICGJI* Clone()
		{
			return ((::CADOMBICGJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CADOMBICGJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CADOMBICGJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CADOMBICGJI*))((::PBYTE)hIl2Cpp + CADOMBICGJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CADOMBICGJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CADOMBICGJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CADOMBICGJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CADOMBICGJI*))((::PBYTE)hIl2Cpp + CADOMBICGJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CADOMBICGJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
