#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OABAALAHIIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OABAALAHIIA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1FD93EE0)
#define OABAALAHIIA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1FD93EF0)
#define OABAALAHIIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD94250)
#define OABAALAHIIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD94470)
#define OABAALAHIIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD93EA0)
#define OABAALAHIIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD93E70)
#define OABAALAHIIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD93E60)
#define OABAALAHIIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD93FD0)
#define OABAALAHIIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD93F00)
#define OABAALAHIIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD94140)
#define OABAALAHIIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD93E20)
#define OABAALAHIIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD94310)
#define OABAALAHIIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD942E0)
#define OABAALAHIIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD93E50)
#define OABAALAHIIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD94170)
#define OABAALAHIIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD941D0)

inline static constexpr unsigned int OABAALAHIIA_TypeDefinitionIndex = 33152;

	class OABAALAHIIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OABAALAHIIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OABAALAHIIA*>**)UnitySDK::FromName("", "OABAALAHIIA")->GetStaticField(0x96B0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OABAALAHIIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OABAALAHIIA*))((::PBYTE)hIl2Cpp + OABAALAHIIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OABAALAHIIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OABAALAHIIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OABAALAHIIA*>*(*)())((::PBYTE)hIl2Cpp + OABAALAHIIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OABAALAHIIA* Clone()
		{
			return ((::OABAALAHIIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OABAALAHIIA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OABAALAHIIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OABAALAHIIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OABAALAHIIA*))((::PBYTE)hIl2Cpp + OABAALAHIIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OABAALAHIIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OABAALAHIIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OABAALAHIIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OABAALAHIIA*))((::PBYTE)hIl2Cpp + OABAALAHIIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OABAALAHIIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
