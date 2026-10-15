#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDLCAPDIKJI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDLCAPDIKJI_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E550B40)
#define HDLCAPDIKJI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E550EA0)
#define HDLCAPDIKJI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E551170)
#define HDLCAPDIKJI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E550AA0)
#define HDLCAPDIKJI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E550A70)
#define HDLCAPDIKJI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E550A60)
#define HDLCAPDIKJI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E550C60)
#define HDLCAPDIKJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E550B50)
#define HDLCAPDIKJI_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E550B10)
#define HDLCAPDIKJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E550D30)
#define HDLCAPDIKJI_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E550B30)
#define HDLCAPDIKJI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5509F0)
#define HDLCAPDIKJI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E550FF0)
#define HDLCAPDIKJI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E550FB0)
#define HDLCAPDIKJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E550A50)
#define HDLCAPDIKJI_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E550B20)
#define HDLCAPDIKJI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E550D60)
#define HDLCAPDIKJI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E550DC0)

inline static constexpr unsigned int HDLCAPDIKJI_TypeDefinitionIndex = 25762;

	class HDLCAPDIKJI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BFOBOOGAHKB; // 0x18
		::System::UInt32 DBDCJHECJOO; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDLCAPDIKJI")->GetStaticField(0x20F80);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDLCAPDIKJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLCAPDIKJI*))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDLCAPDIKJI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDLCAPDIKJI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDLCAPDIKJI* Clone()
		{
			return ((::HDLCAPDIKJI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDLCAPDIKJI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDLCAPDIKJI*))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDLCAPDIKJI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDLCAPDIKJI*))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDLCAPDIKJI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
