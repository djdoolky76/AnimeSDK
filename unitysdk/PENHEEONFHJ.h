#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PENHEEONFHJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PENHEEONFHJ_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF1E820)
#define PENHEEONFHJ_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF1E830)
#define PENHEEONFHJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1EB60)
#define PENHEEONFHJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1EE30)
#define PENHEEONFHJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1E7B0)
#define PENHEEONFHJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1E780)
#define PENHEEONFHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E770)
#define PENHEEONFHJ_DEPBFAEAGPH_OFFSET UNITYSDK_OFFSET(0x1DF1E800)
#define PENHEEONFHJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1E920)
#define PENHEEONFHJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1E840)
#define PENHEEONFHJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1E9F0)
#define PENHEEONFHJ_JCEDALEONII_OFFSET UNITYSDK_OFFSET(0x1DF1E810)
#define PENHEEONFHJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1E730)
#define PENHEEONFHJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1ECB0)
#define PENHEEONFHJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1EC70)
#define PENHEEONFHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1E760)
#define PENHEEONFHJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1EA20)
#define PENHEEONFHJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1EA80)

inline static constexpr unsigned int PENHEEONFHJ_TypeDefinitionIndex = 27906;

	class PENHEEONFHJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 AHADILFIIFF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PENHEEONFHJ")->GetStaticField(0x3A660);
		}

		// static const ::System::Object KHIPHMCDNOM; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PENHEEONFHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PENHEEONFHJ*))((::PBYTE)hIl2Cpp + PENHEEONFHJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PENHEEONFHJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PENHEEONFHJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PENHEEONFHJ* Clone()
		{
			return ((::PENHEEONFHJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEPBFAEAGPH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_DEPBFAEAGPH_OFFSET))(this);
		}

		::System::Void JCEDALEONII(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PENHEEONFHJ_JCEDALEONII_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PENHEEONFHJ_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PENHEEONFHJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PENHEEONFHJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PENHEEONFHJ*))((::PBYTE)hIl2Cpp + PENHEEONFHJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PENHEEONFHJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PENHEEONFHJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PENHEEONFHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PENHEEONFHJ*))((::PBYTE)hIl2Cpp + PENHEEONFHJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PENHEEONFHJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
