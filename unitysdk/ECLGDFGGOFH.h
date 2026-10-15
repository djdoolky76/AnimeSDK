#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECLGDFGGOFH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ECLGDFGGOFH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E254730)
#define ECLGDFGGOFH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E254A00)
#define ECLGDFGGOFH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E254380)
#define ECLGDFGGOFH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E254350)
#define ECLGDFGGOFH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E254340)
#define ECLGDFGGOFH_ECGLOKHJECI_OFFSET UNITYSDK_OFFSET(0x1E2543D0)
#define ECLGDFGGOFH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2544F0)
#define ECLGDFGGOFH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E254410)
#define ECLGDFGGOFH_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E2543F0)
#define ECLGDFGGOFH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2545C0)
#define ECLGDFGGOFH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E254300)
#define ECLGDFGGOFH_KEFCMNNJDDM_OFFSET UNITYSDK_OFFSET(0x1E2543E0)
#define ECLGDFGGOFH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E254880)
#define ECLGDFGGOFH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E254840)
#define ECLGDFGGOFH_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E254400)
#define ECLGDFGGOFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E254330)
#define ECLGDFGGOFH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2545F0)
#define ECLGDFGGOFH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E254650)

inline static constexpr unsigned int ECLGDFGGOFH_TypeDefinitionIndex = 32352;

	class ECLGDFGGOFH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NDFIDCNNGMJ; // 0x18
		::System::UInt32 FFEICCANBDA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ECLGDFGGOFH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ECLGDFGGOFH*>**)UnitySDK::FromName("", "ECLGDFGGOFH")->GetStaticField(0x3A5C0);
		}

		// static const ::System::Object FIEKKDGLMJK; // 0x0
		// static const ::System::Object KLJANMLJHEF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ECLGDFGGOFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECLGDFGGOFH*))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ECLGDFGGOFH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ECLGDFGGOFH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ECLGDFGGOFH*>*(*)())((::PBYTE)hIl2Cpp + ECLGDFGGOFH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ECLGDFGGOFH* Clone()
		{
			return ((::ECLGDFGGOFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_CLONE_OFFSET))(this);
		}

		::System::UInt32 ECGLOKHJECI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_ECGLOKHJECI_OFFSET))(this);
		}

		::System::Void KEFCMNNJDDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_KEFCMNNJDDM_OFFSET))(this, a1);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ECLGDFGGOFH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ECLGDFGGOFH*))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ECLGDFGGOFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECLGDFGGOFH*))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ECLGDFGGOFH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
