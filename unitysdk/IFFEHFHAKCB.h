#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFFEHFHAKCB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IFFEHFHAKCB_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E618800)
#define IFFEHFHAKCB_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E618810)
#define IFFEHFHAKCB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E618B70)
#define IFFEHFHAKCB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E618D90)
#define IFFEHFHAKCB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6187C0)
#define IFFEHFHAKCB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E618790)
#define IFFEHFHAKCB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E618780)
#define IFFEHFHAKCB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6188F0)
#define IFFEHFHAKCB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E618820)
#define IFFEHFHAKCB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E618A60)
#define IFFEHFHAKCB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E618740)
#define IFFEHFHAKCB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E618C30)
#define IFFEHFHAKCB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E618C00)
#define IFFEHFHAKCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E618770)
#define IFFEHFHAKCB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E618A90)
#define IFFEHFHAKCB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E618AF0)

inline static constexpr unsigned int IFFEHFHAKCB_TypeDefinitionIndex = 27311;

	class IFFEHFHAKCB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IFFEHFHAKCB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IFFEHFHAKCB*>**)UnitySDK::FromName("", "IFFEHFHAKCB")->GetStaticField(0x11260);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IFFEHFHAKCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFFEHFHAKCB*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IFFEHFHAKCB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IFFEHFHAKCB*>*(*)())((::PBYTE)hIl2Cpp + IFFEHFHAKCB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IFFEHFHAKCB* Clone()
		{
			return ((::IFFEHFHAKCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IFFEHFHAKCB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IFFEHFHAKCB*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IFFEHFHAKCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFFEHFHAKCB*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IFFEHFHAKCB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
