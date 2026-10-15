#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOPJFJCLIAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DOPJFJCLIAH_ACHJDFFEIKC_OFFSET UNITYSDK_OFFSET(0x1E208450)
#define DOPJFJCLIAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E208860)
#define DOPJFJCLIAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E208A50)
#define DOPJFJCLIAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2083C0)
#define DOPJFJCLIAH_COBLHEMOKML_OFFSET UNITYSDK_OFFSET(0x1E208440)
#define DOPJFJCLIAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E208380)
#define DOPJFJCLIAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E208370)
#define DOPJFJCLIAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2085A0)
#define DOPJFJCLIAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E208480)
#define DOPJFJCLIAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E208690)
#define DOPJFJCLIAH_JDKCFLONPCE_OFFSET UNITYSDK_OFFSET(0x1E208460)
#define DOPJFJCLIAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E208300)
#define DOPJFJCLIAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2088D0)
#define DOPJFJCLIAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E208890)
#define DOPJFJCLIAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E208360)
#define DOPJFJCLIAH_PJAAEPHOOJL_OFFSET UNITYSDK_OFFSET(0x1E208470)
#define DOPJFJCLIAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2086C0)
#define DOPJFJCLIAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E208720)

inline static constexpr unsigned int DOPJFJCLIAH_TypeDefinitionIndex = 25684;

	class DOPJFJCLIAH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean KCIAHKNIDIB; // 0x18
		::System::Boolean EEPAGJPCBPP; // 0x19
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DOPJFJCLIAH")->GetStaticField(0x44070);
		}

		// static const ::System::Object MHLMJCDMAEL; // 0x0
		// static const ::System::Object APNDMOJDMFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DOPJFJCLIAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOPJFJCLIAH*))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOPJFJCLIAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DOPJFJCLIAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DOPJFJCLIAH* Clone()
		{
			return ((::DOPJFJCLIAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_CLONE_OFFSET))(this);
		}

		::System::Boolean COBLHEMOKML()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_COBLHEMOKML_OFFSET))(this);
		}

		::System::Void ACHJDFFEIKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_ACHJDFFEIKC_OFFSET))(this, a1);
		}

		::System::Boolean JDKCFLONPCE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_JDKCFLONPCE_OFFSET))(this);
		}

		::System::Void PJAAEPHOOJL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_PJAAEPHOOJL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DOPJFJCLIAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DOPJFJCLIAH*))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DOPJFJCLIAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DOPJFJCLIAH*))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DOPJFJCLIAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
