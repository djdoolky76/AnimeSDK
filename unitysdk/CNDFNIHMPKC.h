#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CNDFNIHMPKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CNDFNIHMPKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0DA480)
#define CNDFNIHMPKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA520)
#define CNDFNIHMPKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0DA170)
#define CNDFNIHMPKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DA140)
#define CNDFNIHMPKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA130)
#define CNDFNIHMPKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0DA280)
#define CNDFNIHMPKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0DA1B0)
#define CNDFNIHMPKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0DA3E0)
#define CNDFNIHMPKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0DA0F0)
#define CNDFNIHMPKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0DA4D0)
#define CNDFNIHMPKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0DA4A0)
#define CNDFNIHMPKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0DA120)
#define CNDFNIHMPKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0DA410)
#define CNDFNIHMPKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0DA470)

inline static constexpr unsigned int CNDFNIHMPKC_TypeDefinitionIndex = 29027;

	class CNDFNIHMPKC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CNDFNIHMPKC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CNDFNIHMPKC*>**)UnitySDK::FromName("", "CNDFNIHMPKC")->GetStaticField(0x1CD80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CNDFNIHMPKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNDFNIHMPKC*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CNDFNIHMPKC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CNDFNIHMPKC*>*(*)())((::PBYTE)hIl2Cpp + CNDFNIHMPKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CNDFNIHMPKC* Clone()
		{
			return ((::CNDFNIHMPKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CNDFNIHMPKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNDFNIHMPKC*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CNDFNIHMPKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNDFNIHMPKC*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CNDFNIHMPKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
