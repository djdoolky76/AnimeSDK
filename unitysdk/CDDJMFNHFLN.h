#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDDJMFNHFLN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CDDJMFNHFLN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E082A90)
#define CDDJMFNHFLN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E082CB0)
#define CDDJMFNHFLN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E082680)
#define CDDJMFNHFLN_CMNALIBDHJJ_OFFSET UNITYSDK_OFFSET(0x1E0826F0)
#define CDDJMFNHFLN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E082650)
#define CDDJMFNHFLN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E082640)
#define CDDJMFNHFLN_DNDHIPAEJOB_OFFSET UNITYSDK_OFFSET(0x1E082700)
#define CDDJMFNHFLN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E082810)
#define CDDJMFNHFLN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E082710)
#define CDDJMFNHFLN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E082980)
#define CDDJMFNHFLN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0825D0)
#define CDDJMFNHFLN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E082B50)
#define CDDJMFNHFLN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E082B20)
#define CDDJMFNHFLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E082630)
#define CDDJMFNHFLN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0829B0)
#define CDDJMFNHFLN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E082A10)

inline static constexpr unsigned int CDDJMFNHFLN_TypeDefinitionIndex = 25213;

	class CDDJMFNHFLN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HACPPHMAGDI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CDDJMFNHFLN")->GetStaticField(0xEEE0);
		}

		// static const ::System::Object AOILEHFEMKO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CDDJMFNHFLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDJMFNHFLN*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CDDJMFNHFLN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CDDJMFNHFLN* Clone()
		{
			return ((::CDDJMFNHFLN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMNALIBDHJJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CMNALIBDHJJ_OFFSET))(this);
		}

		::System::Void DNDHIPAEJOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_DNDHIPAEJOB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CDDJMFNHFLN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CDDJMFNHFLN*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CDDJMFNHFLN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CDDJMFNHFLN*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CDDJMFNHFLN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
