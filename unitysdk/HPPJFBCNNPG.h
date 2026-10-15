#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPPJFBCNNPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPPJFBCNNPG_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E600530)
#define HPPJFBCNNPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E600890)
#define HPPJFBCNNPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E600AB0)
#define HPPJFBCNNPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6004E0)
#define HPPJFBCNNPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6004B0)
#define HPPJFBCNNPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6004A0)
#define HPPJFBCNNPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E600610)
#define HPPJFBCNNPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E600540)
#define HPPJFBCNNPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E600780)
#define HPPJFBCNNPG_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E600520)
#define HPPJFBCNNPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E600460)
#define HPPJFBCNNPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E600950)
#define HPPJFBCNNPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E600920)
#define HPPJFBCNNPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E600490)
#define HPPJFBCNNPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6007B0)
#define HPPJFBCNNPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E600810)

	class HPPJFBCNNPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IBEBBFIHLLP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HPPJFBCNNPG")->GetStaticField(0x52800);
		}

		// static const ::System::Object AODKNNMBGAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPPJFBCNNPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPPJFBCNNPG*))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPPJFBCNNPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HPPJFBCNNPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPPJFBCNNPG* Clone()
		{
			return ((::HPPJFBCNNPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_CLONE_OFFSET))(this);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPPJFBCNNPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPPJFBCNNPG*))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPPJFBCNNPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPPJFBCNNPG*))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPPJFBCNNPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
