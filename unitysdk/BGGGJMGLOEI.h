#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGGGJMGLOEI;
class MAOINJAJOEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGGGJMGLOEI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA769D0)
#define BGGGJMGLOEI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA76CD0)
#define BGGGJMGLOEI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA765B0)
#define BGGGJMGLOEI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA76500)
#define BGGGJMGLOEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA764B0)
#define BGGGJMGLOEI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA76730)
#define BGGGJMGLOEI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA765F0)
#define BGGGJMGLOEI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA76850)
#define BGGGJMGLOEI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA76470)
#define BGGGJMGLOEI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA76B10)
#define BGGGJMGLOEI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA76A70)
#define BGGGJMGLOEI_MPHIMCMBJGC_OFFSET UNITYSDK_OFFSET(0x1EA765E0)
#define BGGGJMGLOEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA764A0)
#define BGGGJMGLOEI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA768C0)
#define BGGGJMGLOEI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA76920)

inline static constexpr unsigned int BGGGJMGLOEI_TypeDefinitionIndex = 31946;

	class BGGGJMGLOEI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MAOINJAJOEC*>* JIHOHBEMIID; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::MAOINJAJOEC*>** StaticGet_LCOCPCGLFKF()
		{
			return (::Google::Protobuf::FieldCodec_1<::MAOINJAJOEC*>**)UnitySDK::FromName("", "BGGGJMGLOEI")->GetStaticField(0x42C90);
		}

		static ::Google::Protobuf::MessageParser_1<::BGGGJMGLOEI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGGGJMGLOEI*>**)UnitySDK::FromName("", "BGGGJMGLOEI")->GetStaticField(0x42C98);
		}

		// static const ::System::Object HILCNCKAGFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGGGJMGLOEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGGJMGLOEI*))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGGGJMGLOEI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGGGJMGLOEI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGGGJMGLOEI*>*(*)())((::PBYTE)hIl2Cpp + BGGGJMGLOEI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGGGJMGLOEI* Clone()
		{
			return ((::BGGGJMGLOEI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MAOINJAJOEC*>* MPHIMCMBJGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MAOINJAJOEC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_MPHIMCMBJGC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGGGJMGLOEI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGGGJMGLOEI*))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGGGJMGLOEI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGGGJMGLOEI*))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGGGJMGLOEI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
