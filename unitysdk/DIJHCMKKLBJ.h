#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIJHCMKKLBJ;
class IGLEGGJHBDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIJHCMKKLBJ_AHPFACLJKIG_OFFSET UNITYSDK_OFFSET(0x1E1BFF40)
#define DIJHCMKKLBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C0460)
#define DIJHCMKKLBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C0830)
#define DIJHCMKKLBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1BFF00)
#define DIJHCMKKLBJ_CNNCBJAKIFE_OFFSET UNITYSDK_OFFSET(0x1E1BFF50)
#define DIJHCMKKLBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1BFE00)
#define DIJHCMKKLBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BFD80)
#define DIJHCMKKLBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1BFFC0)
#define DIJHCMKKLBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1BFF90)
#define DIJHCMKKLBJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1BFF80)
#define DIJHCMKKLBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C0120)
#define DIJHCMKKLBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1BFD40)
#define DIJHCMKKLBJ_KDLHAONJMPH_OFFSET UNITYSDK_OFFSET(0x1E1BFF60)
#define DIJHCMKKLBJ_KICEKEJEOOP_OFFSET UNITYSDK_OFFSET(0x1E1BFF30)
#define DIJHCMKKLBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C06F0)
#define DIJHCMKKLBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C0620)
#define DIJHCMKKLBJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1BFF70)
#define DIJHCMKKLBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1BFD70)
#define DIJHCMKKLBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C0270)
#define DIJHCMKKLBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C02D0)

	class DIJHCMKKLBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::IGLEGGJHBDN*>* BFNBHABLIML; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AONODGGMELH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 ABKDGMCEENH; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_CEDCCBLLOIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DIJHCMKKLBJ")->GetStaticField(0x365E0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIJHCMKKLBJ")->GetStaticField(0x365E8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BEJFBBGPOLG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DIJHCMKKLBJ")->GetStaticField(0x365F0);
		}

		// static const ::System::Object OFFLMKGEGPG; // 0x0
		// static const ::System::Object LGGHBDOOCAP; // 0x0
		// static const ::System::Object IBCDHDOMPOH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIJHCMKKLBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIJHCMKKLBJ*))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIJHCMKKLBJ* Clone()
		{
			return ((::DIJHCMKKLBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 KICEKEJEOOP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_KICEKEJEOOP_OFFSET))(this);
		}

		::System::Void AHPFACLJKIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_AHPFACLJKIG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CNNCBJAKIFE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_CNNCBJAKIFE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IGLEGGJHBDN*>* KDLHAONJMPH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IGLEGGJHBDN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_KDLHAONJMPH_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIJHCMKKLBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIJHCMKKLBJ*))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIJHCMKKLBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIJHCMKKLBJ*))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIJHCMKKLBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
