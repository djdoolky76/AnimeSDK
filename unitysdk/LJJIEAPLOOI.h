#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJIEAPLOOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJJIEAPLOOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E984BE0)
#define LJJIEAPLOOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E984E00)
#define LJJIEAPLOOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9847D0)
#define LJJIEAPLOOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9847A0)
#define LJJIEAPLOOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E984790)
#define LJJIEAPLOOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E984960)
#define LJJIEAPLOOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E984860)
#define LJJIEAPLOOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E984AD0)
#define LJJIEAPLOOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E984720)
#define LJJIEAPLOOI_KGAHDFKJAJD_OFFSET UNITYSDK_OFFSET(0x1E984850)
#define LJJIEAPLOOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E984CA0)
#define LJJIEAPLOOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E984C70)
#define LJJIEAPLOOI_OLJNLJNCFFO_OFFSET UNITYSDK_OFFSET(0x1E984840)
#define LJJIEAPLOOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E984780)
#define LJJIEAPLOOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E984B00)
#define LJJIEAPLOOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E984B60)

	class LJJIEAPLOOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PODEGEHGIJH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LJJIEAPLOOI")->GetStaticField(0x48660);
		}

		// static const ::System::Object GONHNKMOJCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJJIEAPLOOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJJIEAPLOOI*))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJIEAPLOOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LJJIEAPLOOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJJIEAPLOOI* Clone()
		{
			return ((::LJJIEAPLOOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OLJNLJNCFFO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_OLJNLJNCFFO_OFFSET))(this);
		}

		::System::Void KGAHDFKJAJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_KGAHDFKJAJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJJIEAPLOOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJJIEAPLOOI*))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJJIEAPLOOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJJIEAPLOOI*))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJJIEAPLOOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
