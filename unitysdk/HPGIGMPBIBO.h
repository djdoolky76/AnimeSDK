#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGIGMPBIBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPGIGMPBIBO_BELIIBEDEGH_OFFSET UNITYSDK_OFFSET(0x1E5F5320)
#define HPGIGMPBIBO_BFLNJJMIEDI_OFFSET UNITYSDK_OFFSET(0x1E5F52C0)
#define HPGIGMPBIBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5F5840)
#define HPGIGMPBIBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5F5C50)
#define HPGIGMPBIBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5F51A0)
#define HPGIGMPBIBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5F5140)
#define HPGIGMPBIBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5F5120)
#define HPGIGMPBIBO_DMEHBDBNGHI_OFFSET UNITYSDK_OFFSET(0x1E5F5210)
#define HPGIGMPBIBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5F53D0)
#define HPGIGMPBIBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5F5330)
#define HPGIGMPBIBO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5F5240)
#define HPGIGMPBIBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5F5480)
#define HPGIGMPBIBO_IJEIJBNHMAO_OFFSET UNITYSDK_OFFSET(0x1E5F5310)
#define HPGIGMPBIBO_JFOOLBHCAEE_OFFSET UNITYSDK_OFFSET(0x1E5F5260)
#define HPGIGMPBIBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5F50E0)
#define HPGIGMPBIBO_LPJMLMAEJAH_OFFSET UNITYSDK_OFFSET(0x1E5F5250)
#define HPGIGMPBIBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5F5B30)
#define HPGIGMPBIBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5F5AB0)
#define HPGIGMPBIBO_MNJMLEMLHKB_OFFSET UNITYSDK_OFFSET(0x1E5F52B0)
#define HPGIGMPBIBO_NMNIGHFIDNO_OFFSET UNITYSDK_OFFSET(0x1E5F5220)
#define HPGIGMPBIBO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5F5230)
#define HPGIGMPBIBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5F5110)
#define HPGIGMPBIBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5F55D0)
#define HPGIGMPBIBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5F5630)

inline static constexpr unsigned int HPGIGMPBIBO_TypeDefinitionIndex = 31260;

	class HPGIGMPBIBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* BCBNAACIMJI; // 0x18
		::System::String* MNJKFIJEGNH; // 0x20
		::System::UInt64 GCNANINCJLD; // 0x28
		::System::UInt32 GJPFCNBFMAB; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		static ::Google::Protobuf::MessageParser_1<::HPGIGMPBIBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPGIGMPBIBO*>**)UnitySDK::FromName("", "HPGIGMPBIBO")->GetStaticField(0x50560);
		}

		// static const ::System::Object HEELLIHJDCJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JCPEEKKJIPM; // 0x0
		// static const ::System::Object HAHLAGNDDNG; // 0x0
		// static const ::System::Object GJPAOFHOPOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPGIGMPBIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGIGMPBIBO*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGIGMPBIBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPGIGMPBIBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPGIGMPBIBO*>*(*)())((::PBYTE)hIl2Cpp + HPGIGMPBIBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPGIGMPBIBO* Clone()
		{
			return ((::HPGIGMPBIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 DMEHBDBNGHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_DMEHBDBNGHI_OFFSET))(this);
		}

		::System::Void NMNIGHFIDNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_NMNIGHFIDNO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* LPJMLMAEJAH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_LPJMLMAEJAH_OFFSET))(this);
		}

		::System::Void JFOOLBHCAEE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_JFOOLBHCAEE_OFFSET))(this, a1);
		}

		::System::String* MNJMLEMLHKB()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_MNJMLEMLHKB_OFFSET))(this);
		}

		::System::Void BFLNJJMIEDI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_BFLNJJMIEDI_OFFSET))(this, a1);
		}

		::System::UInt64 IJEIJBNHMAO()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_IJEIJBNHMAO_OFFSET))(this);
		}

		::System::Void BELIIBEDEGH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_BELIIBEDEGH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPGIGMPBIBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPGIGMPBIBO*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPGIGMPBIBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPGIGMPBIBO*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPGIGMPBIBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
