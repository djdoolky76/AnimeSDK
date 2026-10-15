#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFOMAIAIDFA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GFOMAIAIDFA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E476110)
#define GFOMAIAIDFA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E476330)
#define GFOMAIAIDFA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E475D00)
#define GFOMAIAIDFA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E475CD0)
#define GFOMAIAIDFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E475CC0)
#define GFOMAIAIDFA_ENMNDNEHGPB_OFFSET UNITYSDK_OFFSET(0x1E475D80)
#define GFOMAIAIDFA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E475E90)
#define GFOMAIAIDFA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E475D90)
#define GFOMAIAIDFA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E476000)
#define GFOMAIAIDFA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E475C50)
#define GFOMAIAIDFA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4761D0)
#define GFOMAIAIDFA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4761A0)
#define GFOMAIAIDFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E475CB0)
#define GFOMAIAIDFA_PLGMGJFBIBF_OFFSET UNITYSDK_OFFSET(0x1E475D70)
#define GFOMAIAIDFA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E476030)
#define GFOMAIAIDFA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E476090)

inline static constexpr unsigned int GFOMAIAIDFA_TypeDefinitionIndex = 29320;

	class GFOMAIAIDFA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EJBHLLHIAOE; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GFOMAIAIDFA")->GetStaticField(0x15650);
		}

		// static const ::System::Object KCGHFLNGIGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GFOMAIAIDFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFOMAIAIDFA*))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFOMAIAIDFA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GFOMAIAIDFA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GFOMAIAIDFA* Clone()
		{
			return ((::GFOMAIAIDFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_CLONE_OFFSET))(this);
		}

		::System::UInt32 PLGMGJFBIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_PLGMGJFBIBF_OFFSET))(this);
		}

		::System::Void ENMNDNEHGPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_ENMNDNEHGPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GFOMAIAIDFA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GFOMAIAIDFA*))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GFOMAIAIDFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GFOMAIAIDFA*))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GFOMAIAIDFA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
