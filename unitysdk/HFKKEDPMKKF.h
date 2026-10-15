#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HFKKEDPMKKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFKKEDPMKKF_ADHJDJICGAH_OFFSET UNITYSDK_OFFSET(0x1E56D9B0)
#define HFKKEDPMKKF_AKBNGOCLOCI_OFFSET UNITYSDK_OFFSET(0x1E56D9D0)
#define HFKKEDPMKKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E56DE60)
#define HFKKEDPMKKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E56E1B0)
#define HFKKEDPMKKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E56D960)
#define HFKKEDPMKKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E56D8D0)
#define HFKKEDPMKKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E56D880)
#define HFKKEDPMKKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E56DB10)
#define HFKKEDPMKKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E56D9E0)
#define HFKKEDPMKKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E56DC00)
#define HFKKEDPMKKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E56D810)
#define HFKKEDPMKKF_MBHDGNNCJGH_OFFSET UNITYSDK_OFFSET(0x1E56D9C0)
#define HFKKEDPMKKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E56DFE0)
#define HFKKEDPMKKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E56DF90)
#define HFKKEDPMKKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E56D870)
#define HFKKEDPMKKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E56DD00)
#define HFKKEDPMKKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E56DD60)

	class HFKKEDPMKKF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MFJDMBIHNKB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 CIIPNEBKCLI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HFKKEDPMKKF")->GetStaticField(0x35A40);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EBOHODABBGB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HFKKEDPMKKF")->GetStaticField(0x35A48);
		}

		// static const ::System::Object CPHGFKFOKAF; // 0x0
		// static const ::System::Object GOBJOHKBCFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFKKEDPMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HFKKEDPMKKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFKKEDPMKKF* Clone()
		{
			return ((::HFKKEDPMKKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADHJDJICGAH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_ADHJDJICGAH_OFFSET))(this);
		}

		::System::UInt32 MBHDGNNCJGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_MBHDGNNCJGH_OFFSET))(this);
		}

		::System::Void AKBNGOCLOCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_AKBNGOCLOCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFKKEDPMKKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFKKEDPMKKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFKKEDPMKKF*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFKKEDPMKKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
