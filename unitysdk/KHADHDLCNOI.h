#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHADHDLCNOI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHADHDLCNOI_ACDNNPCNCNB_OFFSET UNITYSDK_OFFSET(0x1E83F020)
#define KHADHDLCNOI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E83F390)
#define KHADHDLCNOI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83F5F0)
#define KHADHDLCNOI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E83EFA0)
#define KHADHDLCNOI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E83EF60)
#define KHADHDLCNOI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83EF50)
#define KHADHDLCNOI_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E83EFF0)
#define KHADHDLCNOI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E83F110)
#define KHADHDLCNOI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E83F030)
#define KHADHDLCNOI_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E83F000)
#define KHADHDLCNOI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E83F1F0)
#define KHADHDLCNOI_IAAOBDCIKIM_OFFSET UNITYSDK_OFFSET(0x1E83F010)
#define KHADHDLCNOI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E83EF10)
#define KHADHDLCNOI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E83F470)
#define KHADHDLCNOI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E83F430)
#define KHADHDLCNOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E83EF40)
#define KHADHDLCNOI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E83F220)
#define KHADHDLCNOI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E83F280)

	class KHADHDLCNOI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean LHDOHGOPAIE; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GEMFJILOPLL; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHADHDLCNOI")->GetStaticField(0x16D60);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object DJJIGCEJAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHADHDLCNOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHADHDLCNOI*))((::PBYTE)hIl2Cpp + KHADHDLCNOI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHADHDLCNOI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHADHDLCNOI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHADHDLCNOI* Clone()
		{
			return ((::KHADHDLCNOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHADHDLCNOI_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean IAAOBDCIKIM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_IAAOBDCIKIM_OFFSET))(this);
		}

		::System::Void ACDNNPCNCNB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHADHDLCNOI_ACDNNPCNCNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHADHDLCNOI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHADHDLCNOI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHADHDLCNOI*))((::PBYTE)hIl2Cpp + KHADHDLCNOI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHADHDLCNOI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHADHDLCNOI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHADHDLCNOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHADHDLCNOI*))((::PBYTE)hIl2Cpp + KHADHDLCNOI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHADHDLCNOI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
