#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
class NIJHCCNMEGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IIMHLPBEDDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F806270)
#define IIMHLPBEDDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F806620)
#define IIMHLPBEDDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F805DD0)
#define IIMHLPBEDDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F805CA0)
#define IIMHLPBEDDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F805C10)
#define IIMHLPBEDDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F805EA0)
#define IIMHLPBEDDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F805E40)
#define IIMHLPBEDDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F805FF0)
#define IIMHLPBEDDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F805BA0)
#define IIMHLPBEDDH_KAOCPHFNPOE_OFFSET UNITYSDK_OFFSET(0x1F805E20)
#define IIMHLPBEDDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F806400)
#define IIMHLPBEDDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F806350)
#define IIMHLPBEDDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F805C00)
#define IIMHLPBEDDH_PCEFJAAMPNO_OFFSET UNITYSDK_OFFSET(0x1F805E30)
#define IIMHLPBEDDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F806130)
#define IIMHLPBEDDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F806190)

inline static constexpr unsigned int IIMHLPBEDDH_TypeDefinitionIndex = 28246;

	class IIMHLPBEDDH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAENICGLFEO; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::NIJHCCNMEGA*>* JMAKOGFJONL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BKNGLEJHAMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IIMHLPBEDDH")->GetStaticField(0x46860);
		}

		static ::Google::Protobuf::MessageParser_1<::IIMHLPBEDDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIMHLPBEDDH*>**)UnitySDK::FromName("", "IIMHLPBEDDH")->GetStaticField(0x46868);
		}

		static ::Google::Protobuf::FieldCodec_1<::NIJHCCNMEGA*>** StaticGet_MGLPOKJOOMC()
		{
			return (::Google::Protobuf::FieldCodec_1<::NIJHCCNMEGA*>**)UnitySDK::FromName("", "IIMHLPBEDDH")->GetStaticField(0x46870);
		}

		// static const ::System::Object IIAPKIDPCDP; // 0x0
		// static const ::System::Object HDFDJHCLAHG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IIMHLPBEDDH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IIMHLPBEDDH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IIMHLPBEDDH*>*(*)())((::PBYTE)hIl2Cpp + IIMHLPBEDDH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IIMHLPBEDDH* Clone()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAOCPHFNPOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_KAOCPHFNPOE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NIJHCCNMEGA*>* PCEFJAAMPNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NIJHCCNMEGA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_PCEFJAAMPNO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IIMHLPBEDDH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IIMHLPBEDDH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
