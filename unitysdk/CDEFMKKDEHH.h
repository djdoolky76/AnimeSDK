#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDEFMKKDEHH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDEFMKKDEHH_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F349A70)
#define CDEFMKKDEHH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F349E00)
#define CDEFMKKDEHH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F34A020)
#define CDEFMKKDEHH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3499F0)
#define CDEFMKKDEHH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3499C0)
#define CDEFMKKDEHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3499B0)
#define CDEFMKKDEHH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F349B80)
#define CDEFMKKDEHH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F349A80)
#define CDEFMKKDEHH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F349CF0)
#define CDEFMKKDEHH_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F349A60)
#define CDEFMKKDEHH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F349940)
#define CDEFMKKDEHH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F349EC0)
#define CDEFMKKDEHH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F349E90)
#define CDEFMKKDEHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3499A0)
#define CDEFMKKDEHH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F349D20)
#define CDEFMKKDEHH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F349D80)

inline static constexpr unsigned int CDEFMKKDEHH_TypeDefinitionIndex = 29931;

	class CDEFMKKDEHH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CDEFMKKDEHH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CDEFMKKDEHH*>**)UnitySDK::FromName("", "CDEFMKKDEHH")->GetStaticField(0x5C700);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDEFMKKDEHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEFMKKDEHH*))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDEFMKKDEHH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CDEFMKKDEHH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CDEFMKKDEHH*>*(*)())((::PBYTE)hIl2Cpp + CDEFMKKDEHH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDEFMKKDEHH* Clone()
		{
			return ((::CDEFMKKDEHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDEFMKKDEHH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDEFMKKDEHH*))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDEFMKKDEHH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDEFMKKDEHH*))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDEFMKKDEHH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
