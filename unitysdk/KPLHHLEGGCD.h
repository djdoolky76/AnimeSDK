#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPLHHLEGGCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPLHHLEGGCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8920C0)
#define KPLHHLEGGCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E892390)
#define KPLHHLEGGCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E891CC0)
#define KPLHHLEGGCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E891C90)
#define KPLHHLEGGCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E891C80)
#define KPLHHLEGGCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E891E80)
#define KPLHHLEGGCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E891D70)
#define KPLHHLEGGCD_FHEIFCBDCFB_OFFSET UNITYSDK_OFFSET(0x1E891D60)
#define KPLHHLEGGCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E891F50)
#define KPLHHLEGGCD_IGHHFLHPCDN_OFFSET UNITYSDK_OFFSET(0x1E891D40)
#define KPLHHLEGGCD_JGKCDIFEMPL_OFFSET UNITYSDK_OFFSET(0x1E891D30)
#define KPLHHLEGGCD_JGLKJJBBBIF_OFFSET UNITYSDK_OFFSET(0x1E891D50)
#define KPLHHLEGGCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E891C10)
#define KPLHHLEGGCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E892210)
#define KPLHHLEGGCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8921D0)
#define KPLHHLEGGCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E891C70)
#define KPLHHLEGGCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E891F80)
#define KPLHHLEGGCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E891FE0)

inline static constexpr unsigned int KPLHHLEGGCD_TypeDefinitionIndex = 28034;

	class KPLHHLEGGCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EHCFPHJABDL; // 0x18
		::System::UInt32 AJPNGCJCMEB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KPLHHLEGGCD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPLHHLEGGCD*>**)UnitySDK::FromName("", "KPLHHLEGGCD")->GetStaticField(0xD350);
		}

		// static const ::System::Object FBCFBAPNOGL; // 0x0
		// static const ::System::Object FEGJODHHKKJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPLHHLEGGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPLHHLEGGCD*))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPLHHLEGGCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPLHHLEGGCD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPLHHLEGGCD*>*(*)())((::PBYTE)hIl2Cpp + KPLHHLEGGCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPLHHLEGGCD* Clone()
		{
			return ((::KPLHHLEGGCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKCDIFEMPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_JGKCDIFEMPL_OFFSET))(this);
		}

		::System::Void IGHHFLHPCDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_IGHHFLHPCDN_OFFSET))(this, a1);
		}

		::System::UInt32 JGLKJJBBBIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_JGLKJJBBBIF_OFFSET))(this);
		}

		::System::Void FHEIFCBDCFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_FHEIFCBDCFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPLHHLEGGCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPLHHLEGGCD*))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPLHHLEGGCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPLHHLEGGCD*))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPLHHLEGGCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
