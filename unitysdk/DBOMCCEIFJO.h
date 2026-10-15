#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DBOMCCEIFJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DBOMCCEIFJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E163260)
#define DBOMCCEIFJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E163480)
#define DBOMCCEIFJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E162EB0)
#define DBOMCCEIFJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E162E80)
#define DBOMCCEIFJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E162E70)
#define DBOMCCEIFJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E162FE0)
#define DBOMCCEIFJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E162F10)
#define DBOMCCEIFJO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E162F00)
#define DBOMCCEIFJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E163150)
#define DBOMCCEIFJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E162E30)
#define DBOMCCEIFJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E163320)
#define DBOMCCEIFJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1632F0)
#define DBOMCCEIFJO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E162EF0)
#define DBOMCCEIFJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E162E60)
#define DBOMCCEIFJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E163180)
#define DBOMCCEIFJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1631E0)

inline static constexpr unsigned int DBOMCCEIFJO_TypeDefinitionIndex = 33557;

	class DBOMCCEIFJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DBOMCCEIFJO")->GetStaticField(0x26240);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DBOMCCEIFJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBOMCCEIFJO*))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DBOMCCEIFJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DBOMCCEIFJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DBOMCCEIFJO* Clone()
		{
			return ((::DBOMCCEIFJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DBOMCCEIFJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DBOMCCEIFJO*))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DBOMCCEIFJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBOMCCEIFJO*))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DBOMCCEIFJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
