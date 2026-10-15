#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAFIJAFIPN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJAFIJAFIPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D8B50)
#define CJAFIJAFIPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8E20)
#define CJAFIJAFIPN_CKNNEEBKKOM_OFFSET UNITYSDK_OFFSET(0x1E0D87D0)
#define CJAFIJAFIPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D8750)
#define CJAFIJAFIPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D8720)
#define CJAFIJAFIPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8710)
#define CJAFIJAFIPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D8910)
#define CJAFIJAFIPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D8800)
#define CJAFIJAFIPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D89E0)
#define CJAFIJAFIPN_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x1E0D87F0)
#define CJAFIJAFIPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D86A0)
#define CJAFIJAFIPN_KBJKBCIENMD_OFFSET UNITYSDK_OFFSET(0x1E0D87C0)
#define CJAFIJAFIPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D8CA0)
#define CJAFIJAFIPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D8C60)
#define CJAFIJAFIPN_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x1E0D87E0)
#define CJAFIJAFIPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D8700)
#define CJAFIJAFIPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D8A10)
#define CJAFIJAFIPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D8A70)

	class CJAFIJAFIPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OEPOBIODAJH; // 0x18
		::System::UInt32 OMGJOGCPEMA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CJAFIJAFIPN")->GetStaticField(0x18B10);
		}

		// static const ::System::Object GNENJENKPOF; // 0x0
		// static const ::System::Object BPLJLIMECGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJAFIJAFIPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAFIJAFIPN*))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJAFIJAFIPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CJAFIJAFIPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJAFIJAFIPN* Clone()
		{
			return ((::CJAFIJAFIPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 KBJKBCIENMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_KBJKBCIENMD_OFFSET))(this);
		}

		::System::Void CKNNEEBKKOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_CKNNEEBKKOM_OFFSET))(this, a1);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJAFIJAFIPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJAFIJAFIPN*))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJAFIJAFIPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJAFIJAFIPN*))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJAFIJAFIPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
