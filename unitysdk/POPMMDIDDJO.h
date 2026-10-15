#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class POPMMDIDDJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POPMMDIDDJO_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1DFD1230)
#define POPMMDIDDJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD1570)
#define POPMMDIDDJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD1840)
#define POPMMDIDDJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD11C0)
#define POPMMDIDDJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD1190)
#define POPMMDIDDJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD1180)
#define POPMMDIDDJO_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1DFD1240)
#define POPMMDIDDJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD1330)
#define POPMMDIDDJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD1250)
#define POPMMDIDDJO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFD1220)
#define POPMMDIDDJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD1400)
#define POPMMDIDDJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD1140)
#define POPMMDIDDJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD16C0)
#define POPMMDIDDJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD1680)
#define POPMMDIDDJO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFD1210)
#define POPMMDIDDJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD1170)
#define POPMMDIDDJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD1430)
#define POPMMDIDDJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD1490)

inline static constexpr unsigned int POPMMDIDDJO_TypeDefinitionIndex = 32595;

	class POPMMDIDDJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "POPMMDIDDJO")->GetStaticField(0x435D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POPMMDIDDJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POPMMDIDDJO*))((::PBYTE)hIl2Cpp + POPMMDIDDJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POPMMDIDDJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + POPMMDIDDJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POPMMDIDDJO* Clone()
		{
			return ((::POPMMDIDDJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POPMMDIDDJO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + POPMMDIDDJO_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POPMMDIDDJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POPMMDIDDJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POPMMDIDDJO*))((::PBYTE)hIl2Cpp + POPMMDIDDJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POPMMDIDDJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POPMMDIDDJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POPMMDIDDJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POPMMDIDDJO*))((::PBYTE)hIl2Cpp + POPMMDIDDJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POPMMDIDDJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
