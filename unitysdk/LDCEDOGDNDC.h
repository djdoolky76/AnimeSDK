#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LDCEDOGDNDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LDCEDOGDNDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F2D90)
#define LDCEDOGDNDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F3060)
#define LDCEDOGDNDC_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E8F2A60)
#define LDCEDOGDNDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F29E0)
#define LDCEDOGDNDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F29B0)
#define LDCEDOGDNDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F29A0)
#define LDCEDOGDNDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F2B50)
#define LDCEDOGDNDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F2A70)
#define LDCEDOGDNDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F2C20)
#define LDCEDOGDNDC_HPNGDONMAPF_OFFSET UNITYSDK_OFFSET(0x1E8F2A40)
#define LDCEDOGDNDC_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E8F2A50)
#define LDCEDOGDNDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F2960)
#define LDCEDOGDNDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F2EE0)
#define LDCEDOGDNDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F2EA0)
#define LDCEDOGDNDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F2990)
#define LDCEDOGDNDC_PHCMBNJGBGB_OFFSET UNITYSDK_OFFSET(0x1E8F2A30)
#define LDCEDOGDNDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F2C50)
#define LDCEDOGDNDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F2CB0)

inline static constexpr unsigned int LDCEDOGDNDC_TypeDefinitionIndex = 30283;

	class LDCEDOGDNDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		::System::UInt32 FACHANGNFIN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::LDCEDOGDNDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LDCEDOGDNDC*>**)UnitySDK::FromName("", "LDCEDOGDNDC")->GetStaticField(0x337E0);
		}

		// static const ::System::Object LJEDNBHJPDA; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LDCEDOGDNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCEDOGDNDC*))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LDCEDOGDNDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LDCEDOGDNDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LDCEDOGDNDC*>*(*)())((::PBYTE)hIl2Cpp + LDCEDOGDNDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LDCEDOGDNDC* Clone()
		{
			return ((::LDCEDOGDNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_CLONE_OFFSET))(this);
		}

		::System::UInt32 PHCMBNJGBGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_PHCMBNJGBGB_OFFSET))(this);
		}

		::System::Void HPNGDONMAPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_HPNGDONMAPF_OFFSET))(this, a1);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LDCEDOGDNDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LDCEDOGDNDC*))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LDCEDOGDNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LDCEDOGDNDC*))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LDCEDOGDNDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
