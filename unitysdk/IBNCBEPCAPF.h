#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBNCBEPCAPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBNCBEPCAPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5ED990)
#define IBNCBEPCAPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5EDA30)
#define IBNCBEPCAPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5ED680)
#define IBNCBEPCAPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5ED650)
#define IBNCBEPCAPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5ED640)
#define IBNCBEPCAPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5ED790)
#define IBNCBEPCAPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5ED6C0)
#define IBNCBEPCAPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5ED8F0)
#define IBNCBEPCAPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5ED600)
#define IBNCBEPCAPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5ED9E0)
#define IBNCBEPCAPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5ED9B0)
#define IBNCBEPCAPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5ED630)
#define IBNCBEPCAPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5ED920)
#define IBNCBEPCAPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5ED980)

inline static constexpr unsigned int IBNCBEPCAPF_TypeDefinitionIndex = 34881;

	class IBNCBEPCAPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::IBNCBEPCAPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBNCBEPCAPF*>**)UnitySDK::FromName("", "IBNCBEPCAPF")->GetStaticField(0x43F20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBNCBEPCAPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBNCBEPCAPF*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBNCBEPCAPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBNCBEPCAPF*>*(*)())((::PBYTE)hIl2Cpp + IBNCBEPCAPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBNCBEPCAPF* Clone()
		{
			return ((::IBNCBEPCAPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBNCBEPCAPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBNCBEPCAPF*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBNCBEPCAPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBNCBEPCAPF*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBNCBEPCAPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
