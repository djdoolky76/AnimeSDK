#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHLGAPIIKCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHLGAPIIKCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E38FBF0)
#define FHLGAPIIKCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E38FC90)
#define FHLGAPIIKCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E38F8E0)
#define FHLGAPIIKCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E38F8B0)
#define FHLGAPIIKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E38F8A0)
#define FHLGAPIIKCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E38F9F0)
#define FHLGAPIIKCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E38F920)
#define FHLGAPIIKCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E38FB50)
#define FHLGAPIIKCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E38F860)
#define FHLGAPIIKCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E38FC40)
#define FHLGAPIIKCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E38FC10)
#define FHLGAPIIKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E38F890)
#define FHLGAPIIKCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E38FB80)
#define FHLGAPIIKCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E38FBE0)

	class FHLGAPIIKCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FHLGAPIIKCA")->GetStaticField(0x5F880);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHLGAPIIKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLGAPIIKCA*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FHLGAPIIKCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHLGAPIIKCA* Clone()
		{
			return ((::FHLGAPIIKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHLGAPIIKCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHLGAPIIKCA*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHLGAPIIKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHLGAPIIKCA*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHLGAPIIKCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
