#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGLAJHMCJLL;
class JEGMGPOFHGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEGMGPOFHGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6EC500)
#define JEGMGPOFHGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6EC7E0)
#define JEGMGPOFHGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6EC0E0)
#define JEGMGPOFHGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6EC050)
#define JEGMGPOFHGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6EC010)
#define JEGMGPOFHGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6EC260)
#define JEGMGPOFHGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6EC120)
#define JEGMGPOFHGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6EC380)
#define JEGMGPOFHGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6EBFD0)
#define JEGMGPOFHGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6EC640)
#define JEGMGPOFHGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6EC5A0)
#define JEGMGPOFHGG_NFJKPKLLCOJ_OFFSET UNITYSDK_OFFSET(0x1E6EC110)
#define JEGMGPOFHGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6EC000)
#define JEGMGPOFHGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6EC3F0)
#define JEGMGPOFHGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6EC450)

inline static constexpr unsigned int JEGMGPOFHGG_TypeDefinitionIndex = 26498;

	class JEGMGPOFHGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FGLAJHMCJLL*>* OFPBAPDFGHJ; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::FGLAJHMCJLL*>** StaticGet_EMOIEMJDKHK()
		{
			return (::Google::Protobuf::FieldCodec_1<::FGLAJHMCJLL*>**)UnitySDK::FromName("", "JEGMGPOFHGG")->GetStaticField(0x5C5A0);
		}

		static ::Google::Protobuf::MessageParser_1<::JEGMGPOFHGG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEGMGPOFHGG*>**)UnitySDK::FromName("", "JEGMGPOFHGG")->GetStaticField(0x5C5A8);
		}

		// static const ::System::Object EAOPPMGOABD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEGMGPOFHGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGMGPOFHGG*))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEGMGPOFHGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEGMGPOFHGG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEGMGPOFHGG*>*(*)())((::PBYTE)hIl2Cpp + JEGMGPOFHGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEGMGPOFHGG* Clone()
		{
			return ((::JEGMGPOFHGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FGLAJHMCJLL*>* NFJKPKLLCOJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FGLAJHMCJLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_NFJKPKLLCOJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEGMGPOFHGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEGMGPOFHGG*))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEGMGPOFHGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGMGPOFHGG*))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEGMGPOFHGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
