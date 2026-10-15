#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMIJHCONFIH;
class KOFMGCNIMIN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GMIJHCONFIH_AFFFMINNBPK_OFFSET UNITYSDK_OFFSET(0x1E4D4BB0)
#define GMIJHCONFIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4D4FA0)
#define GMIJHCONFIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4D5280)
#define GMIJHCONFIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4D4B80)
#define GMIJHCONFIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4D4AF0)
#define GMIJHCONFIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4D4AB0)
#define GMIJHCONFIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4D4D00)
#define GMIJHCONFIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4D4BC0)
#define GMIJHCONFIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4D4E20)
#define GMIJHCONFIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4D4A70)
#define GMIJHCONFIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4D50E0)
#define GMIJHCONFIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4D5040)
#define GMIJHCONFIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4D4AA0)
#define GMIJHCONFIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4D4E90)
#define GMIJHCONFIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4D4EF0)

inline static constexpr unsigned int GMIJHCONFIH_TypeDefinitionIndex = 32872;

	class GMIJHCONFIH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KOFMGCNIMIN*>* JDLFCGELGAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_GFDIPJMHIPE()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GMIJHCONFIH")->GetStaticField(0x22060);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GMIJHCONFIH")->GetStaticField(0x22068);
		}

		// static const ::System::Object DDKAMGMEGCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GMIJHCONFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIJHCONFIH*))((::PBYTE)hIl2Cpp + GMIJHCONFIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMIJHCONFIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GMIJHCONFIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GMIJHCONFIH* Clone()
		{
			return ((::GMIJHCONFIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KOFMGCNIMIN*>* AFFFMINNBPK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KOFMGCNIMIN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_AFFFMINNBPK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GMIJHCONFIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GMIJHCONFIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GMIJHCONFIH*))((::PBYTE)hIl2Cpp + GMIJHCONFIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GMIJHCONFIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GMIJHCONFIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GMIJHCONFIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMIJHCONFIH*))((::PBYTE)hIl2Cpp + GMIJHCONFIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GMIJHCONFIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
