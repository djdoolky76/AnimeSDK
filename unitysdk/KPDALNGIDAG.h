#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDALNGIDAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPDALNGIDAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E88CDA0)
#define KPDALNGIDAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E88CFC0)
#define KPDALNGIDAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E88C990)
#define KPDALNGIDAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E88C960)
#define KPDALNGIDAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88C950)
#define KPDALNGIDAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E88CB20)
#define KPDALNGIDAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E88CA20)
#define KPDALNGIDAG_GANDKIIOKGI_OFFSET UNITYSDK_OFFSET(0x1E88CA10)
#define KPDALNGIDAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E88CC90)
#define KPDALNGIDAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E88C8E0)
#define KPDALNGIDAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E88CE60)
#define KPDALNGIDAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E88CE30)
#define KPDALNGIDAG_OGAIFOMMPFH_OFFSET UNITYSDK_OFFSET(0x1E88CA00)
#define KPDALNGIDAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E88C940)
#define KPDALNGIDAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E88CCC0)
#define KPDALNGIDAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E88CD20)

inline static constexpr unsigned int KPDALNGIDAG_TypeDefinitionIndex = 32888;

	class KPDALNGIDAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ACNIMJBBNFC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KPDALNGIDAG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPDALNGIDAG*>**)UnitySDK::FromName("", "KPDALNGIDAG")->GetStaticField(0x22260);
		}

		// static const ::System::Object PPPJICCIGOI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPDALNGIDAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDALNGIDAG*))((::PBYTE)hIl2Cpp + KPDALNGIDAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDALNGIDAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPDALNGIDAG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPDALNGIDAG*>*(*)())((::PBYTE)hIl2Cpp + KPDALNGIDAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPDALNGIDAG* Clone()
		{
			return ((::KPDALNGIDAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGAIFOMMPFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_OGAIFOMMPFH_OFFSET))(this);
		}

		::System::Void GANDKIIOKGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPDALNGIDAG_GANDKIIOKGI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPDALNGIDAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPDALNGIDAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPDALNGIDAG*))((::PBYTE)hIl2Cpp + KPDALNGIDAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPDALNGIDAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDALNGIDAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPDALNGIDAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDALNGIDAG*))((::PBYTE)hIl2Cpp + KPDALNGIDAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPDALNGIDAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
