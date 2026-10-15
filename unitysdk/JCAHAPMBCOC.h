#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCAHAPMBCOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCAHAPMBCOC_BICHBENFBEJ_OFFSET UNITYSDK_OFFSET(0x1E6FE0D0)
#define JCAHAPMBCOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FE500)
#define JCAHAPMBCOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FE7C0)
#define JCAHAPMBCOC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FE080)
#define JCAHAPMBCOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FDFF0)
#define JCAHAPMBCOC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDFA0)
#define JCAHAPMBCOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FE200)
#define JCAHAPMBCOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FE0E0)
#define JCAHAPMBCOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FE2F0)
#define JCAHAPMBCOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6FDF30)
#define JCAHAPMBCOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FE5F0)
#define JCAHAPMBCOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FE5A0)
#define JCAHAPMBCOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FDF90)
#define JCAHAPMBCOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FE3F0)
#define JCAHAPMBCOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FE450)

inline static constexpr unsigned int JCAHAPMBCOC_TypeDefinitionIndex = 30714;

	class JCAHAPMBCOC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PKMEKKCJMLN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JCAHAPMBCOC")->GetStaticField(0x5D5B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AGBBLGGNKMP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JCAHAPMBCOC")->GetStaticField(0x5D5B8);
		}

		// static const ::System::Object NHMOCEONMFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCAHAPMBCOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCAHAPMBCOC*))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCAHAPMBCOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JCAHAPMBCOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCAHAPMBCOC* Clone()
		{
			return ((::JCAHAPMBCOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BICHBENFBEJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_BICHBENFBEJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCAHAPMBCOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCAHAPMBCOC*))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCAHAPMBCOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCAHAPMBCOC*))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCAHAPMBCOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
