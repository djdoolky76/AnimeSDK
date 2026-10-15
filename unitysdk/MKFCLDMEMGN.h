#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKFCLDMEMGN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKFCLDMEMGN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA57980)
#define MKFCLDMEMGN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA57B70)
#define MKFCLDMEMGN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA405B0)
#define MKFCLDMEMGN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA575E0)
#define MKFCLDMEMGN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA437E0)
#define MKFCLDMEMGN_EEDFOLAECPG_OFFSET UNITYSDK_OFFSET(0x1EA57610)
#define MKFCLDMEMGN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA57730)
#define MKFCLDMEMGN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA57630)
#define MKFCLDMEMGN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA41A60)
#define MKFCLDMEMGN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA57570)
#define MKFCLDMEMGN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA57A10)
#define MKFCLDMEMGN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA437F0)
#define MKFCLDMEMGN_OKLEDDLINKL_OFFSET UNITYSDK_OFFSET(0x1EA57620)
#define MKFCLDMEMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA575D0)
#define MKFCLDMEMGN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA578A0)
#define MKFCLDMEMGN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA57900)

inline static constexpr unsigned int MKFCLDMEMGN_TypeDefinitionIndex = 33350;

	class MKFCLDMEMGN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JNBOGDNFFCI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKFCLDMEMGN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKFCLDMEMGN*>**)UnitySDK::FromName("", "MKFCLDMEMGN")->GetStaticField(0x56A10);
		}

		// static const ::System::Object FMBEECHNGLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKFCLDMEMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKFCLDMEMGN*))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFCLDMEMGN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKFCLDMEMGN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKFCLDMEMGN*>*(*)())((::PBYTE)hIl2Cpp + MKFCLDMEMGN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKFCLDMEMGN* Clone()
		{
			return ((::MKFCLDMEMGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EEDFOLAECPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_EEDFOLAECPG_OFFSET))(this);
		}

		::System::Void OKLEDDLINKL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_OKLEDDLINKL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKFCLDMEMGN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKFCLDMEMGN*))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKFCLDMEMGN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKFCLDMEMGN*))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKFCLDMEMGN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
