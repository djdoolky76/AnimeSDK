#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JODCPJNHFDL;
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JODCPJNHFDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E771570)
#define JODCPJNHFDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E771810)
#define JODCPJNHFDL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E771030)
#define JODCPJNHFDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E770FB0)
#define JODCPJNHFDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E770F60)
#define JODCPJNHFDL_EMMDKOFOHML_OFFSET UNITYSDK_OFFSET(0x1E7710B0)
#define JODCPJNHFDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E771220)
#define JODCPJNHFDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E771110)
#define JODCPJNHFDL_FOJLLHHEOKN_OFFSET UNITYSDK_OFFSET(0x1E7710C0)
#define JODCPJNHFDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E771320)
#define JODCPJNHFDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E770F20)
#define JODCPJNHFDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E771680)
#define JODCPJNHFDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E771640)
#define JODCPJNHFDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E770F50)
#define JODCPJNHFDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E771450)
#define JODCPJNHFDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7714B0)

inline static constexpr unsigned int JODCPJNHFDL_TypeDefinitionIndex = 32118;

	class JODCPJNHFDL : public ::System::Object
	{
	public:
		::Google::Protobuf::ByteString* GLCCBMNONGA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JODCPJNHFDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JODCPJNHFDL*>**)UnitySDK::FromName("", "JODCPJNHFDL")->GetStaticField(0x68720);
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

		static ::Google::Protobuf::MessageParser_1<::JODCPJNHFDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JODCPJNHFDL*>*(*)())((::PBYTE)hIl2Cpp + JODCPJNHFDL_JJGHOBBFNJD_OFFSET))();
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
