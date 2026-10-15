#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGJEICAELEB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGJEICAELEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E73A6D0)
#define JGJEICAELEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E73A9D0)
#define JGJEICAELEB_CIHIACBANKF_OFFSET UNITYSDK_OFFSET(0x1E73A280)
#define JGJEICAELEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E73A240)
#define JGJEICAELEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E73A1B0)
#define JGJEICAELEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E73A160)
#define JGJEICAELEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E73A3A0)
#define JGJEICAELEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E73A2A0)
#define JGJEICAELEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E73A490)
#define JGJEICAELEB_HAHFLCFONPK_OFFSET UNITYSDK_OFFSET(0x1E73A290)
#define JGJEICAELEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E73A120)
#define JGJEICAELEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E73A810)
#define JGJEICAELEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E73A7C0)
#define JGJEICAELEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E73A150)
#define JGJEICAELEB_PIFMOLBCDFJ_OFFSET UNITYSDK_OFFSET(0x1E73A270)
#define JGJEICAELEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E73A590)
#define JGJEICAELEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E73A5F0)

	class JGJEICAELEB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JODMIOEBHIA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 GJJDLFJNHFJ; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JGJEICAELEB")->GetStaticField(0x60950);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_ONFCFPLLBCK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "JGJEICAELEB")->GetStaticField(0x60958);
		}

		// static const ::System::Object IHIJGJDKHKH; // 0x0
		// static const ::System::Object ACLKHKBOAIH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGJEICAELEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGJEICAELEB*))((::PBYTE)hIl2Cpp + JGJEICAELEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGJEICAELEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JGJEICAELEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGJEICAELEB* Clone()
		{
			return ((::JGJEICAELEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PIFMOLBCDFJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_PIFMOLBCDFJ_OFFSET))(this);
		}

		::System::UInt32 CIHIACBANKF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_CIHIACBANKF_OFFSET))(this);
		}

		::System::Void HAHFLCFONPK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JGJEICAELEB_HAHFLCFONPK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGJEICAELEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGJEICAELEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGJEICAELEB*))((::PBYTE)hIl2Cpp + JGJEICAELEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGJEICAELEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGJEICAELEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGJEICAELEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGJEICAELEB*))((::PBYTE)hIl2Cpp + JGJEICAELEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGJEICAELEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
