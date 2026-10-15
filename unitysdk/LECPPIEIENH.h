#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LECPPIEIENH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LECPPIEIENH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8F8410)
#define LECPPIEIENH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8F87A0)
#define LECPPIEIENH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8F7E70)
#define LECPPIEIENH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8F7DD0)
#define LECPPIEIENH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7D80)
#define LECPPIEIENH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8F7FE0)
#define LECPPIEIENH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8F7F30)
#define LECPPIEIENH_FKKAEDOIFMJ_OFFSET UNITYSDK_OFFSET(0x1E8F7F00)
#define LECPPIEIENH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8F80F0)
#define LECPPIEIENH_GONGLAIPCJN_OFFSET UNITYSDK_OFFSET(0x1E8F7EF0)
#define LECPPIEIENH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8F7D10)
#define LECPPIEIENH_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1E8F7EE0)
#define LECPPIEIENH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8F8680)
#define LECPPIEIENH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8F8620)
#define LECPPIEIENH_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1E8F7F20)
#define LECPPIEIENH_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1E8F7F10)
#define LECPPIEIENH_ONAKFJBOIID_OFFSET UNITYSDK_OFFSET(0x1E8F7EC0)
#define LECPPIEIENH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8F7D70)
#define LECPPIEIENH_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1E8F7ED0)
#define LECPPIEIENH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8F81F0)
#define LECPPIEIENH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8F8250)

inline static constexpr unsigned int LECPPIEIENH_TypeDefinitionIndex = 27244;

	class LECPPIEIENH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PAGGKAMLINO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NPLCNHBFDJP; // 0x20
		::System::UInt32 OJGKLENJPDA; // 0x24
		::System::UInt32 KCIKBKIBOPB; // 0x28
		static ::Google::Protobuf::MessageParser_1<::LECPPIEIENH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LECPPIEIENH*>**)UnitySDK::FromName("", "LECPPIEIENH")->GetStaticField(0xD2B0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KLLNOKKOEME()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "LECPPIEIENH")->GetStaticField(0xD2B8);
		}

		// static const ::System::Object GABHMBDKBBD; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object PGFBMKJNPFD; // 0x0
		// static const ::System::Object EEMPBGGOLOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LECPPIEIENH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LECPPIEIENH*))((::PBYTE)hIl2Cpp + LECPPIEIENH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LECPPIEIENH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LECPPIEIENH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LECPPIEIENH*>*(*)())((::PBYTE)hIl2Cpp + LECPPIEIENH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LECPPIEIENH* Clone()
		{
			return ((::LECPPIEIENH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ONAKFJBOIID()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_ONAKFJBOIID_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LECPPIEIENH_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::System::UInt32 GONGLAIPCJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_GONGLAIPCJN_OFFSET))(this);
		}

		::System::Void FKKAEDOIFMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LECPPIEIENH_FKKAEDOIFMJ_OFFSET))(this, a1);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LECPPIEIENH_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LECPPIEIENH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LECPPIEIENH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LECPPIEIENH*))((::PBYTE)hIl2Cpp + LECPPIEIENH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LECPPIEIENH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LECPPIEIENH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LECPPIEIENH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LECPPIEIENH*))((::PBYTE)hIl2Cpp + LECPPIEIENH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LECPPIEIENH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
