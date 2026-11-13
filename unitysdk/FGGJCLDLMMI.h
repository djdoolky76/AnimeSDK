#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FGGJCLDLMMI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FGGJCLDLMMI_AIFJLACFEFH_OFFSET UNITYSDK_OFFSET(0x1F8C2EF0)
#define FGGJCLDLMMI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8C3390)
#define FGGJCLDLMMI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8C36E0)
#define FGGJCLDLMMI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8C2E90)
#define FGGJCLDLMMI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F8C2E00)
#define FGGJCLDLMMI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8C2DB0)
#define FGGJCLDLMMI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F8C3040)
#define FGGJCLDLMMI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8C2F10)
#define FGGJCLDLMMI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F8C3130)
#define FGGJCLDLMMI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F8C2D40)
#define FGGJCLDLMMI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F8C3510)
#define FGGJCLDLMMI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F8C34C0)
#define FGGJCLDLMMI_MJCPNPLGDJH_OFFSET UNITYSDK_OFFSET(0x1F8C2F00)
#define FGGJCLDLMMI_MJGEDAIKJNC_OFFSET UNITYSDK_OFFSET(0x1F8C2EE0)
#define FGGJCLDLMMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8C2DA0)
#define FGGJCLDLMMI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F8C3230)
#define FGGJCLDLMMI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F8C3290)

inline static constexpr unsigned int FGGJCLDLMMI_TypeDefinitionIndex = 34020;

	class FGGJCLDLMMI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFLDOOGNBNG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BGICDAMKGHK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FGGJCLDLMMI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FGGJCLDLMMI*>**)UnitySDK::FromName("", "FGGJCLDLMMI")->GetStaticField(0x50470);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_NNHKEJIDODN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FGGJCLDLMMI")->GetStaticField(0x50478);
		}

		// static const ::System::Object OHGNCOKHBMF; // 0x0
		// static const ::System::Object OADBPFJOOLH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FGGJCLDLMMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGGJCLDLMMI*))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGGJCLDLMMI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FGGJCLDLMMI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FGGJCLDLMMI*>*(*)())((::PBYTE)hIl2Cpp + FGGJCLDLMMI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FGGJCLDLMMI* Clone()
		{
			return ((::FGGJCLDLMMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MJGEDAIKJNC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_MJGEDAIKJNC_OFFSET))(this);
		}

		::System::UInt32 AIFJLACFEFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_AIFJLACFEFH_OFFSET))(this);
		}

		::System::Void MJCPNPLGDJH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_MJCPNPLGDJH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FGGJCLDLMMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FGGJCLDLMMI*))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FGGJCLDLMMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FGGJCLDLMMI*))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FGGJCLDLMMI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
