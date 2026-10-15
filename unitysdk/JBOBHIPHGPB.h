#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JBOBHIPHGPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBOBHIPHGPB_AKHJNBFKLNI_OFFSET UNITYSDK_OFFSET(0x1E6CF2C0)
#define JBOBHIPHGPB_APGPJIIOJJH_OFFSET UNITYSDK_OFFSET(0x1E6CF330)
#define JBOBHIPHGPB_BEPKKOHEOGL_OFFSET UNITYSDK_OFFSET(0x1E6CF2D0)
#define JBOBHIPHGPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6CF8C0)
#define JBOBHIPHGPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6CFC60)
#define JBOBHIPHGPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6CF270)
#define JBOBHIPHGPB_CMPAPOLKDMI_OFFSET UNITYSDK_OFFSET(0x1E6CF2E0)
#define JBOBHIPHGPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6CF1C0)
#define JBOBHIPHGPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CF170)
#define JBOBHIPHGPB_DEEKDAFPLHC_OFFSET UNITYSDK_OFFSET(0x1E6CF320)
#define JBOBHIPHGPB_DHLOOPDABHJ_OFFSET UNITYSDK_OFFSET(0x1E6CF340)
#define JBOBHIPHGPB_DOMGMNLMMFD_OFFSET UNITYSDK_OFFSET(0x1E6CF310)
#define JBOBHIPHGPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6CF420)
#define JBOBHIPHGPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6CF350)
#define JBOBHIPHGPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6CF4C0)
#define JBOBHIPHGPB_IOEDGIFNLBK_OFFSET UNITYSDK_OFFSET(0x1E6CF300)
#define JBOBHIPHGPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6CF100)
#define JBOBHIPHGPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6CFB30)
#define JBOBHIPHGPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6CFAC0)
#define JBOBHIPHGPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6CF160)
#define JBOBHIPHGPB_PFDFAHJBBKD_OFFSET UNITYSDK_OFFSET(0x1E6CF2F0)
#define JBOBHIPHGPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6CF5E0)
#define JBOBHIPHGPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6CF640)

inline static constexpr unsigned int JBOBHIPHGPB_TypeDefinitionIndex = 30643;

	class JBOBHIPHGPB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HNEHDMCIAEJ; // 0x18
		::System::UInt32 BMGMACIBMFH; // 0x20
		::System::Boolean IHHOHKOJBDG; // 0x24
		::System::Boolean NLHOMFCIPAL; // 0x25
		::System::Byte _padding0[0x2];
		::System::UInt64 LJFAPGMCCPP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::JBOBHIPHGPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JBOBHIPHGPB*>**)UnitySDK::FromName("", "JBOBHIPHGPB")->GetStaticField(0x59D00);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FPEPGJAMBME()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JBOBHIPHGPB")->GetStaticField(0x59D08);
		}

		// static const ::System::Object OHJJBLFFNHI; // 0x0
		// static const ::System::Object FPEDPMAHHND; // 0x0
		// static const ::System::Object JFPHEPMECOH; // 0x0
		// static const ::System::Object PEMMCCKFIPG; // 0x0
		// static const ::System::Object JPDLHCPNBOM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBOBHIPHGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOBHIPHGPB*))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBOBHIPHGPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JBOBHIPHGPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JBOBHIPHGPB*>*(*)())((::PBYTE)hIl2Cpp + JBOBHIPHGPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBOBHIPHGPB* Clone()
		{
			return ((::JBOBHIPHGPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AKHJNBFKLNI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_AKHJNBFKLNI_OFFSET))(this);
		}

		::System::UInt32 BEPKKOHEOGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_BEPKKOHEOGL_OFFSET))(this);
		}

		::System::Void CMPAPOLKDMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_CMPAPOLKDMI_OFFSET))(this, a1);
		}

		::System::UInt64 PFDFAHJBBKD()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_PFDFAHJBBKD_OFFSET))(this);
		}

		::System::Void IOEDGIFNLBK(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_IOEDGIFNLBK_OFFSET))(this, a1);
		}

		::System::Boolean DOMGMNLMMFD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_DOMGMNLMMFD_OFFSET))(this);
		}

		::System::Void DEEKDAFPLHC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_DEEKDAFPLHC_OFFSET))(this, a1);
		}

		::System::Boolean APGPJIIOJJH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_APGPJIIOJJH_OFFSET))(this);
		}

		::System::Void DHLOOPDABHJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_DHLOOPDABHJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBOBHIPHGPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBOBHIPHGPB*))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBOBHIPHGPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOBHIPHGPB*))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBOBHIPHGPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
