#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJPNDFFGJHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DJPNDFFGJHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1D3670)
#define DJPNDFFGJHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3890)
#define DJPNDFFGJHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1D32C0)
#define DJPNDFFGJHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1D3290)
#define DJPNDFFGJHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3280)
#define DJPNDFFGJHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1D33F0)
#define DJPNDFFGJHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1D3320)
#define DJPNDFFGJHO_GEKIABKDINF_OFFSET UNITYSDK_OFFSET(0x1E1D3310)
#define DJPNDFFGJHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1D3560)
#define DJPNDFFGJHO_JIHCNBCLLKP_OFFSET UNITYSDK_OFFSET(0x1E1D3300)
#define DJPNDFFGJHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1D3240)
#define DJPNDFFGJHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1D3730)
#define DJPNDFFGJHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1D3700)
#define DJPNDFFGJHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1D3270)
#define DJPNDFFGJHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1D3590)
#define DJPNDFFGJHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1D35F0)

	class DJPNDFFGJHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPGOPLHGNIP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DJPNDFFGJHO")->GetStaticField(0x3A2F0);
		}

		// static const ::System::Object DNGBFNAFCEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DJPNDFFGJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJPNDFFGJHO*))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJPNDFFGJHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DJPNDFFGJHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DJPNDFFGJHO* Clone()
		{
			return ((::DJPNDFFGJHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHCNBCLLKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_JIHCNBCLLKP_OFFSET))(this);
		}

		::System::Void GEKIABKDINF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_GEKIABKDINF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DJPNDFFGJHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DJPNDFFGJHO*))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DJPNDFFGJHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DJPNDFFGJHO*))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DJPNDFFGJHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
