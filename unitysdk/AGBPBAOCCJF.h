#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGBPBAOCCJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGBPBAOCCJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1276A0)
#define AGBPBAOCCJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E127860)
#define AGBPBAOCCJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E127230)
#define AGBPBAOCCJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E127200)
#define AGBPBAOCCJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1271F0)
#define AGBPBAOCCJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1273D0)
#define AGBPBAOCCJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1272C0)
#define AGBPBAOCCJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E127550)
#define AGBPBAOCCJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E127180)
#define AGBPBAOCCJF_LHOPHLMOHMJ_OFFSET UNITYSDK_OFFSET(0x1E1272B0)
#define AGBPBAOCCJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E127700)
#define AGBPBAOCCJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1276D0)
#define AGBPBAOCCJF_OGGIEJLNGHO_OFFSET UNITYSDK_OFFSET(0x1E1272A0)
#define AGBPBAOCCJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1271E0)
#define AGBPBAOCCJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E127580)
#define AGBPBAOCCJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1275E0)

	class AGBPBAOCCJF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean BBJIDLMAPDF; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGBPBAOCCJF")->GetStaticField(0x30020);
		}

		// static const ::System::Object EKJIPCEFPOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGBPBAOCCJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBPBAOCCJF*))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGBPBAOCCJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGBPBAOCCJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGBPBAOCCJF* Clone()
		{
			return ((::AGBPBAOCCJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_CLONE_OFFSET))(this);
		}

		::System::Boolean OGGIEJLNGHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_OGGIEJLNGHO_OFFSET))(this);
		}

		::System::Void LHOPHLMOHMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_LHOPHLMOHMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGBPBAOCCJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGBPBAOCCJF*))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGBPBAOCCJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGBPBAOCCJF*))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGBPBAOCCJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
