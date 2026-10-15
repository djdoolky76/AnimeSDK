#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JODCPJNHFDL;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JODCPJNHFDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E79EB90)
#define JODCPJNHFDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E79EE30)
#define JODCPJNHFDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E79E650)
#define JODCPJNHFDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E79E5D0)
#define JODCPJNHFDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E79E580)
#define JODCPJNHFDL_EMMDKOFOHML_OFFSET UNITYSDK_OFFSET(0x1E79E6D0)
#define JODCPJNHFDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E79E840)
#define JODCPJNHFDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E79E730)
#define JODCPJNHFDL_FOJLLHHEOKN_OFFSET UNITYSDK_OFFSET(0x1E79E6E0)
#define JODCPJNHFDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E79E940)
#define JODCPJNHFDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E79E540)
#define JODCPJNHFDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E79ECA0)
#define JODCPJNHFDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E79EC60)
#define JODCPJNHFDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E79E570)
#define JODCPJNHFDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E79EA70)
#define JODCPJNHFDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E79EAD0)

inline static constexpr unsigned int JODCPJNHFDL_TypeDefinitionIndex = 32118;

	class JODCPJNHFDL : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* GLCCBMNONGA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JODCPJNHFDL")->GetStaticField(0x6CC30);
		}

		// static const ::System::Object JJLFJLHGOMJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JODCPJNHFDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JODCPJNHFDL*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JODCPJNHFDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JODCPJNHFDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JODCPJNHFDL* Clone()
		{
			return ((::JODCPJNHFDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* EMMDKOFOHML()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_EMMDKOFOHML_OFFSET))(this);
		}

		::System::Void FOJLLHHEOKN(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_FOJLLHHEOKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JODCPJNHFDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JODCPJNHFDL*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JODCPJNHFDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JODCPJNHFDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JODCPJNHFDL*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JODCPJNHFDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
