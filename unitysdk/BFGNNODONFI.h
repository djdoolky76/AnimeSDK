#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFGNNODONFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFGNNODONFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA07FE0)
#define BFGNNODONFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA08080)
#define BFGNNODONFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA07C80)
#define BFGNNODONFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA07C50)
#define BFGNNODONFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA07C40)
#define BFGNNODONFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA07DE0)
#define BFGNNODONFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA07CF0)
#define BFGNNODONFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA07F40)
#define BFGNNODONFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA07BD0)
#define BFGNNODONFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA08030)
#define BFGNNODONFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA08000)
#define BFGNNODONFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA07C30)
#define BFGNNODONFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA07F70)
#define BFGNNODONFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA07FD0)

inline static constexpr unsigned int BFGNNODONFI_TypeDefinitionIndex = 27730;

	class BFGNNODONFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BFGNNODONFI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BFGNNODONFI*>**)UnitySDK::FromName("", "BFGNNODONFI")->GetStaticField(0x4B970);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFGNNODONFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGNNODONFI*))((::PBYTE)hIl2Cpp + BFGNNODONFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGNNODONFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BFGNNODONFI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BFGNNODONFI*>*(*)())((::PBYTE)hIl2Cpp + BFGNNODONFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFGNNODONFI* Clone()
		{
			return ((::BFGNNODONFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFGNNODONFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFGNNODONFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFGNNODONFI*))((::PBYTE)hIl2Cpp + BFGNNODONFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFGNNODONFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFGNNODONFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGNNODONFI*))((::PBYTE)hIl2Cpp + BFGNNODONFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFGNNODONFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
