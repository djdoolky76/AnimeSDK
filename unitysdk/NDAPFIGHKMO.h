#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NDAPFIGHKMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NDAPFIGHKMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202F99F0)
#define NDAPFIGHKMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F9A90)
#define NDAPFIGHKMO_CLONE_OFFSET UNITYSDK_OFFSET(0x202F9690)
#define NDAPFIGHKMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202F9660)
#define NDAPFIGHKMO_CTOR_OFFSET UNITYSDK_OFFSET(0x202F9650)
#define NDAPFIGHKMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202F97F0)
#define NDAPFIGHKMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x202F9700)
#define NDAPFIGHKMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202F9950)
#define NDAPFIGHKMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202F95E0)
#define NDAPFIGHKMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202F9A40)
#define NDAPFIGHKMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202F9A10)
#define NDAPFIGHKMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202F9640)
#define NDAPFIGHKMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202F9980)
#define NDAPFIGHKMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x202F99E0)

inline static constexpr unsigned int NDAPFIGHKMO_TypeDefinitionIndex = 30558;

	class NDAPFIGHKMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NDAPFIGHKMO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDAPFIGHKMO*>**)UnitySDK::FromName("", "NDAPFIGHKMO")->GetStaticField(0x5D590);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDAPFIGHKMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDAPFIGHKMO*))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDAPFIGHKMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDAPFIGHKMO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDAPFIGHKMO*>*(*)())((::PBYTE)hIl2Cpp + NDAPFIGHKMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDAPFIGHKMO* Clone()
		{
			return ((::NDAPFIGHKMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDAPFIGHKMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDAPFIGHKMO*))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDAPFIGHKMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDAPFIGHKMO*))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDAPFIGHKMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
