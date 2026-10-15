#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OMPIKFLGMCF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMPIKFLGMCF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEBF6B0)
#define OMPIKFLGMCF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEBF990)
#define OMPIKFLGMCF_CIIHBKJNIDI_OFFSET UNITYSDK_OFFSET(0x1DEBF250)
#define OMPIKFLGMCF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEBF220)
#define OMPIKFLGMCF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEBF190)
#define OMPIKFLGMCF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBF140)
#define OMPIKFLGMCF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEBF380)
#define OMPIKFLGMCF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEBF280)
#define OMPIKFLGMCF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEBF470)
#define OMPIKFLGMCF_HPOBPDNKDHO_OFFSET UNITYSDK_OFFSET(0x1DEBF270)
#define OMPIKFLGMCF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEBF100)
#define OMPIKFLGMCF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEBF7E0)
#define OMPIKFLGMCF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEBF790)
#define OMPIKFLGMCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEBF130)
#define OMPIKFLGMCF_PHFIFGGOCGE_OFFSET UNITYSDK_OFFSET(0x1DEBF260)
#define OMPIKFLGMCF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEBF570)
#define OMPIKFLGMCF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEBF5D0)

inline static constexpr unsigned int OMPIKFLGMCF_TypeDefinitionIndex = 27705;

	class OMPIKFLGMCF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OKKIHMJKDMK; // 0x18
		::System::UInt32 DNIPIFDDAAE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OMPIKFLGMCF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMPIKFLGMCF*>**)UnitySDK::FromName("", "OMPIKFLGMCF")->GetStaticField(0x2BBF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GFBHBNILMEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OMPIKFLGMCF")->GetStaticField(0x2BBF8);
		}

		// static const ::System::Object NFMNBHFFLHJ; // 0x0
		// static const ::System::Object CNAEAKHGFLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMPIKFLGMCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPIKFLGMCF*))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMPIKFLGMCF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMPIKFLGMCF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMPIKFLGMCF*>*(*)())((::PBYTE)hIl2Cpp + OMPIKFLGMCF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMPIKFLGMCF* Clone()
		{
			return ((::OMPIKFLGMCF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_CLONE_OFFSET))(this);
		}

		::System::UInt32 CIIHBKJNIDI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_CIIHBKJNIDI_OFFSET))(this);
		}

		::System::Void PHFIFGGOCGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_PHFIFGGOCGE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HPOBPDNKDHO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_HPOBPDNKDHO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMPIKFLGMCF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMPIKFLGMCF*))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMPIKFLGMCF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMPIKFLGMCF*))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMPIKFLGMCF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
