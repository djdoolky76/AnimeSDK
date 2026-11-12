#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCPHBDPJCLK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FCPHBDPJCLK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6376A0)
#define FCPHBDPJCLK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F637960)
#define FCPHBDPJCLK_CKCIFOBGMKD_OFFSET UNITYSDK_OFFSET(0x1F637270)
#define FCPHBDPJCLK_CLONE_OFFSET UNITYSDK_OFFSET(0x1F637220)
#define FCPHBDPJCLK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F637190)
#define FCPHBDPJCLK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F637140)
#define FCPHBDPJCLK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6373A0)
#define FCPHBDPJCLK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F637280)
#define FCPHBDPJCLK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F637490)
#define FCPHBDPJCLK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6370D0)
#define FCPHBDPJCLK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F637790)
#define FCPHBDPJCLK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F637740)
#define FCPHBDPJCLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F637130)
#define FCPHBDPJCLK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F637590)
#define FCPHBDPJCLK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6375F0)

inline static constexpr unsigned int FCPHBDPJCLK_TypeDefinitionIndex = 30592;

	class FCPHBDPJCLK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BJIOBHPOEIC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::FCPHBDPJCLK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FCPHBDPJCLK*>**)UnitySDK::FromName("", "FCPHBDPJCLK")->GetStaticField(0x59120);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GOKCHGKCBMD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FCPHBDPJCLK")->GetStaticField(0x59128);
		}

		// static const ::System::Object CFNLKMMLIIO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FCPHBDPJCLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCPHBDPJCLK*))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCPHBDPJCLK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FCPHBDPJCLK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FCPHBDPJCLK*>*(*)())((::PBYTE)hIl2Cpp + FCPHBDPJCLK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FCPHBDPJCLK* Clone()
		{
			return ((::FCPHBDPJCLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CKCIFOBGMKD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_CKCIFOBGMKD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FCPHBDPJCLK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FCPHBDPJCLK*))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FCPHBDPJCLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FCPHBDPJCLK*))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FCPHBDPJCLK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
