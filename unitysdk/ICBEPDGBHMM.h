#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICBEPDGBHMM;
class NJMDFFHEAJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICBEPDGBHMM_AJALJABPFPF_OFFSET UNITYSDK_OFFSET(0x1E61DD70)
#define ICBEPDGBHMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61E320)
#define ICBEPDGBHMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61E590)
#define ICBEPDGBHMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61DCE0)
#define ICBEPDGBHMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61DC60)
#define ICBEPDGBHMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61DC50)
#define ICBEPDGBHMM_DHCLJDCKCCM_OFFSET UNITYSDK_OFFSET(0x1E61DD80)
#define ICBEPDGBHMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61DF00)
#define ICBEPDGBHMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61DD90)
#define ICBEPDGBHMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61E1D0)
#define ICBEPDGBHMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61DC10)
#define ICBEPDGBHMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61E410)
#define ICBEPDGBHMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61E380)
#define ICBEPDGBHMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61DC40)
#define ICBEPDGBHMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61E230)
#define ICBEPDGBHMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61E290)

	class ICBEPDGBHMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NJMDFFHEAJJ* FJHAHGBGOLI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ICBEPDGBHMM")->GetStaticField(0x42770);
		}

		// static const ::System::Object JJFNBOLFKFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICBEPDGBHMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICBEPDGBHMM*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICBEPDGBHMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ICBEPDGBHMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICBEPDGBHMM* Clone()
		{
			return ((::ICBEPDGBHMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_CLONE_OFFSET))(this);
		}

		::NJMDFFHEAJJ* AJALJABPFPF()
		{
			return ((::NJMDFFHEAJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_AJALJABPFPF_OFFSET))(this);
		}

		::System::Void DHCLJDCKCCM(::NJMDFFHEAJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NJMDFFHEAJJ*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_DHCLJDCKCCM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICBEPDGBHMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICBEPDGBHMM*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICBEPDGBHMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICBEPDGBHMM*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICBEPDGBHMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
