#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MILDJHKDICG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MILDJHKDICG_APJDGDGGINK_OFFSET UNITYSDK_OFFSET(0x1EA3DF20)
#define MILDJHKDICG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA3E250)
#define MILDJHKDICG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA3E520)
#define MILDJHKDICG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA3DEA0)
#define MILDJHKDICG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA3DE70)
#define MILDJHKDICG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA3DE60)
#define MILDJHKDICG_DJOPCBMKNEH_OFFSET UNITYSDK_OFFSET(0x1EA3DF10)
#define MILDJHKDICG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA3E010)
#define MILDJHKDICG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA3DF30)
#define MILDJHKDICG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA3DF00)
#define MILDJHKDICG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA3E0E0)
#define MILDJHKDICG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA3DE20)
#define MILDJHKDICG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA3E3A0)
#define MILDJHKDICG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA3E360)
#define MILDJHKDICG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA3DEF0)
#define MILDJHKDICG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA3DE50)
#define MILDJHKDICG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA3E110)
#define MILDJHKDICG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA3E170)

	class MILDJHKDICG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FPHAKFEACJH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MILDJHKDICG")->GetStaticField(0x531C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HAFNMPMFJII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MILDJHKDICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MILDJHKDICG*))((::PBYTE)hIl2Cpp + MILDJHKDICG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MILDJHKDICG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MILDJHKDICG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MILDJHKDICG* Clone()
		{
			return ((::MILDJHKDICG*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MILDJHKDICG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 DJOPCBMKNEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_DJOPCBMKNEH_OFFSET))(this);
		}

		::System::Void APJDGDGGINK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MILDJHKDICG_APJDGDGGINK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MILDJHKDICG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MILDJHKDICG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MILDJHKDICG*))((::PBYTE)hIl2Cpp + MILDJHKDICG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MILDJHKDICG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILDJHKDICG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MILDJHKDICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MILDJHKDICG*))((::PBYTE)hIl2Cpp + MILDJHKDICG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MILDJHKDICG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
