#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDAPICMFDAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDAPICMFDAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17A5E0)
#define DDAPICMFDAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17A910)
#define DDAPICMFDAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17A160)
#define DDAPICMFDAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17A120)
#define DDAPICMFDAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17A110)
#define DDAPICMFDAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17A300)
#define DDAPICMFDAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17A210)
#define DDAPICMFDAB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E17A1C0)
#define DDAPICMFDAB_FLABFFODLAN_OFFSET UNITYSDK_OFFSET(0x1E17A1E0)
#define DDAPICMFDAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17A3E0)
#define DDAPICMFDAB_HPGLDOOFONJ_OFFSET UNITYSDK_OFFSET(0x1E17A1F0)
#define DDAPICMFDAB_JFPFGJGFCGE_OFFSET UNITYSDK_OFFSET(0x1E17A1D0)
#define DDAPICMFDAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17A0D0)
#define DDAPICMFDAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17A750)
#define DDAPICMFDAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17A700)
#define DDAPICMFDAB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E17A1B0)
#define DDAPICMFDAB_PAJHAHFHLEI_OFFSET UNITYSDK_OFFSET(0x1E17A200)
#define DDAPICMFDAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17A100)
#define DDAPICMFDAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17A410)
#define DDAPICMFDAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17A470)

inline static constexpr unsigned int DDAPICMFDAB_TypeDefinitionIndex = 30338;

	class DDAPICMFDAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Boolean JNDBHPPKILC; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 IOJPFPKAAOP; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDAPICMFDAB")->GetStaticField(0x2D3E0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ABJLJCFPJJL; // 0x0
		// static const ::System::Object EBNBMOHHABN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDAPICMFDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAPICMFDAB*))((::PBYTE)hIl2Cpp + DDAPICMFDAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDAPICMFDAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDAPICMFDAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDAPICMFDAB* Clone()
		{
			return ((::DDAPICMFDAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAPICMFDAB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean JFPFGJGFCGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_JFPFGJGFCGE_OFFSET))(this);
		}

		::System::Void FLABFFODLAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDAPICMFDAB_FLABFFODLAN_OFFSET))(this, a1);
		}

		::System::UInt32 HPGLDOOFONJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_HPGLDOOFONJ_OFFSET))(this);
		}

		::System::Void PAJHAHFHLEI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDAPICMFDAB_PAJHAHFHLEI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDAPICMFDAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDAPICMFDAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDAPICMFDAB*))((::PBYTE)hIl2Cpp + DDAPICMFDAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDAPICMFDAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDAPICMFDAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDAPICMFDAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDAPICMFDAB*))((::PBYTE)hIl2Cpp + DDAPICMFDAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDAPICMFDAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
