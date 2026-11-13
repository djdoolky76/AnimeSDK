#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEJFHHFLMOC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEJFHHFLMOC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2066E510)
#define PEJFHHFLMOC_CCTOR_OFFSET UNITYSDK_OFFSET(0x2066E820)
#define PEJFHHFLMOC_CLONE_OFFSET UNITYSDK_OFFSET(0x2066E090)
#define PEJFHHFLMOC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2066E050)
#define PEJFHHFLMOC_CTOR_OFFSET UNITYSDK_OFFSET(0x2066E040)
#define PEJFHHFLMOC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2066E230)
#define PEJFHHFLMOC_EQUALS_OFFSET UNITYSDK_OFFSET(0x2066E140)
#define PEJFHHFLMOC_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x2066E0E0)
#define PEJFHHFLMOC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2066E310)
#define PEJFHHFLMOC_GNBEKJGDKHN_OFFSET UNITYSDK_OFFSET(0x2066E110)
#define PEJFHHFLMOC_HOCGGDMCDKB_OFFSET UNITYSDK_OFFSET(0x2066E100)
#define PEJFHHFLMOC_IGFEDDPANGO_OFFSET UNITYSDK_OFFSET(0x2066E120)
#define PEJFHHFLMOC_INBCNELIHJC_OFFSET UNITYSDK_OFFSET(0x2066E130)
#define PEJFHHFLMOC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2066E000)
#define PEJFHHFLMOC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2066E680)
#define PEJFHHFLMOC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2066E630)
#define PEJFHHFLMOC_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x2066E0F0)
#define PEJFHHFLMOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2066E030)
#define PEJFHHFLMOC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2066E340)
#define PEJFHHFLMOC_WRITETO_OFFSET UNITYSDK_OFFSET(0x2066E3A0)

inline static constexpr unsigned int PEJFHHFLMOC_TypeDefinitionIndex = 32317;

	class PEJFHHFLMOC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GDFANDJIGKA; // 0x18
		::System::Boolean OEDLLKLLNDF; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PEJFHHFLMOC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEJFHHFLMOC*>**)UnitySDK::FromName("", "PEJFHHFLMOC")->GetStaticField(0x33BD0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object DKOCHCCBOAG; // 0x0
		// static const ::System::Object JIHIFJDNMDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEJFHHFLMOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEJFHHFLMOC*))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEJFHHFLMOC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEJFHHFLMOC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEJFHHFLMOC*>*(*)())((::PBYTE)hIl2Cpp + PEJFHHFLMOC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEJFHHFLMOC* Clone()
		{
			return ((::PEJFHHFLMOC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean HOCGGDMCDKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_HOCGGDMCDKB_OFFSET))(this);
		}

		::System::Void GNBEKJGDKHN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_GNBEKJGDKHN_OFFSET))(this, a1);
		}

		::System::UInt32 IGFEDDPANGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_IGFEDDPANGO_OFFSET))(this);
		}

		::System::Void INBCNELIHJC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_INBCNELIHJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEJFHHFLMOC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEJFHHFLMOC*))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEJFHHFLMOC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEJFHHFLMOC*))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEJFHHFLMOC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
