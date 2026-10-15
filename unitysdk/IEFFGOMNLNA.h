#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEFFGOMNLNA;
class JIBBEEAIDIC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEFFGOMNLNA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E638360)
#define IEFFGOMNLNA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6386B0)
#define IEFFGOMNLNA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E637C40)
#define IEFFGOMNLNA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E637BB0)
#define IEFFGOMNLNA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E637BA0)
#define IEFFGOMNLNA_EPJKDFDNJPF_OFFSET UNITYSDK_OFFSET(0x1E637CF0)
#define IEFFGOMNLNA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E637E70)
#define IEFFGOMNLNA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E637D00)
#define IEFFGOMNLNA_FCDBBOGJPOC_OFFSET UNITYSDK_OFFSET(0x1E637CE0)
#define IEFFGOMNLNA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E638140)
#define IEFFGOMNLNA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E637B60)
#define IEFFGOMNLNA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6384E0)
#define IEFFGOMNLNA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6383C0)
#define IEFFGOMNLNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E637B90)
#define IEFFGOMNLNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E638270)
#define IEFFGOMNLNA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6382D0)

	class IEFFGOMNLNA : public ::System::Object
	{
	public:
		::JIBBEEAIDIC* DKJFDKIODFK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEFFGOMNLNA")->GetStaticField(0x47EE0);
		}

		// static const ::System::Object AAOHLOOCLON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEFFGOMNLNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEFFGOMNLNA*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEFFGOMNLNA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEFFGOMNLNA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEFFGOMNLNA* Clone()
		{
			return ((::IEFFGOMNLNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_CLONE_OFFSET))(this);
		}

		::JIBBEEAIDIC* FCDBBOGJPOC()
		{
			return ((::JIBBEEAIDIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_FCDBBOGJPOC_OFFSET))(this);
		}

		::System::Void EPJKDFDNJPF(::JIBBEEAIDIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIBBEEAIDIC*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_EPJKDFDNJPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEFFGOMNLNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEFFGOMNLNA*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEFFGOMNLNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEFFGOMNLNA*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEFFGOMNLNA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
