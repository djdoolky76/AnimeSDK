#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APHBPMBMLOM.h"
#include "unitysdk/System/Object.h"
class LGKGKENHNCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGKGKENHNCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E954D80)
#define LGKGKENHNCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E955140)
#define LGKGKENHNCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E954940)
#define LGKGKENHNCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E954900)
#define LGKGKENHNCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9548F0)
#define LGKGKENHNCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E954AD0)
#define LGKGKENHNCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9549F0)
#define LGKGKENHNCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E954BA0)
#define LGKGKENHNCL_HCMMJJMADEM_OFFSET UNITYSDK_OFFSET(0x1E9549D0)
#define LGKGKENHNCL_IELJCNJANPP_OFFSET UNITYSDK_OFFSET(0x1E9549B0)
#define LGKGKENHNCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9548B0)
#define LGKGKENHNCL_KJJHOCEGIMA_OFFSET UNITYSDK_OFFSET(0x1E954990)
#define LGKGKENHNCL_LPKCMJAPGDB_OFFSET UNITYSDK_OFFSET(0x1E9549A0)
#define LGKGKENHNCL_MBANLONIIIF_OFFSET UNITYSDK_OFFSET(0x1E9549C0)
#define LGKGKENHNCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E954FA0)
#define LGKGKENHNCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E954F50)
#define LGKGKENHNCL_OMMGNKBCAIE_OFFSET UNITYSDK_OFFSET(0x1E9549E0)
#define LGKGKENHNCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9548E0)
#define LGKGKENHNCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E954BD0)
#define LGKGKENHNCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E954C30)

	class LGKGKENHNCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IFKAEKMIPNO; // 0x18
		::System::UInt32 CGMOFOAEOPE; // 0x1C
		::APHBPMBMLOM GFLKPJCJKDA; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LGKGKENHNCL")->GetStaticField(0x3F4C0);
		}

		// static const ::System::Object BEEGHMFILJF; // 0x0
		// static const ::System::Object NLMDEOMNDEF; // 0x0
		// static const ::System::Object OOLHFKMLPPF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LGKGKENHNCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGKGKENHNCL*))((::PBYTE)hIl2Cpp + LGKGKENHNCL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LGKGKENHNCL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LGKGKENHNCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGKGKENHNCL* Clone()
		{
			return ((::LGKGKENHNCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KJJHOCEGIMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_KJJHOCEGIMA_OFFSET))(this);
		}

		::System::Void LPKCMJAPGDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGKGKENHNCL_LPKCMJAPGDB_OFFSET))(this, a1);
		}

		::System::UInt32 IELJCNJANPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_IELJCNJANPP_OFFSET))(this);
		}

		::System::Void MBANLONIIIF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGKGKENHNCL_MBANLONIIIF_OFFSET))(this, a1);
		}

		::APHBPMBMLOM HCMMJJMADEM()
		{
			return ((::APHBPMBMLOM(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_HCMMJJMADEM_OFFSET))(this);
		}

		::System::Void OMMGNKBCAIE(::APHBPMBMLOM a1)
		{
			return ((::System::Void(*)(::PVOID, ::APHBPMBMLOM))((::PBYTE)hIl2Cpp + LGKGKENHNCL_OMMGNKBCAIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LGKGKENHNCL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LGKGKENHNCL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LGKGKENHNCL*))((::PBYTE)hIl2Cpp + LGKGKENHNCL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LGKGKENHNCL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LGKGKENHNCL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LGKGKENHNCL*))((::PBYTE)hIl2Cpp + LGKGKENHNCL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LGKGKENHNCL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
