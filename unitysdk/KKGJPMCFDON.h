#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKGJPMCFDON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKGJPMCFDON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8788C0)
#define KKGJPMCFDON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E878AE0)
#define KKGJPMCFDON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E878510)
#define KKGJPMCFDON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8784E0)
#define KKGJPMCFDON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8784D0)
#define KKGJPMCFDON_DMOLMOBLAJP_OFFSET UNITYSDK_OFFSET(0x1E878560)
#define KKGJPMCFDON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E878640)
#define KKGJPMCFDON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E878570)
#define KKGJPMCFDON_FACFAOCBMBF_OFFSET UNITYSDK_OFFSET(0x1E878550)
#define KKGJPMCFDON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8787B0)
#define KKGJPMCFDON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E878490)
#define KKGJPMCFDON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E878980)
#define KKGJPMCFDON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E878950)
#define KKGJPMCFDON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8784C0)
#define KKGJPMCFDON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8787E0)
#define KKGJPMCFDON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E878840)

	class KKGJPMCFDON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DFGBIBFBODP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KKGJPMCFDON")->GetStaticField(0x1E310);
		}

		// static const ::System::Object LCIDLBPJDHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKGJPMCFDON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKGJPMCFDON*))((::PBYTE)hIl2Cpp + KKGJPMCFDON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKGJPMCFDON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KKGJPMCFDON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKGJPMCFDON* Clone()
		{
			return ((::KKGJPMCFDON*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_CLONE_OFFSET))(this);
		}

		::System::UInt32 FACFAOCBMBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_FACFAOCBMBF_OFFSET))(this);
		}

		::System::Void DMOLMOBLAJP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKGJPMCFDON_DMOLMOBLAJP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKGJPMCFDON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKGJPMCFDON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKGJPMCFDON*))((::PBYTE)hIl2Cpp + KKGJPMCFDON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKGJPMCFDON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGJPMCFDON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKGJPMCFDON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKGJPMCFDON*))((::PBYTE)hIl2Cpp + KKGJPMCFDON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKGJPMCFDON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
