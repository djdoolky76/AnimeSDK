#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOFMDBFHAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HIOFMDBFHAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E59F670)
#define HIOFMDBFHAG_CBCPEPFCJJJ_OFFSET UNITYSDK_OFFSET(0x1E59F310)
#define HIOFMDBFHAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E59F890)
#define HIOFMDBFHAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E59F2C0)
#define HIOFMDBFHAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E59F290)
#define HIOFMDBFHAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E59F280)
#define HIOFMDBFHAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E59F3F0)
#define HIOFMDBFHAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E59F320)
#define HIOFMDBFHAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E59F560)
#define HIOFMDBFHAG_GNOBKKJGDFB_OFFSET UNITYSDK_OFFSET(0x1E59F300)
#define HIOFMDBFHAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E59F240)
#define HIOFMDBFHAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E59F730)
#define HIOFMDBFHAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E59F700)
#define HIOFMDBFHAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E59F270)
#define HIOFMDBFHAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E59F590)
#define HIOFMDBFHAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E59F5F0)

inline static constexpr unsigned int HIOFMDBFHAG_TypeDefinitionIndex = 34473;

	class HIOFMDBFHAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHBDKFOEPCG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HIOFMDBFHAG")->GetStaticField(0x3ECA0);
		}

		// static const ::System::Object JHGGDOKKKHL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HIOFMDBFHAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOFMDBFHAG*))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIOFMDBFHAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HIOFMDBFHAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HIOFMDBFHAG* Clone()
		{
			return ((::HIOFMDBFHAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GNOBKKJGDFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_GNOBKKJGDFB_OFFSET))(this);
		}

		::System::Void CBCPEPFCJJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_CBCPEPFCJJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HIOFMDBFHAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOFMDBFHAG*))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HIOFMDBFHAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOFMDBFHAG*))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HIOFMDBFHAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
