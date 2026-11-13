#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APHBPMBMLOM.h"
#include "unitysdk/System/Object.h"
class LGKGKENHNCL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LGKGKENHNCL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAC27C0)
#define LGKGKENHNCL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAC2B80)
#define LGKGKENHNCL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAC2380)
#define LGKGKENHNCL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAC2340)
#define LGKGKENHNCL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAC2330)
#define LGKGKENHNCL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAC2510)
#define LGKGKENHNCL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAC2430)
#define LGKGKENHNCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAC25E0)
#define LGKGKENHNCL_HCMMJJMADEM_OFFSET UNITYSDK_OFFSET(0x1FAC23F0)
#define LGKGKENHNCL_IELJCNJANPP_OFFSET UNITYSDK_OFFSET(0x1FAC23D0)
#define LGKGKENHNCL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAC22F0)
#define LGKGKENHNCL_KJJHOCEGIMA_OFFSET UNITYSDK_OFFSET(0x1FAC2410)
#define LGKGKENHNCL_LPKCMJAPGDB_OFFSET UNITYSDK_OFFSET(0x1FAC2420)
#define LGKGKENHNCL_MBANLONIIIF_OFFSET UNITYSDK_OFFSET(0x1FAC23E0)
#define LGKGKENHNCL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAC29E0)
#define LGKGKENHNCL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAC2990)
#define LGKGKENHNCL_OMMGNKBCAIE_OFFSET UNITYSDK_OFFSET(0x1FAC2400)
#define LGKGKENHNCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAC2320)
#define LGKGKENHNCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAC2610)
#define LGKGKENHNCL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAC2670)

inline static constexpr unsigned int LGKGKENHNCL_TypeDefinitionIndex = 31889;

	class LGKGKENHNCL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::APHBPMBMLOM GFLKPJCJKDA; // 0x18
		::System::UInt32 CGMOFOAEOPE; // 0x1C
		::System::UInt32 IFKAEKMIPNO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LGKGKENHNCL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LGKGKENHNCL*>**)UnitySDK::FromName("", "LGKGKENHNCL")->GetStaticField(0x35950);
		}

		// static const ::System::Object NLMDEOMNDEF; // 0x0
		// static const ::System::Object OOLHFKMLPPF; // 0x0
		// static const ::System::Object BEEGHMFILJF; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::LGKGKENHNCL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LGKGKENHNCL*>*(*)())((::PBYTE)hIl2Cpp + LGKGKENHNCL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LGKGKENHNCL* Clone()
		{
			return ((::LGKGKENHNCL*(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_CLONE_OFFSET))(this);
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

		::System::UInt32 KJJHOCEGIMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LGKGKENHNCL_KJJHOCEGIMA_OFFSET))(this);
		}

		::System::Void LPKCMJAPGDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LGKGKENHNCL_LPKCMJAPGDB_OFFSET))(this, a1);
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
