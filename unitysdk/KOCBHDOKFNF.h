#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IIMHLPBEDDH;
class KOCBHDOKFNF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOCBHDOKFNF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8ADED0)
#define KOCBHDOKFNF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8AE270)
#define KOCBHDOKFNF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8AD830)
#define KOCBHDOKFNF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8AD7A0)
#define KOCBHDOKFNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD790)
#define KOCBHDOKFNF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8ADAC0)
#define KOCBHDOKFNF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8AD920)
#define KOCBHDOKFNF_FFBGMLAOCND_OFFSET UNITYSDK_OFFSET(0x1E8AD900)
#define KOCBHDOKFNF_GAKBCHBEADA_OFFSET UNITYSDK_OFFSET(0x1E8AD910)
#define KOCBHDOKFNF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8ADD90)
#define KOCBHDOKFNF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8AD720)
#define KOCBHDOKFNF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8AE050)
#define KOCBHDOKFNF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8ADF30)
#define KOCBHDOKFNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD780)
#define KOCBHDOKFNF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8ADDE0)
#define KOCBHDOKFNF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8ADE40)

inline static constexpr unsigned int KOCBHDOKFNF_TypeDefinitionIndex = 27721;

	class KOCBHDOKFNF : public ::System::Object
	{
	public:
		::IIMHLPBEDDH* JBCLNBMJEGI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KOCBHDOKFNF")->GetStaticField(0x2B460);
		}

		// static const ::System::Object IPMBLBMLNIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOCBHDOKFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCBHDOKFNF*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOCBHDOKFNF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KOCBHDOKFNF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOCBHDOKFNF* Clone()
		{
			return ((::KOCBHDOKFNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_CLONE_OFFSET))(this);
		}

		::IIMHLPBEDDH* FFBGMLAOCND()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_FFBGMLAOCND_OFFSET))(this);
		}

		::System::Void GAKBCHBEADA(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_GAKBCHBEADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOCBHDOKFNF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOCBHDOKFNF*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOCBHDOKFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCBHDOKFNF*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOCBHDOKFNF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
