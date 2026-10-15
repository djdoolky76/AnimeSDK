#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOHAFICJPIP;
class KHOPJJHMFMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHOPJJHMFMC_AKFAOMBJHDC_OFFSET UNITYSDK_OFFSET(0x1E84F7A0)
#define KHOPJJHMFMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E84FB90)
#define KHOPJJHMFMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84FE90)
#define KHOPJJHMFMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E84F770)
#define KHOPJJHMFMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84F6C0)
#define KHOPJJHMFMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84F670)
#define KHOPJJHMFMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E84F8F0)
#define KHOPJJHMFMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E84F7B0)
#define KHOPJJHMFMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E84FA10)
#define KHOPJJHMFMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E84F630)
#define KHOPJJHMFMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E84FCD0)
#define KHOPJJHMFMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E84FC30)
#define KHOPJJHMFMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E84F660)
#define KHOPJJHMFMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E84FA80)
#define KHOPJJHMFMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E84FAE0)

inline static constexpr unsigned int KHOPJJHMFMC_TypeDefinitionIndex = 31203;

	class KHOPJJHMFMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::EOHAFICJPIP*>* NNGDHPGKKEN; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_KKEEFMIJAGA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KHOPJJHMFMC")->GetStaticField(0x17EC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHOPJJHMFMC")->GetStaticField(0x17EC8);
		}

		// static const ::System::Object GPCMGIKPOML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHOPJJHMFMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOPJJHMFMC*))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHOPJJHMFMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHOPJJHMFMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHOPJJHMFMC* Clone()
		{
			return ((::KHOPJJHMFMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::EOHAFICJPIP*>* AKFAOMBJHDC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::EOHAFICJPIP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_AKFAOMBJHDC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHOPJJHMFMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHOPJJHMFMC*))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHOPJJHMFMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHOPJJHMFMC*))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHOPJJHMFMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
