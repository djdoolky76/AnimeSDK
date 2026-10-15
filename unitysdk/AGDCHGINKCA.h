#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDCHGINKCA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGDCHGINKCA_BIDALEPCFIE_OFFSET UNITYSDK_OFFSET(0x1E127B00)
#define AGDCHGINKCA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E127E60)
#define AGDCHGINKCA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E128080)
#define AGDCHGINKCA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E127AB0)
#define AGDCHGINKCA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E127A80)
#define AGDCHGINKCA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E127A70)
#define AGDCHGINKCA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E127BE0)
#define AGDCHGINKCA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E127B10)
#define AGDCHGINKCA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E127D50)
#define AGDCHGINKCA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E127A30)
#define AGDCHGINKCA_LANJPMKNIKG_OFFSET UNITYSDK_OFFSET(0x1E127AF0)
#define AGDCHGINKCA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E127F20)
#define AGDCHGINKCA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E127EF0)
#define AGDCHGINKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E127A60)
#define AGDCHGINKCA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E127D80)
#define AGDCHGINKCA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E127DE0)

	class AGDCHGINKCA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AJHIGHLHCKC; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AGDCHGINKCA")->GetStaticField(0x30130);
		}

		// static const ::System::Object PEBJHMDPGKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGDCHGINKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDCHGINKCA*))((::PBYTE)hIl2Cpp + AGDCHGINKCA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDCHGINKCA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AGDCHGINKCA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGDCHGINKCA* Clone()
		{
			return ((::AGDCHGINKCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_CLONE_OFFSET))(this);
		}

		::System::UInt32 LANJPMKNIKG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_LANJPMKNIKG_OFFSET))(this);
		}

		::System::Void BIDALEPCFIE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGDCHGINKCA_BIDALEPCFIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGDCHGINKCA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGDCHGINKCA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGDCHGINKCA*))((::PBYTE)hIl2Cpp + AGDCHGINKCA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGDCHGINKCA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDCHGINKCA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGDCHGINKCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDCHGINKCA*))((::PBYTE)hIl2Cpp + AGDCHGINKCA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGDCHGINKCA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
