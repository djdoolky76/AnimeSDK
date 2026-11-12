#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCMEILLLKBD.h"
#include "unitysdk/System/Object.h"
class EKNABKLPEEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKNABKLPEEL_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F5A9B00)
#define EKNABKLPEEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5A9E70)
#define EKNABKLPEEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5AA180)
#define EKNABKLPEEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5A9A60)
#define EKNABKLPEEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5A9A30)
#define EKNABKLPEEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5A9A20)
#define EKNABKLPEEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5A9C20)
#define EKNABKLPEEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5A9B10)
#define EKNABKLPEEL_GEJCIBDMEAI_OFFSET UNITYSDK_OFFSET(0x1F5A9AE0)
#define EKNABKLPEEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5A9CF0)
#define EKNABKLPEEL_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F5A9AF0)
#define EKNABKLPEEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5A99B0)
#define EKNABKLPEEL_LEOIKMGFIDI_OFFSET UNITYSDK_OFFSET(0x1F5A9AD0)
#define EKNABKLPEEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5AA000)
#define EKNABKLPEEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5A9FC0)
#define EKNABKLPEEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5A9A10)
#define EKNABKLPEEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5A9D20)
#define EKNABKLPEEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5A9D80)

inline static constexpr unsigned int EKNABKLPEEL_TypeDefinitionIndex = 25736;

	class EKNABKLPEEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HCMEILLLKBD BENHLEOFBOP; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EKNABKLPEEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EKNABKLPEEL*>**)UnitySDK::FromName("", "EKNABKLPEEL")->GetStaticField(0x47F80);
		}

		// static const ::System::Object BDFNHMIABLK; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKNABKLPEEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKNABKLPEEL*))((::PBYTE)hIl2Cpp + EKNABKLPEEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKNABKLPEEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EKNABKLPEEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EKNABKLPEEL*>*(*)())((::PBYTE)hIl2Cpp + EKNABKLPEEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKNABKLPEEL* Clone()
		{
			return ((::EKNABKLPEEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_CLONE_OFFSET))(this);
		}

		::HCMEILLLKBD LEOIKMGFIDI()
		{
			return ((::HCMEILLLKBD(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_LEOIKMGFIDI_OFFSET))(this);
		}

		::System::Void GEJCIBDMEAI(::HCMEILLLKBD a1)
		{
			return ((::System::Void(*)(::PVOID, ::HCMEILLLKBD))((::PBYTE)hIl2Cpp + EKNABKLPEEL_GEJCIBDMEAI_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKNABKLPEEL_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKNABKLPEEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKNABKLPEEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKNABKLPEEL*))((::PBYTE)hIl2Cpp + EKNABKLPEEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKNABKLPEEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKNABKLPEEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKNABKLPEEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKNABKLPEEL*))((::PBYTE)hIl2Cpp + EKNABKLPEEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKNABKLPEEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
