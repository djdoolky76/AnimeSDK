#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCAHAPMBCOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCAHAPMBCOC_BICHBENFBEJ_OFFSET UNITYSDK_OFFSET(0x20418D70)
#define JCAHAPMBCOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204191A0)
#define JCAHAPMBCOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x20419460)
#define JCAHAPMBCOC_CLONE_OFFSET UNITYSDK_OFFSET(0x20418D20)
#define JCAHAPMBCOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20418C90)
#define JCAHAPMBCOC_CTOR_OFFSET UNITYSDK_OFFSET(0x20418C40)
#define JCAHAPMBCOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20418EA0)
#define JCAHAPMBCOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x20418D80)
#define JCAHAPMBCOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20418F90)
#define JCAHAPMBCOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20418BD0)
#define JCAHAPMBCOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20419290)
#define JCAHAPMBCOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20419240)
#define JCAHAPMBCOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20418C30)
#define JCAHAPMBCOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20419090)
#define JCAHAPMBCOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x204190F0)

inline static constexpr unsigned int JCAHAPMBCOC_TypeDefinitionIndex = 31620;

	class JCAHAPMBCOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PKMEKKCJMLN; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AGBBLGGNKMP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JCAHAPMBCOC")->GetStaticField(0x5BE40);
		}

		static ::Google::Protobuf::MessageParser_1<::JCAHAPMBCOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JCAHAPMBCOC*>**)UnitySDK::FromName("", "JCAHAPMBCOC")->GetStaticField(0x5BE48);
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

		static ::Google::Protobuf::MessageParser_1<::JCAHAPMBCOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JCAHAPMBCOC*>*(*)())((::PBYTE)hIl2Cpp + JCAHAPMBCOC_JJGHOBBFNJD_OFFSET))();
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
