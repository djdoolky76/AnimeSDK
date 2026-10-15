#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLNDMBMBNDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLNDMBMBNDC_BEGPKDAIOPO_OFFSET UNITYSDK_OFFSET(0x1DE7C950)
#define OLNDMBMBNDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE7CDA0)
#define OLNDMBMBNDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7D080)
#define OLNDMBMBNDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE7C910)
#define OLNDMBMBNDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE7C880)
#define OLNDMBMBNDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7C830)
#define OLNDMBMBNDC_EPFPLLOFFFB_OFFSET UNITYSDK_OFFSET(0x1DE7C940)
#define OLNDMBMBNDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE7CA70)
#define OLNDMBMBNDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE7C970)
#define OLNDMBMBNDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE7CB60)
#define OLNDMBMBNDC_IHNIBPDNHLF_OFFSET UNITYSDK_OFFSET(0x1DE7C960)
#define OLNDMBMBNDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE7C7F0)
#define OLNDMBMBNDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE7CED0)
#define OLNDMBMBNDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE7CE80)
#define OLNDMBMBNDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE7C820)
#define OLNDMBMBNDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE7CC60)
#define OLNDMBMBNDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE7CCC0)

inline static constexpr unsigned int OLNDMBMBNDC_TypeDefinitionIndex = 30324;

	class OLNDMBMBNDC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PPKCIGKABKD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 ECCMJBDHOBD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OLNDMBMBNDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLNDMBMBNDC*>**)UnitySDK::FromName("", "OLNDMBMBNDC")->GetStaticField(0x21180);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_JBEJEEFCCKI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OLNDMBMBNDC")->GetStaticField(0x21188);
		}

		// static const ::System::Object CEDDGAMLKJK; // 0x0
		// static const ::System::Object AKEFNAJMCCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLNDMBMBNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLNDMBMBNDC*))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLNDMBMBNDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLNDMBMBNDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLNDMBMBNDC*>*(*)())((::PBYTE)hIl2Cpp + OLNDMBMBNDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLNDMBMBNDC* Clone()
		{
			return ((::OLNDMBMBNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_CLONE_OFFSET))(this);
		}

		::System::UInt32 EPFPLLOFFFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_EPFPLLOFFFB_OFFSET))(this);
		}

		::System::Void BEGPKDAIOPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_BEGPKDAIOPO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IHNIBPDNHLF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_IHNIBPDNHLF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLNDMBMBNDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLNDMBMBNDC*))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLNDMBMBNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLNDMBMBNDC*))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLNDMBMBNDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
