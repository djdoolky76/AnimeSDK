#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFBCEOICLAB;
class KEMGFAPBFNL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEMGFAPBFNL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8103C0)
#define KEMGFAPBFNL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8107A0)
#define KEMGFAPBFNL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E80FE50)
#define KEMGFAPBFNL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E80FDC0)
#define KEMGFAPBFNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E80FDB0)
#define KEMGFAPBFNL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8100B0)
#define KEMGFAPBFNL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E80FF30)
#define KEMGFAPBFNL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E80FF20)
#define KEMGFAPBFNL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E810230)
#define KEMGFAPBFNL_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E80FEF0)
#define KEMGFAPBFNL_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E80FF00)
#define KEMGFAPBFNL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E80FD70)
#define KEMGFAPBFNL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E810590)
#define KEMGFAPBFNL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E810490)
#define KEMGFAPBFNL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E80FF10)
#define KEMGFAPBFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E80FDA0)
#define KEMGFAPBFNL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E810280)
#define KEMGFAPBFNL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8102E0)

	class KEMGFAPBFNL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::BFBCEOICLAB* ODEBGOBLILD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KEMGFAPBFNL")->GetStaticField(0x12D30);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEMGFAPBFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMGFAPBFNL*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KEMGFAPBFNL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEMGFAPBFNL* Clone()
		{
			return ((::KEMGFAPBFNL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CLONE_OFFSET))(this);
		}

		::BFBCEOICLAB* GPCIDCAANHB()
		{
			return ((::BFBCEOICLAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::BFBCEOICLAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBCEOICLAB*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEMGFAPBFNL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEMGFAPBFNL*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEMGFAPBFNL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMGFAPBFNL*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEMGFAPBFNL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
