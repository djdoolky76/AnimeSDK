#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABCHBKBKCDF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABCHBKBKCDF_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DDC7540)
#define ABCHBKBKCDF_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DDC7550)
#define ABCHBKBKCDF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC78A0)
#define ABCHBKBKCDF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDC7B70)
#define ABCHBKBKCDF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC74F0)
#define ABCHBKBKCDF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC74C0)
#define ABCHBKBKCDF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC74B0)
#define ABCHBKBKCDF_DCDJIDBEFGD_OFFSET UNITYSDK_OFFSET(0x1DDC7560)
#define ABCHBKBKCDF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC7660)
#define ABCHBKBKCDF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC7580)
#define ABCHBKBKCDF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC7730)
#define ABCHBKBKCDF_JBIGLLIFOFB_OFFSET UNITYSDK_OFFSET(0x1DDC7570)
#define ABCHBKBKCDF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC7470)
#define ABCHBKBKCDF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC79F0)
#define ABCHBKBKCDF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC79B0)
#define ABCHBKBKCDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC74A0)
#define ABCHBKBKCDF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC7760)
#define ABCHBKBKCDF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC77C0)

inline static constexpr unsigned int ABCHBKBKCDF_TypeDefinitionIndex = 26878;

	class ABCHBKBKCDF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::UInt32 CIDFPJJEONE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ABCHBKBKCDF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ABCHBKBKCDF*>**)UnitySDK::FromName("", "ABCHBKBKCDF")->GetStaticField(0x388A0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object IOJCIGNHNOK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABCHBKBKCDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABCHBKBKCDF*))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABCHBKBKCDF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ABCHBKBKCDF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ABCHBKBKCDF*>*(*)())((::PBYTE)hIl2Cpp + ABCHBKBKCDF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABCHBKBKCDF* Clone()
		{
			return ((::ABCHBKBKCDF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 DCDJIDBEFGD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_DCDJIDBEFGD_OFFSET))(this);
		}

		::System::Void JBIGLLIFOFB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_JBIGLLIFOFB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABCHBKBKCDF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABCHBKBKCDF*))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABCHBKBKCDF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABCHBKBKCDF*))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABCHBKBKCDF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
