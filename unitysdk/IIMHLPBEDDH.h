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

#define IIMHLPBEDDH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E65E330)
#define IIMHLPBEDDH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E65E6E0)
#define IIMHLPBEDDH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E65DE90)
#define IIMHLPBEDDH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E65DD60)
#define IIMHLPBEDDH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E65DCD0)
#define IIMHLPBEDDH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E65DF60)
#define IIMHLPBEDDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E65DF00)
#define IIMHLPBEDDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E65E0B0)
#define IIMHLPBEDDH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E65DC60)
#define IIMHLPBEDDH_KAOCPHFNPOE_OFFSET UNITYSDK_OFFSET(0x1E65DEE0)
#define IIMHLPBEDDH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E65E4C0)
#define IIMHLPBEDDH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E65E410)
#define IIMHLPBEDDH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E65DCC0)
#define IIMHLPBEDDH_PCEFJAAMPNO_OFFSET UNITYSDK_OFFSET(0x1E65DEF0)
#define IIMHLPBEDDH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E65E1F0)
#define IIMHLPBEDDH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E65E250)

inline static constexpr unsigned int IIMHLPBEDDH_TypeDefinitionIndex = 27715;

	class IIMHLPBEDDH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NIJHCCNMEGA*>* JMAKOGFJONL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAENICGLFEO; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::NIJHCCNMEGA*>** StaticGet_MGLPOKJOOMC()
		{
			return (::Google::Protobuf::FieldCodec_1<::NIJHCCNMEGA*>**)UnitySDK::FromName("", "IIMHLPBEDDH")->GetStaticField(0x4F380);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BKNGLEJHAMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IIMHLPBEDDH")->GetStaticField(0x4F388);
		}

		static ::Google::Protobuf::MessageParser_1<::IIMHLPBEDDH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IIMHLPBEDDH*>**)UnitySDK::FromName("", "IIMHLPBEDDH")->GetStaticField(0x4F390);
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
