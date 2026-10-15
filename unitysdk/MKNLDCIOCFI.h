#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKNLDCIOCFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKNLDCIOCFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2F560)
#define MKNLDCIOCFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F600)
#define MKNLDCIOCFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2F250)
#define MKNLDCIOCFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2F220)
#define MKNLDCIOCFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F210)
#define MKNLDCIOCFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2F360)
#define MKNLDCIOCFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2F290)
#define MKNLDCIOCFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2F4C0)
#define MKNLDCIOCFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2F1D0)
#define MKNLDCIOCFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2F5B0)
#define MKNLDCIOCFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2F580)
#define MKNLDCIOCFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2F200)
#define MKNLDCIOCFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2F4F0)
#define MKNLDCIOCFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2F550)

inline static constexpr unsigned int MKNLDCIOCFI_TypeDefinitionIndex = 30994;

	class MKNLDCIOCFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MKNLDCIOCFI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKNLDCIOCFI*>**)UnitySDK::FromName("", "MKNLDCIOCFI")->GetStaticField(0x55470);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKNLDCIOCFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNLDCIOCFI*))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKNLDCIOCFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKNLDCIOCFI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKNLDCIOCFI*>*(*)())((::PBYTE)hIl2Cpp + MKNLDCIOCFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKNLDCIOCFI* Clone()
		{
			return ((::MKNLDCIOCFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKNLDCIOCFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKNLDCIOCFI*))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKNLDCIOCFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKNLDCIOCFI*))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKNLDCIOCFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
