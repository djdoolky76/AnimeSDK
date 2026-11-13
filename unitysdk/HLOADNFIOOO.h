#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOADNFIOOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLOADNFIOOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FE13AF0)
#define HLOADNFIOOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE13D10)
#define HLOADNFIOOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FE13620)
#define HLOADNFIOOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FE13580)
#define HLOADNFIOOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE13530)
#define HLOADNFIOOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FE13730)
#define HLOADNFIOOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FE136A0)
#define HLOADNFIOOO_FEICPODOGPD_OFFSET UNITYSDK_OFFSET(0x1FE13670)
#define HLOADNFIOOO_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1FE13680)
#define HLOADNFIOOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FE13830)
#define HLOADNFIOOO_JFAIBHAEHJE_OFFSET UNITYSDK_OFFSET(0x1FE13650)
#define HLOADNFIOOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FE134F0)
#define HLOADNFIOOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FE13C40)
#define HLOADNFIOOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FE13BE0)
#define HLOADNFIOOO_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1FE13690)
#define HLOADNFIOOO_ONPIHGMILIA_OFFSET UNITYSDK_OFFSET(0x1FE13660)
#define HLOADNFIOOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FE13520)
#define HLOADNFIOOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FE13930)
#define HLOADNFIOOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FE13990)

inline static constexpr unsigned int HLOADNFIOOO_TypeDefinitionIndex = 28729;

	class HLOADNFIOOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PNPEOIOHENI; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		::System::Boolean LGJDEIKNELF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::HLOADNFIOOO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HLOADNFIOOO*>**)UnitySDK::FromName("", "HLOADNFIOOO")->GetStaticField(0x13620);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_EPAMOMMFMGA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "HLOADNFIOOO")->GetStaticField(0x13628);
		}

		// static const ::System::Object JOIMOBINPOL; // 0x0
		// static const ::System::Object IJNFEONMFLA; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::HLOADNFIOOO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HLOADNFIOOO*>*(*)())((::PBYTE)hIl2Cpp + HLOADNFIOOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLOADNFIOOO* Clone()
		{
			return ((::HLOADNFIOOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_CLONE_OFFSET))(this);
		}

		::System::Boolean JFAIBHAEHJE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_JFAIBHAEHJE_OFFSET))(this);
		}

		::System::Void ONPIHGMILIA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HLOADNFIOOO_ONPIHGMILIA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FEICPODOGPD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLOADNFIOOO_FEICPODOGPD_OFFSET))(this);
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
