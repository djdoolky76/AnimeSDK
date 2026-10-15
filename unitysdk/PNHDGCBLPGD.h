#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNHDGCBLPGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PNHDGCBLPGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF8D510)
#define PNHDGCBLPGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF8D730)
#define PNHDGCBLPGD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF8D160)
#define PNHDGCBLPGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF8D130)
#define PNHDGCBLPGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF8D120)
#define PNHDGCBLPGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF8D290)
#define PNHDGCBLPGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF8D1C0)
#define PNHDGCBLPGD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF8D1B0)
#define PNHDGCBLPGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF8D400)
#define PNHDGCBLPGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF8D0E0)
#define PNHDGCBLPGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF8D5D0)
#define PNHDGCBLPGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF8D5A0)
#define PNHDGCBLPGD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF8D1A0)
#define PNHDGCBLPGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF8D110)
#define PNHDGCBLPGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF8D430)
#define PNHDGCBLPGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF8D490)

inline static constexpr unsigned int PNHDGCBLPGD_TypeDefinitionIndex = 29438;

	class PNHDGCBLPGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PNHDGCBLPGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PNHDGCBLPGD*>**)UnitySDK::FromName("", "PNHDGCBLPGD")->GetStaticField(0x42510);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PNHDGCBLPGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNHDGCBLPGD*))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PNHDGCBLPGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PNHDGCBLPGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PNHDGCBLPGD*>*(*)())((::PBYTE)hIl2Cpp + PNHDGCBLPGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PNHDGCBLPGD* Clone()
		{
			return ((::PNHDGCBLPGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PNHDGCBLPGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PNHDGCBLPGD*))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PNHDGCBLPGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PNHDGCBLPGD*))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PNHDGCBLPGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
