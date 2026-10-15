#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIJHCCNMEGA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIJHCCNMEGA_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1EB33180)
#define NIJHCCNMEGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB33630)
#define NIJHCCNMEGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB33900)
#define NIJHCCNMEGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB33120)
#define NIJHCCNMEGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB33080)
#define NIJHCCNMEGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB33030)
#define NIJHCCNMEGA_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1EB33170)
#define NIJHCCNMEGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB33260)
#define NIJHCCNMEGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB331C0)
#define NIJHCCNMEGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB33360)
#define NIJHCCNMEGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB32FC0)
#define NIJHCCNMEGA_KAOCPHFNPOE_OFFSET UNITYSDK_OFFSET(0x1EB33190)
#define NIJHCCNMEGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB33820)
#define NIJHCCNMEGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB337C0)
#define NIJHCCNMEGA_NNMAEDDJPFB_OFFSET UNITYSDK_OFFSET(0x1EB331A0)
#define NIJHCCNMEGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB33020)
#define NIJHCCNMEGA_PNIMPFNBDCF_OFFSET UNITYSDK_OFFSET(0x1EB331B0)
#define NIJHCCNMEGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB33460)
#define NIJHCCNMEGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB334C0)

inline static constexpr unsigned int NIJHCCNMEGA_TypeDefinitionIndex = 27713;

	class NIJHCCNMEGA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAENICGLFEO; // 0x18
		::System::UInt32 KBIKDALMALD; // 0x20
		::System::UInt32 IPFBCNFDLLF; // 0x24
		static ::Google::Protobuf::FieldCodec** StaticGet_BKNGLEJHAMF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NIJHCCNMEGA")->GetStaticField(0x53580);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NIJHCCNMEGA")->GetStaticField(0x53588);
		}

		// static const ::System::Object BCMOOHPKBDG; // 0x0
		// static const ::System::Object IIAPKIDPCDP; // 0x0
		// static const ::System::Object GNHKOFELHEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIJHCCNMEGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIJHCCNMEGA*))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIJHCCNMEGA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NIJHCCNMEGA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIJHCCNMEGA* Clone()
		{
			return ((::NIJHCCNMEGA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_CLONE_OFFSET))(this);
		}

		::System::UInt32 ENIJDMAJKCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_ENIJDMAJKCO_OFFSET))(this);
		}

		::System::Void AGFANMDJCBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_AGFANMDJCBJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAOCPHFNPOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_KAOCPHFNPOE_OFFSET))(this);
		}

		::System::UInt32 NNMAEDDJPFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_NNMAEDDJPFB_OFFSET))(this);
		}

		::System::Void PNIMPFNBDCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_PNIMPFNBDCF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIJHCCNMEGA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIJHCCNMEGA*))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIJHCCNMEGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIJHCCNMEGA*))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
