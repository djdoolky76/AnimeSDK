#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KIFALDPCHGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KIFALDPCHGB_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E858A30)
#define KIFALDPCHGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E858D90)
#define KIFALDPCHGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E858FB0)
#define KIFALDPCHGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8589E0)
#define KIFALDPCHGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8589B0)
#define KIFALDPCHGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8589A0)
#define KIFALDPCHGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E858B10)
#define KIFALDPCHGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E858A40)
#define KIFALDPCHGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E858C80)
#define KIFALDPCHGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E858960)
#define KIFALDPCHGB_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E858A20)
#define KIFALDPCHGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E858E50)
#define KIFALDPCHGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E858E20)
#define KIFALDPCHGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E858990)
#define KIFALDPCHGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E858CB0)
#define KIFALDPCHGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E858D10)

inline static constexpr unsigned int KIFALDPCHGB_TypeDefinitionIndex = 33298;

	class KIFALDPCHGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKMEMBIPHAN; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KIFALDPCHGB")->GetStaticField(0x19580);
		}

		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KIFALDPCHGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIFALDPCHGB*))((::PBYTE)hIl2Cpp + KIFALDPCHGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KIFALDPCHGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KIFALDPCHGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KIFALDPCHGB* Clone()
		{
			return ((::KIFALDPCHGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KIFALDPCHGB_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KIFALDPCHGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KIFALDPCHGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KIFALDPCHGB*))((::PBYTE)hIl2Cpp + KIFALDPCHGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KIFALDPCHGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KIFALDPCHGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KIFALDPCHGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KIFALDPCHGB*))((::PBYTE)hIl2Cpp + KIFALDPCHGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KIFALDPCHGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
