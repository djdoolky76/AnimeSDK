#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHCOHLJIAII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHCOHLJIAII_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1E95D530)
#define LHCOHLJIAII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E95D890)
#define LHCOHLJIAII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95DB60)
#define LHCOHLJIAII_CLONE_OFFSET UNITYSDK_OFFSET(0x1E95D490)
#define LHCOHLJIAII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E95D460)
#define LHCOHLJIAII_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95D450)
#define LHCOHLJIAII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E95D650)
#define LHCOHLJIAII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E95D540)
#define LHCOHLJIAII_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E95D500)
#define LHCOHLJIAII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E95D720)
#define LHCOHLJIAII_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1E95D520)
#define LHCOHLJIAII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E95D3E0)
#define LHCOHLJIAII_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E95D510)
#define LHCOHLJIAII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E95D9E0)
#define LHCOHLJIAII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E95D9A0)
#define LHCOHLJIAII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E95D440)
#define LHCOHLJIAII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E95D750)
#define LHCOHLJIAII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E95D7B0)

inline static constexpr unsigned int LHCOHLJIAII_TypeDefinitionIndex = 29462;

	class LHCOHLJIAII : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 PPNELLDGNPC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LHCOHLJIAII")->GetStaticField(0x23800);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object GLIJLPOGDAK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHCOHLJIAII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHCOHLJIAII*))((::PBYTE)hIl2Cpp + LHCOHLJIAII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHCOHLJIAII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LHCOHLJIAII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHCOHLJIAII* Clone()
		{
			return ((::LHCOHLJIAII*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHCOHLJIAII_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHCOHLJIAII_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHCOHLJIAII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHCOHLJIAII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHCOHLJIAII*))((::PBYTE)hIl2Cpp + LHCOHLJIAII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHCOHLJIAII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCOHLJIAII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHCOHLJIAII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHCOHLJIAII*))((::PBYTE)hIl2Cpp + LHCOHLJIAII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHCOHLJIAII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
