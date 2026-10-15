#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEKLEHPFHMA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEKLEHPFHMA_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E935A90)
#define LEKLEHPFHMA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E935DE0)
#define LEKLEHPFHMA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9360B0)
#define LEKLEHPFHMA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E935A30)
#define LEKLEHPFHMA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E935A00)
#define LEKLEHPFHMA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9359F0)
#define LEKLEHPFHMA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E935BA0)
#define LEKLEHPFHMA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E935AC0)
#define LEKLEHPFHMA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E935AB0)
#define LEKLEHPFHMA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E935C70)
#define LEKLEHPFHMA_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E935A80)
#define LEKLEHPFHMA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9359B0)
#define LEKLEHPFHMA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E935F30)
#define LEKLEHPFHMA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E935EF0)
#define LEKLEHPFHMA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E935AA0)
#define LEKLEHPFHMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9359E0)
#define LEKLEHPFHMA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E935CA0)
#define LEKLEHPFHMA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E935D00)

	class LEKLEHPFHMA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LEKLEHPFHMA")->GetStaticField(0x39490);
		}

		// static const ::System::Object HOHDLIKKMBH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEKLEHPFHMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEKLEHPFHMA*))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEKLEHPFHMA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LEKLEHPFHMA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEKLEHPFHMA* Clone()
		{
			return ((::LEKLEHPFHMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_CLONE_OFFSET))(this);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEKLEHPFHMA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEKLEHPFHMA*))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEKLEHPFHMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEKLEHPFHMA*))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEKLEHPFHMA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
