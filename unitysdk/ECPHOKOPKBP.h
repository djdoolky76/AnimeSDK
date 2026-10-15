#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECPHOKOPKBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECPHOKOPKBP_AEOFCIFEEEM_OFFSET UNITYSDK_OFFSET(0x1E259820)
#define ECPHOKOPKBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E259BD0)
#define ECPHOKOPKBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E259E30)
#define ECPHOKOPKBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E259780)
#define ECPHOKOPKBP_CPOOIDGKFPB_OFFSET UNITYSDK_OFFSET(0x1E259800)
#define ECPHOKOPKBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E259740)
#define ECPHOKOPKBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E259730)
#define ECPHOKOPKBP_ENGNJMJDFJO_OFFSET UNITYSDK_OFFSET(0x1E259830)
#define ECPHOKOPKBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E259950)
#define ECPHOKOPKBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E259840)
#define ECPHOKOPKBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E259A30)
#define ECPHOKOPKBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2596C0)
#define ECPHOKOPKBP_KHNLEEDIEKB_OFFSET UNITYSDK_OFFSET(0x1E259810)
#define ECPHOKOPKBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E259CB0)
#define ECPHOKOPKBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E259C70)
#define ECPHOKOPKBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E259720)
#define ECPHOKOPKBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E259A60)
#define ECPHOKOPKBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E259AC0)

	class ECPHOKOPKBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FENDJMNOHHG; // 0x18
		::System::Boolean JAPGFKJECPM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ECPHOKOPKBP")->GetStaticField(0x3F310);
		}

		// static const ::System::Object FILPGLHFNCI; // 0x0
		// static const ::System::Object CPEJMCHGHPH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECPHOKOPKBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPHOKOPKBP*))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECPHOKOPKBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ECPHOKOPKBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECPHOKOPKBP* Clone()
		{
			return ((::ECPHOKOPKBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPOOIDGKFPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_CPOOIDGKFPB_OFFSET))(this);
		}

		::System::Void KHNLEEDIEKB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_KHNLEEDIEKB_OFFSET))(this, a1);
		}

		::System::Boolean AEOFCIFEEEM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_AEOFCIFEEEM_OFFSET))(this);
		}

		::System::Void ENGNJMJDFJO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_ENGNJMJDFJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECPHOKOPKBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECPHOKOPKBP*))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECPHOKOPKBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPHOKOPKBP*))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECPHOKOPKBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
