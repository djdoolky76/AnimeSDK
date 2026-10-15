#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBECCHLNDFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBECCHLNDFL_AKLIFFDHHEE_OFFSET UNITYSDK_OFFSET(0x1E5E44F0)
#define IBECCHLNDFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E4850)
#define IBECCHLNDFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E4A70)
#define IBECCHLNDFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E44A0)
#define IBECCHLNDFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E4470)
#define IBECCHLNDFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E4460)
#define IBECCHLNDFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E45D0)
#define IBECCHLNDFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E4500)
#define IBECCHLNDFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E4740)
#define IBECCHLNDFL_JGIDGKIDPBM_OFFSET UNITYSDK_OFFSET(0x1E5E44E0)
#define IBECCHLNDFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E4420)
#define IBECCHLNDFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E4910)
#define IBECCHLNDFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E48E0)
#define IBECCHLNDFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E4450)
#define IBECCHLNDFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E4770)
#define IBECCHLNDFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E47D0)

inline static constexpr unsigned int IBECCHLNDFL_TypeDefinitionIndex = 28392;

	class IBECCHLNDFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EFNAPDOPMKN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IBECCHLNDFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IBECCHLNDFL*>**)UnitySDK::FromName("", "IBECCHLNDFL")->GetStaticField(0x42D90);
		}

		// static const ::System::Object EHBEPPKIOHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBECCHLNDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBECCHLNDFL*))((::PBYTE)hIl2Cpp + IBECCHLNDFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBECCHLNDFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IBECCHLNDFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IBECCHLNDFL*>*(*)())((::PBYTE)hIl2Cpp + IBECCHLNDFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBECCHLNDFL* Clone()
		{
			return ((::IBECCHLNDFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGIDGKIDPBM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_JGIDGKIDPBM_OFFSET))(this);
		}

		::System::Void AKLIFFDHHEE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBECCHLNDFL_AKLIFFDHHEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBECCHLNDFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBECCHLNDFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBECCHLNDFL*))((::PBYTE)hIl2Cpp + IBECCHLNDFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBECCHLNDFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBECCHLNDFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBECCHLNDFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBECCHLNDFL*))((::PBYTE)hIl2Cpp + IBECCHLNDFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBECCHLNDFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
