#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJLDHECLIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOJLDHECLIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6D7FC0)
#define IOJLDHECLIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6D82E0)
#define IOJLDHECLIH_CLAGJKAIHNA_OFFSET UNITYSDK_OFFSET(0x1E6D7C50)
#define IOJLDHECLIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6D7BA0)
#define IOJLDHECLIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6D7B60)
#define IOJLDHECLIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7B50)
#define IOJLDHECLIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6D7D70)
#define IOJLDHECLIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6D7C60)
#define IOJLDHECLIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6D7E40)
#define IOJLDHECLIH_IMEFPLPNKBK_OFFSET UNITYSDK_OFFSET(0x1E6D7C40)
#define IOJLDHECLIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6D7AE0)
#define IOJLDHECLIH_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E6D7C30)
#define IOJLDHECLIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6D8160)
#define IOJLDHECLIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6D8120)
#define IOJLDHECLIH_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E6D7C20)
#define IOJLDHECLIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6D7B40)
#define IOJLDHECLIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6D7E80)
#define IOJLDHECLIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6D7EE0)

	class IOJLDHECLIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 HHCEMNIBHIE; // 0x18
		::System::UInt32 AOOAEAADNGO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IOJLDHECLIH")->GetStaticField(0x59E70);
		}

		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object EBDOFPJAANE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOJLDHECLIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJLDHECLIH*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJLDHECLIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IOJLDHECLIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOJLDHECLIH* Clone()
		{
			return ((::IOJLDHECLIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CLONE_OFFSET))(this);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IOJLDHECLIH_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::UInt32 IMEFPLPNKBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_IMEFPLPNKBK_OFFSET))(this);
		}

		::System::Void CLAGJKAIHNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CLAGJKAIHNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOJLDHECLIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOJLDHECLIH*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOJLDHECLIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJLDHECLIH*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
