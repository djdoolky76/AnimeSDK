#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKFBNFPFKJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKFBNFPFKJJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3CA5C0)
#define AKFBNFPFKJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3CA660)
#define AKFBNFPFKJJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3CA260)
#define AKFBNFPFKJJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3CA230)
#define AKFBNFPFKJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3CA220)
#define AKFBNFPFKJJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3CA3C0)
#define AKFBNFPFKJJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3CA2D0)
#define AKFBNFPFKJJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3CA520)
#define AKFBNFPFKJJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3CA1B0)
#define AKFBNFPFKJJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3CA610)
#define AKFBNFPFKJJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3CA5E0)
#define AKFBNFPFKJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3CA210)
#define AKFBNFPFKJJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3CA550)
#define AKFBNFPFKJJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3CA5B0)

inline static constexpr unsigned int AKFBNFPFKJJ_TypeDefinitionIndex = 34398;

	class AKFBNFPFKJJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::AKFBNFPFKJJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKFBNFPFKJJ*>**)UnitySDK::FromName("", "AKFBNFPFKJJ")->GetStaticField(0x367C0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKFBNFPFKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKFBNFPFKJJ*))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKFBNFPFKJJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKFBNFPFKJJ*>*(*)())((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKFBNFPFKJJ* Clone()
		{
			return ((::AKFBNFPFKJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKFBNFPFKJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKFBNFPFKJJ*))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKFBNFPFKJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKFBNFPFKJJ*))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKFBNFPFKJJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
