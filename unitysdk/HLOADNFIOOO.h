#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOADNFIOOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLOADNFIOOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5C5C80)
#define HLOADNFIOOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C5EA0)
#define HLOADNFIOOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5C57A0)
#define HLOADNFIOOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5C5700)
#define HLOADNFIOOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C56B0)
#define HLOADNFIOOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5C58B0)
#define HLOADNFIOOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5C5820)
#define HLOADNFIOOO_FEICPODOGPD_OFFSET UNITYSDK_OFFSET(0x1E5C57D0)
#define HLOADNFIOOO_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5C5800)
#define HLOADNFIOOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5C59C0)
#define HLOADNFIOOO_JFAIBHAEHJE_OFFSET UNITYSDK_OFFSET(0x1E5C57E0)
#define HLOADNFIOOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5C5670)
#define HLOADNFIOOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5C5DD0)
#define HLOADNFIOOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5C5D70)
#define HLOADNFIOOO_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5C5810)
#define HLOADNFIOOO_ONPIHGMILIA_OFFSET UNITYSDK_OFFSET(0x1E5C57F0)
#define HLOADNFIOOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5C56A0)
#define HLOADNFIOOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5C5AC0)
#define HLOADNFIOOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5C5B20)

	class HLOADNFIOOO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PNPEOIOHENI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean LGJDEIKNELF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 OPPNMFMNMGC; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_EPAMOMMFMGA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HLOADNFIOOO")->GetStaticField(0x1C070);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLOADNFIOOO")->GetStaticField(0x1C078);
		}

		// static const ::System::Object IJNFEONMFLA; // 0x0
		// static const ::System::Object JOIMOBINPOL; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLOADNFIOOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOADNFIOOO*))((::PBYTE)hIl2Cpp + HLOADNFIOOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLOADNFIOOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLOADNFIOOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLOADNFIOOO* Clone()
		{
			return ((::HLOADNFIOOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FEICPODOGPD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_FEICPODOGPD_OFFSET))(this);
		}

		::System::Boolean JFAIBHAEHJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_JFAIBHAEHJE_OFFSET))(this);
		}

		::System::Void ONPIHGMILIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOADNFIOOO_ONPIHGMILIA_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLOADNFIOOO_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLOADNFIOOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLOADNFIOOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLOADNFIOOO*))((::PBYTE)hIl2Cpp + HLOADNFIOOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLOADNFIOOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLOADNFIOOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOADNFIOOO*))((::PBYTE)hIl2Cpp + HLOADNFIOOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLOADNFIOOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
