#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHMHPNNMFCC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHMHPNNMFCC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA097C0)
#define MHMHPNNMFCC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA09860)
#define MHMHPNNMFCC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA094B0)
#define MHMHPNNMFCC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA09480)
#define MHMHPNNMFCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA09470)
#define MHMHPNNMFCC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA095C0)
#define MHMHPNNMFCC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA094F0)
#define MHMHPNNMFCC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA09720)
#define MHMHPNNMFCC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA09430)
#define MHMHPNNMFCC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA09810)
#define MHMHPNNMFCC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA097E0)
#define MHMHPNNMFCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA09460)
#define MHMHPNNMFCC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA09750)
#define MHMHPNNMFCC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA097B0)

inline static constexpr unsigned int MHMHPNNMFCC_TypeDefinitionIndex = 29799;

	class MHMHPNNMFCC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MHMHPNNMFCC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MHMHPNNMFCC*>**)UnitySDK::FromName("", "MHMHPNNMFCC")->GetStaticField(0x524A0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHMHPNNMFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHMHPNNMFCC*))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHMHPNNMFCC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MHMHPNNMFCC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MHMHPNNMFCC*>*(*)())((::PBYTE)hIl2Cpp + MHMHPNNMFCC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHMHPNNMFCC* Clone()
		{
			return ((::MHMHPNNMFCC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHMHPNNMFCC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHMHPNNMFCC*))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHMHPNNMFCC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHMHPNNMFCC*))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHMHPNNMFCC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
