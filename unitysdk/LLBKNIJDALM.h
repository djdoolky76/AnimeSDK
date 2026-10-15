#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLBKNIJDALM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLBKNIJDALM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9966B0)
#define LLBKNIJDALM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9968D0)
#define LLBKNIJDALM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9962A0)
#define LLBKNIJDALM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E996270)
#define LLBKNIJDALM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E996260)
#define LLBKNIJDALM_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1E996310)
#define LLBKNIJDALM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E996430)
#define LLBKNIJDALM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E996330)
#define LLBKNIJDALM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9965A0)
#define LLBKNIJDALM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9961F0)
#define LLBKNIJDALM_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1E996320)
#define LLBKNIJDALM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E996770)
#define LLBKNIJDALM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E996740)
#define LLBKNIJDALM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E996250)
#define LLBKNIJDALM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9965D0)
#define LLBKNIJDALM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E996630)

	class LLBKNIJDALM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PBPJNDEHDNK; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLBKNIJDALM")->GetStaticField(0x4B3F0);
		}

		// static const ::System::Object JOKMIFACEIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLBKNIJDALM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBKNIJDALM*))((::PBYTE)hIl2Cpp + LLBKNIJDALM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLBKNIJDALM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLBKNIJDALM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLBKNIJDALM* Clone()
		{
			return ((::LLBKNIJDALM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLBKNIJDALM_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLBKNIJDALM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLBKNIJDALM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLBKNIJDALM*))((::PBYTE)hIl2Cpp + LLBKNIJDALM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLBKNIJDALM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBKNIJDALM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLBKNIJDALM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLBKNIJDALM*))((::PBYTE)hIl2Cpp + LLBKNIJDALM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLBKNIJDALM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
