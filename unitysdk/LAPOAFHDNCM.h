#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LAPOAFHDNCM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LAPOAFHDNCM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8D5440)
#define LAPOAFHDNCM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8D5660)
#define LAPOAFHDNCM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8D5030)
#define LAPOAFHDNCM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8D5000)
#define LAPOAFHDNCM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4FF0)
#define LAPOAFHDNCM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8D51C0)
#define LAPOAFHDNCM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8D50C0)
#define LAPOAFHDNCM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8D5330)
#define LAPOAFHDNCM_IPBPIJHDEHI_OFFSET UNITYSDK_OFFSET(0x1E8D50A0)
#define LAPOAFHDNCM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8D4F80)
#define LAPOAFHDNCM_LDBHFEIMEPG_OFFSET UNITYSDK_OFFSET(0x1E8D50B0)
#define LAPOAFHDNCM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8D5500)
#define LAPOAFHDNCM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8D54D0)
#define LAPOAFHDNCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8D4FE0)
#define LAPOAFHDNCM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8D5360)
#define LAPOAFHDNCM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8D53C0)

	class LAPOAFHDNCM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOGIIILDKKB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LAPOAFHDNCM")->GetStaticField(0x2FB60);
		}

		// static const ::System::Object KNGOJOLIDKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LAPOAFHDNCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAPOAFHDNCM*))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LAPOAFHDNCM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LAPOAFHDNCM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LAPOAFHDNCM* Clone()
		{
			return ((::LAPOAFHDNCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_CLONE_OFFSET))(this);
		}

		::System::UInt32 IPBPIJHDEHI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_IPBPIJHDEHI_OFFSET))(this);
		}

		::System::Void LDBHFEIMEPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_LDBHFEIMEPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LAPOAFHDNCM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAPOAFHDNCM*))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LAPOAFHDNCM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LAPOAFHDNCM*))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LAPOAFHDNCM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
