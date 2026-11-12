#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HINIJKGDDBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HINIJKGDDBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F899FC0)
#define HINIJKGDDBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F89A280)
#define HINIJKGDDBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F899B40)
#define HINIJKGDDBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F899AB0)
#define HINIJKGDDBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F899A60)
#define HINIJKGDDBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F899CC0)
#define HINIJKGDDBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F899BA0)
#define HINIJKGDDBI_FMGHOGEBEJJ_OFFSET UNITYSDK_OFFSET(0x1F899B90)
#define HINIJKGDDBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F899DB0)
#define HINIJKGDDBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8999F0)
#define HINIJKGDDBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F89A0B0)
#define HINIJKGDDBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F89A060)
#define HINIJKGDDBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F899A50)
#define HINIJKGDDBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F899EB0)
#define HINIJKGDDBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F899F10)

inline static constexpr unsigned int HINIJKGDDBI_TypeDefinitionIndex = 30731;

	class HINIJKGDDBI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DAJAAAPJPNE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HINIJKGDDBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HINIJKGDDBI*>**)UnitySDK::FromName("", "HINIJKGDDBI")->GetStaticField(0x32990);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JCOLJGNIILJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HINIJKGDDBI")->GetStaticField(0x32998);
		}

		// static const ::System::Object KKEFDKAOBNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HINIJKGDDBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HINIJKGDDBI*))((::PBYTE)hIl2Cpp + HINIJKGDDBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HINIJKGDDBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HINIJKGDDBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HINIJKGDDBI*>*(*)())((::PBYTE)hIl2Cpp + HINIJKGDDBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HINIJKGDDBI* Clone()
		{
			return ((::HINIJKGDDBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMGHOGEBEJJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_FMGHOGEBEJJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HINIJKGDDBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HINIJKGDDBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HINIJKGDDBI*))((::PBYTE)hIl2Cpp + HINIJKGDDBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HINIJKGDDBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HINIJKGDDBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HINIJKGDDBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HINIJKGDDBI*))((::PBYTE)hIl2Cpp + HINIJKGDDBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HINIJKGDDBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
