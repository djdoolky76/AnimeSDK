#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDKJELMPONH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDKJELMPONH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2610E0)
#define EDKJELMPONH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2613B0)
#define EDKJELMPONH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E260CE0)
#define EDKJELMPONH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E260CB0)
#define EDKJELMPONH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E260CA0)
#define EDKJELMPONH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E260EA0)
#define EDKJELMPONH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E260D90)
#define EDKJELMPONH_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E260D50)
#define EDKJELMPONH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E260F70)
#define EDKJELMPONH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E260C30)
#define EDKJELMPONH_KAJEIBLBADN_OFFSET UNITYSDK_OFFSET(0x1E260D70)
#define EDKJELMPONH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E261230)
#define EDKJELMPONH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2611F0)
#define EDKJELMPONH_NEDLKOBIGBO_OFFSET UNITYSDK_OFFSET(0x1E260D80)
#define EDKJELMPONH_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E260D60)
#define EDKJELMPONH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E260C90)
#define EDKJELMPONH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E260FA0)
#define EDKJELMPONH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E261000)

	class EDKJELMPONH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DLPALLFLPCG; // 0x18
		::System::UInt32 NDFIDCNNGMJ; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EDKJELMPONH")->GetStaticField(0x23820);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object DFHHDPKNFNE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDKJELMPONH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDKJELMPONH*))((::PBYTE)hIl2Cpp + EDKJELMPONH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDKJELMPONH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EDKJELMPONH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDKJELMPONH* Clone()
		{
			return ((::EDKJELMPONH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDKJELMPONH_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 KAJEIBLBADN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_KAJEIBLBADN_OFFSET))(this);
		}

		::System::Void NEDLKOBIGBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDKJELMPONH_NEDLKOBIGBO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDKJELMPONH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDKJELMPONH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDKJELMPONH*))((::PBYTE)hIl2Cpp + EDKJELMPONH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDKJELMPONH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDKJELMPONH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDKJELMPONH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDKJELMPONH*))((::PBYTE)hIl2Cpp + EDKJELMPONH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDKJELMPONH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
