#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFEKPEKHAPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define FFEKPEKHAPC_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E36CEB0)
#define FFEKPEKHAPC_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E36CEC0)
#define FFEKPEKHAPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E36D440)
#define FFEKPEKHAPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E36D800)
#define FFEKPEKHAPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E36CE10)
#define FFEKPEKHAPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E36CDA0)
#define FFEKPEKHAPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E36CD90)
#define FFEKPEKHAPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E36D080)
#define FFEKPEKHAPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E36CEF0)
#define FFEKPEKHAPC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E36CEA0)
#define FFEKPEKHAPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E36D210)
#define FFEKPEKHAPC_IIHMFDMFOPO_OFFSET UNITYSDK_OFFSET(0x1E36CEE0)
#define FFEKPEKHAPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E36CD50)
#define FFEKPEKHAPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E36D620)
#define FFEKPEKHAPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E36D580)
#define FFEKPEKHAPC_MKMAMKNLJGM_OFFSET UNITYSDK_OFFSET(0x1E36CED0)
#define FFEKPEKHAPC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E36CE90)
#define FFEKPEKHAPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E36CD80)
#define FFEKPEKHAPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E36D2A0)
#define FFEKPEKHAPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E36D300)

	class FFEKPEKHAPC : public ::System::Object
	{
	public:
		::Proto::ItemList* DALKEINMPBH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 LJDBCGPFFDH; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FFEKPEKHAPC")->GetStaticField(0x5D9F0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		// static const ::System::Object DPPAFBAHEFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFEKPEKHAPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFEKPEKHAPC*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFEKPEKHAPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FFEKPEKHAPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFEKPEKHAPC* Clone()
		{
			return ((::FFEKPEKHAPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::Proto::ItemList* MKMAMKNLJGM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_MKMAMKNLJGM_OFFSET))(this);
		}

		::System::Void IIHMFDMFOPO(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_IIHMFDMFOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFEKPEKHAPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFEKPEKHAPC*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFEKPEKHAPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFEKPEKHAPC*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFEKPEKHAPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
