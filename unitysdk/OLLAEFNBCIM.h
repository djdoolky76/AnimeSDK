#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLLAEFNBCIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OLLAEFNBCIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE7AE80)
#define OLLAEFNBCIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE7B0A0)
#define OLLAEFNBCIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE7AAD0)
#define OLLAEFNBCIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE7AAA0)
#define OLLAEFNBCIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7AA90)
#define OLLAEFNBCIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE7AC00)
#define OLLAEFNBCIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE7AB30)
#define OLLAEFNBCIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE7AD70)
#define OLLAEFNBCIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE7AA50)
#define OLLAEFNBCIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE7AF40)
#define OLLAEFNBCIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE7AF10)
#define OLLAEFNBCIM_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1DE7AB20)
#define OLLAEFNBCIM_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1DE7AB10)
#define OLLAEFNBCIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE7AA80)
#define OLLAEFNBCIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE7ADA0)
#define OLLAEFNBCIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE7AE00)

inline static constexpr unsigned int OLLAEFNBCIM_TypeDefinitionIndex = 26715;

	class OLLAEFNBCIM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 ABPDPMHFFNN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OLLAEFNBCIM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OLLAEFNBCIM*>**)UnitySDK::FromName("", "OLLAEFNBCIM")->GetStaticField(0x20F70);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OLLAEFNBCIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLAEFNBCIM*))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLLAEFNBCIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OLLAEFNBCIM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OLLAEFNBCIM*>*(*)())((::PBYTE)hIl2Cpp + OLLAEFNBCIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OLLAEFNBCIM* Clone()
		{
			return ((::OLLAEFNBCIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OLLAEFNBCIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OLLAEFNBCIM*))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OLLAEFNBCIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OLLAEFNBCIM*))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OLLAEFNBCIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
