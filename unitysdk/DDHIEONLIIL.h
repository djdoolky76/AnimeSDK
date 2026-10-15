#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHIEONLIIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDHIEONLIIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17D000)
#define DDHIEONLIIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17D300)
#define DDHIEONLIIL_CJHDDIJGMCN_OFFSET UNITYSDK_OFFSET(0x1E17CC00)
#define DDHIEONLIIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17CB30)
#define DDHIEONLIIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17CAF0)
#define DDHIEONLIIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17CAE0)
#define DDHIEONLIIL_ELCFANJKJIL_OFFSET UNITYSDK_OFFSET(0x1E17CBC0)
#define DDHIEONLIIL_EOCPEBJNPGB_OFFSET UNITYSDK_OFFSET(0x1E17CBF0)
#define DDHIEONLIIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17CCB0)
#define DDHIEONLIIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17CC10)
#define DDHIEONLIIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17CDB0)
#define DDHIEONLIIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17CA70)
#define DDHIEONLIIL_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1E17CBD0)
#define DDHIEONLIIL_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1E17CBE0)
#define DDHIEONLIIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17D150)
#define DDHIEONLIIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17D100)
#define DDHIEONLIIL_NNAIDLADDIK_OFFSET UNITYSDK_OFFSET(0x1E17CBB0)
#define DDHIEONLIIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17CAD0)
#define DDHIEONLIIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17CE00)
#define DDHIEONLIIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17CE60)

	class DDHIEONLIIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 KIPJPMDOMPF; // 0x18
		::System::Boolean DHAHNCEMJJE; // 0x20
		::System::Boolean FMOMGAKACID; // 0x21
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDHIEONLIIL")->GetStaticField(0x15350);
		}

		// static const ::System::Object DIJCEHJPFAC; // 0x0
		// static const ::System::Object HOLLCCLAJAB; // 0x0
		// static const ::System::Object EPBPHGNEEKM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDHIEONLIIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDHIEONLIIL*))((::PBYTE)hIl2Cpp + DDHIEONLIIL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDHIEONLIIL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDHIEONLIIL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDHIEONLIIL* Clone()
		{
			return ((::DDHIEONLIIL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_CLONE_OFFSET))(this);
		}

		::System::Boolean NNAIDLADDIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_NNAIDLADDIK_OFFSET))(this);
		}

		::System::Void ELCFANJKJIL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDHIEONLIIL_ELCFANJKJIL_OFFSET))(this, a1);
		}

		::System::Boolean KHBGONMDCPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_KHBGONMDCPI_OFFSET))(this);
		}

		::System::Void LNCKJIDOBPA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DDHIEONLIIL_LNCKJIDOBPA_OFFSET))(this, a1);
		}

		::System::UInt64 EOCPEBJNPGB()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_EOCPEBJNPGB_OFFSET))(this);
		}

		::System::Void CJHDDIJGMCN(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DDHIEONLIIL_CJHDDIJGMCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDHIEONLIIL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDHIEONLIIL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDHIEONLIIL*))((::PBYTE)hIl2Cpp + DDHIEONLIIL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDHIEONLIIL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDHIEONLIIL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDHIEONLIIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDHIEONLIIL*))((::PBYTE)hIl2Cpp + DDHIEONLIIL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDHIEONLIIL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
