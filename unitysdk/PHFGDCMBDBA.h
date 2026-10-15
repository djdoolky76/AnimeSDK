#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHFGDCMBDBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHFGDCMBDBA_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF387A0)
#define PHFGDCMBDBA_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF387B0)
#define PHFGDCMBDBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF38B30)
#define PHFGDCMBDBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF38E00)
#define PHFGDCMBDBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF38730)
#define PHFGDCMBDBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF38700)
#define PHFGDCMBDBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF386F0)
#define PHFGDCMBDBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF388F0)
#define PHFGDCMBDBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF387E0)
#define PHFGDCMBDBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF389C0)
#define PHFGDCMBDBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF38680)
#define PHFGDCMBDBA_KCHHBGBJDGL_OFFSET UNITYSDK_OFFSET(0x1DF387C0)
#define PHFGDCMBDBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF38C80)
#define PHFGDCMBDBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF38C40)
#define PHFGDCMBDBA_OHLGNCALLME_OFFSET UNITYSDK_OFFSET(0x1DF387D0)
#define PHFGDCMBDBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF386E0)
#define PHFGDCMBDBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF389F0)
#define PHFGDCMBDBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF38A50)

	class PHFGDCMBDBA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 JDNLAIDFHHC; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PHFGDCMBDBA")->GetStaticField(0x3EEE0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object NACMENLJJLL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHFGDCMBDBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHFGDCMBDBA*))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHFGDCMBDBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PHFGDCMBDBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHFGDCMBDBA* Clone()
		{
			return ((::PHFGDCMBDBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::UInt32 KCHHBGBJDGL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_KCHHBGBJDGL_OFFSET))(this);
		}

		::System::Void OHLGNCALLME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_OHLGNCALLME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHFGDCMBDBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHFGDCMBDBA*))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHFGDCMBDBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHFGDCMBDBA*))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHFGDCMBDBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
