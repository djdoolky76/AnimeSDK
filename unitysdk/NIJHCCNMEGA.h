#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
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

#define NIJHCCNMEGA_AGFANMDJCBJ_OFFSET UNITYSDK_OFFSET(0x1EAC8B30)
#define NIJHCCNMEGA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC8FD0)
#define NIJHCCNMEGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC92A0)
#define NIJHCCNMEGA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC8AD0)
#define NIJHCCNMEGA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC8A40)
#define NIJHCCNMEGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC89F0)
#define NIJHCCNMEGA_ENIJDMAJKCO_OFFSET UNITYSDK_OFFSET(0x1EAC8B20)
#define NIJHCCNMEGA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC8C10)
#define NIJHCCNMEGA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC8B70)
#define NIJHCCNMEGA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC8D10)
#define NIJHCCNMEGA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC8980)
#define NIJHCCNMEGA_KAOCPHFNPOE_OFFSET UNITYSDK_OFFSET(0x1EAC8B60)
#define NIJHCCNMEGA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC91B0)
#define NIJHCCNMEGA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC9150)
#define NIJHCCNMEGA_NNMAEDDJPFB_OFFSET UNITYSDK_OFFSET(0x1EAC8B40)
#define NIJHCCNMEGA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC89E0)
#define NIJHCCNMEGA_PNIMPFNBDCF_OFFSET UNITYSDK_OFFSET(0x1EAC8B50)
#define NIJHCCNMEGA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC8E10)
#define NIJHCCNMEGA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC8E70)

inline static constexpr unsigned int NIJHCCNMEGA_TypeDefinitionIndex = 28244;

	class NIJHCCNMEGA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EAENICGLFEO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 KBIKDALMALD; // 0x20
		::System::UInt32 IPFBCNFDLLF; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BKNGLEJHAMF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NIJHCCNMEGA")->GetStaticField(0x468B0);
		}

		static ::Google::Protobuf::MessageParser_1<::NIJHCCNMEGA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NIJHCCNMEGA*>**)UnitySDK::FromName("", "NIJHCCNMEGA")->GetStaticField(0x468B8);
		}

		// static const ::System::Object BCMOOHPKBDG; // 0x0
		// static const ::System::Object GNHKOFELHEB; // 0x0
		// static const ::System::Object IIAPKIDPCDP; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::NIJHCCNMEGA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NIJHCCNMEGA*>*(*)())((::PBYTE)hIl2Cpp + NIJHCCNMEGA_JJGHOBBFNJD_OFFSET))();
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

		::System::UInt32 NNMAEDDJPFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_NNMAEDDJPFB_OFFSET))(this);
		}

		::System::Void PNIMPFNBDCF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_PNIMPFNBDCF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KAOCPHFNPOE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIJHCCNMEGA_KAOCPHFNPOE_OFFSET))(this);
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
