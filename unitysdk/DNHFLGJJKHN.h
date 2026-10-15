#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNHFLGJJKHN;
class NMEGIPHFFDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DNHFLGJJKHN_BGAPBAMMAGK_OFFSET UNITYSDK_OFFSET(0x1E1C8E30)
#define DNHFLGJJKHN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C9280)
#define DNHFLGJJKHN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C9610)
#define DNHFLGJJKHN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C8DF0)
#define DNHFLGJJKHN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C8D00)
#define DNHFLGJJKHN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C8C80)
#define DNHFLGJJKHN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C8E70)
#define DNHFLGJJKHN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C8E40)
#define DNHFLGJJKHN_GCKCAEMBDNN_OFFSET UNITYSDK_OFFSET(0x1E1C8E20)
#define DNHFLGJJKHN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C8FC0)
#define DNHFLGJJKHN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C8C40)
#define DNHFLGJJKHN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C9410)
#define DNHFLGJJKHN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C9360)
#define DNHFLGJJKHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C8C70)
#define DNHFLGJJKHN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C9140)
#define DNHFLGJJKHN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C91A0)

inline static constexpr unsigned int DNHFLGJJKHN_TypeDefinitionIndex = 26669;

	class DNHFLGJJKHN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* OJFJBMMAHEJ; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* MEHJIOPJEIP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::NMEGIPHFFDA*>** StaticGet_GCHJHCOKFGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::NMEGIPHFFDA*>**)UnitySDK::FromName("", "DNHFLGJJKHN")->GetStaticField(0x36EE0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt64>** StaticGet_CNCBDIFDGOJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt64>**)UnitySDK::FromName("", "DNHFLGJJKHN")->GetStaticField(0x36EE8);
		}

		static ::Google::Protobuf::MessageParser_1<::DNHFLGJJKHN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DNHFLGJJKHN*>**)UnitySDK::FromName("", "DNHFLGJJKHN")->GetStaticField(0x36EF0);
		}

		// static const ::System::Object FPMLDEAOLBC; // 0x0
		// static const ::System::Object CMOMAELPCOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DNHFLGJJKHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DNHFLGJJKHN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DNHFLGJJKHN*>*(*)())((::PBYTE)hIl2Cpp + DNHFLGJJKHN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DNHFLGJJKHN* Clone()
		{
			return ((::DNHFLGJJKHN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* GCKCAEMBDNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_GCKCAEMBDNN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* BGAPBAMMAGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_BGAPBAMMAGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DNHFLGJJKHN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DNHFLGJJKHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNHFLGJJKHN*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DNHFLGJJKHN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
