#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BHCFGOHFLIO;
class EFGIHHJGCFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BHCFGOHFLIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF4470)
#define BHCFGOHFLIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF47F0)
#define BHCFGOHFLIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF3FB0)
#define BHCFGOHFLIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF3F20)
#define BHCFGOHFLIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3EE0)
#define BHCFGOHFLIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF4160)
#define BHCFGOHFLIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF4010)
#define BHCFGOHFLIO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DDF3FF0)
#define BHCFGOHFLIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF4290)
#define BHCFGOHFLIO_INJLCGGALGC_OFFSET UNITYSDK_OFFSET(0x1DDF4000)
#define BHCFGOHFLIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF3EA0)
#define BHCFGOHFLIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF4620)
#define BHCFGOHFLIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF4580)
#define BHCFGOHFLIO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DDF3FE0)
#define BHCFGOHFLIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3ED0)
#define BHCFGOHFLIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF4300)
#define BHCFGOHFLIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF4360)

	class BHCFGOHFLIO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>* EFHEPAJIOHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_NLAAEADFOIK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BHCFGOHFLIO")->GetStaticField(0x45920);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BHCFGOHFLIO")->GetStaticField(0x45928);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDPIDBDJDLO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BHCFGOHFLIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHCFGOHFLIO*))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BHCFGOHFLIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BHCFGOHFLIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BHCFGOHFLIO* Clone()
		{
			return ((::BHCFGOHFLIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>* INJLCGGALGC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EFGIHHJGCFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_INJLCGGALGC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BHCFGOHFLIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHCFGOHFLIO*))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BHCFGOHFLIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHCFGOHFLIO*))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BHCFGOHFLIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
