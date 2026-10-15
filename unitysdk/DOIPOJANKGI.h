#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOIPOJANKGI;
class HNBOHDBLMBE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOIPOJANKGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E202580)
#define DOIPOJANKGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E202880)
#define DOIPOJANKGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E202100)
#define DOIPOJANKGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E202050)
#define DOIPOJANKGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E202000)
#define DOIPOJANKGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2022E0)
#define DOIPOJANKGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E202160)
#define DOIPOJANKGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E202400)
#define DOIPOJANKGI_GOAHOGGOLOJ_OFFSET UNITYSDK_OFFSET(0x1E202150)
#define DOIPOJANKGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E201F90)
#define DOIPOJANKGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2026C0)
#define DOIPOJANKGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E202620)
#define DOIPOJANKGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E201FF0)
#define DOIPOJANKGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E202470)
#define DOIPOJANKGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2024D0)

inline static constexpr unsigned int DOIPOJANKGI_TypeDefinitionIndex = 28691;

	class DOIPOJANKGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* BDGHBBABABH; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_HPDECJBEECG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DOIPOJANKGI")->GetStaticField(0x41F90);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOIPOJANKGI")->GetStaticField(0x41F98);
		}

		// static const ::System::Object OIDEIBKKMCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOIPOJANKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIPOJANKGI*))((::PBYTE)hIl2Cpp + DOIPOJANKGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOIPOJANKGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOIPOJANKGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOIPOJANKGI* Clone()
		{
			return ((::DOIPOJANKGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>* GOAHOGGOLOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HNBOHDBLMBE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_GOAHOGGOLOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOIPOJANKGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOIPOJANKGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOIPOJANKGI*))((::PBYTE)hIl2Cpp + DOIPOJANKGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOIPOJANKGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOIPOJANKGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOIPOJANKGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOIPOJANKGI*))((::PBYTE)hIl2Cpp + DOIPOJANKGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOIPOJANKGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
