#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKNGAGGAJKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKNGAGGAJKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E87AB80)
#define KKNGAGGAJKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E87AF90)
#define KKNGAGGAJKC_CJJOFPNLKMK_OFFSET UNITYSDK_OFFSET(0x1E87A520)
#define KKNGAGGAJKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E87A3D0)
#define KKNGAGGAJKC_CMOFHMCMKND_OFFSET UNITYSDK_OFFSET(0x1E87A4C0)
#define KKNGAGGAJKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E87A370)
#define KKNGAGGAJKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E87A340)
#define KKNGAGGAJKC_DENNLHLIHJB_OFFSET UNITYSDK_OFFSET(0x1E87A530)
#define KKNGAGGAJKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E87A680)
#define KKNGAGGAJKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E87A580)
#define KKNGAGGAJKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E87A7F0)
#define KKNGAGGAJKC_IPDFHDJIAGC_OFFSET UNITYSDK_OFFSET(0x1E87A460)
#define KKNGAGGAJKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E87A2D0)
#define KKNGAGGAJKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E87ACE0)
#define KKNGAGGAJKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E87AC70)
#define KKNGAGGAJKC_OCDDHLBPPOO_OFFSET UNITYSDK_OFFSET(0x1E87A470)
#define KKNGAGGAJKC_OPJLGKGMGEC_OFFSET UNITYSDK_OFFSET(0x1E87A4D0)
#define KKNGAGGAJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E87A330)
#define KKNGAGGAJKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E87A9B0)
#define KKNGAGGAJKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E87AA10)

inline static constexpr unsigned int KKNGAGGAJKC_TypeDefinitionIndex = 25713;

	class KKNGAGGAJKC : public ::System::Object
	{
	public:
		::System::String* EJAJMIKEDBC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::String* JLPEJDAGGMO; // 0x20
		::System::String* FNPNENCECGM; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KKNGAGGAJKC")->GetStaticField(0x1E970);
		}

		// static const ::System::Object KEPOPADMGOJ; // 0x0
		// static const ::System::Object HKFLOEHACBM; // 0x0
		// static const ::System::Object JHIBBDFFPEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKNGAGGAJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKNGAGGAJKC*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KKNGAGGAJKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKNGAGGAJKC* Clone()
		{
			return ((::KKNGAGGAJKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CLONE_OFFSET))(this);
		}

		::System::String* IPDFHDJIAGC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_IPDFHDJIAGC_OFFSET))(this);
		}

		::System::Void OCDDHLBPPOO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_OCDDHLBPPOO_OFFSET))(this, a1);
		}

		::System::String* CMOFHMCMKND()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CMOFHMCMKND_OFFSET))(this);
		}

		::System::Void OPJLGKGMGEC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_OPJLGKGMGEC_OFFSET))(this, a1);
		}

		::System::String* CJJOFPNLKMK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CJJOFPNLKMK_OFFSET))(this);
		}

		::System::Void DENNLHLIHJB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_DENNLHLIHJB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKNGAGGAJKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKNGAGGAJKC*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKNGAGGAJKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKNGAGGAJKC*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKNGAGGAJKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
