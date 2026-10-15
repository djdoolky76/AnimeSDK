#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEOGDOGDMM;
class KAIMCDOLBHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAIMCDOLBHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B7A80)
#define KAIMCDOLBHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B7CE0)
#define KAIMCDOLBHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B7450)
#define KAIMCDOLBHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B73D0)
#define KAIMCDOLBHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B73C0)
#define KAIMCDOLBHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B7660)
#define KAIMCDOLBHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B74F0)
#define KAIMCDOLBHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B7930)
#define KAIMCDOLBHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B7380)
#define KAIMCDOLBHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B7B60)
#define KAIMCDOLBHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B7AE0)
#define KAIMCDOLBHO_OIJLBOANPJB_OFFSET UNITYSDK_OFFSET(0x1E7B74D0)
#define KAIMCDOLBHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B73B0)
#define KAIMCDOLBHO_PDGNPJACACI_OFFSET UNITYSDK_OFFSET(0x1E7B74E0)
#define KAIMCDOLBHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B7990)
#define KAIMCDOLBHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B79F0)

inline static constexpr unsigned int KAIMCDOLBHO_TypeDefinitionIndex = 27385;

	class KAIMCDOLBHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AGEOGDOGDMM* OGCDFPMOJLM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KAIMCDOLBHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KAIMCDOLBHO*>**)UnitySDK::FromName("", "KAIMCDOLBHO")->GetStaticField(0xC9A0);
		}

		// static const ::System::Object FKNGPKFBFMB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAIMCDOLBHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAIMCDOLBHO*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAIMCDOLBHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KAIMCDOLBHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KAIMCDOLBHO*>*(*)())((::PBYTE)hIl2Cpp + KAIMCDOLBHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAIMCDOLBHO* Clone()
		{
			return ((::KAIMCDOLBHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_CLONE_OFFSET))(this);
		}

		::AGEOGDOGDMM* OIJLBOANPJB()
		{
			return ((::AGEOGDOGDMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_OIJLBOANPJB_OFFSET))(this);
		}

		::System::Void PDGNPJACACI(::AGEOGDOGDMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEOGDOGDMM*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_PDGNPJACACI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAIMCDOLBHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAIMCDOLBHO*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAIMCDOLBHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAIMCDOLBHO*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAIMCDOLBHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
