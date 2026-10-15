#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMMLEBEEJLB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMMLEBEEJLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB4CC90)
#define NMMLEBEEJLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4CEB0)
#define NMMLEBEEJLB_CJHJGLHAKCB_OFFSET UNITYSDK_OFFSET(0x1EB4C900)
#define NMMLEBEEJLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB4C880)
#define NMMLEBEEJLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB4C850)
#define NMMLEBEEJLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C840)
#define NMMLEBEEJLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB4CA10)
#define NMMLEBEEJLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB4C910)
#define NMMLEBEEJLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB4CB80)
#define NMMLEBEEJLB_GODJBJHLPMO_OFFSET UNITYSDK_OFFSET(0x1EB4C8F0)
#define NMMLEBEEJLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB4C7D0)
#define NMMLEBEEJLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB4CD50)
#define NMMLEBEEJLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB4CD20)
#define NMMLEBEEJLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB4C830)
#define NMMLEBEEJLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB4CBB0)
#define NMMLEBEEJLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB4CC10)

inline static constexpr unsigned int NMMLEBEEJLB_TypeDefinitionIndex = 32844;

	class NMMLEBEEJLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KODPJBHAAEB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NMMLEBEEJLB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMMLEBEEJLB*>**)UnitySDK::FromName("", "NMMLEBEEJLB")->GetStaticField(0x6ABD0);
		}

		// static const ::System::Object BPFMHHCCHBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMMLEBEEJLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMMLEBEEJLB*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMMLEBEEJLB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMMLEBEEJLB*>*(*)())((::PBYTE)hIl2Cpp + NMMLEBEEJLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMMLEBEEJLB* Clone()
		{
			return ((::NMMLEBEEJLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 GODJBJHLPMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_GODJBJHLPMO_OFFSET))(this);
		}

		::System::Void CJHJGLHAKCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CJHJGLHAKCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMMLEBEEJLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMMLEBEEJLB*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMMLEBEEJLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMMLEBEEJLB*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMMLEBEEJLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
