#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDHIEONLIIL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDHIEONLIIL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F47FBC0)
#define DDHIEONLIIL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F47FED0)
#define DDHIEONLIIL_CJHDDIJGMCN_OFFSET UNITYSDK_OFFSET(0x1F47F7C0)
#define DDHIEONLIIL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F47F6F0)
#define DDHIEONLIIL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F47F6B0)
#define DDHIEONLIIL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F47F6A0)
#define DDHIEONLIIL_ELCFANJKJIL_OFFSET UNITYSDK_OFFSET(0x1F47F780)
#define DDHIEONLIIL_EOCPEBJNPGB_OFFSET UNITYSDK_OFFSET(0x1F47F7B0)
#define DDHIEONLIIL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F47F870)
#define DDHIEONLIIL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F47F7D0)
#define DDHIEONLIIL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F47F970)
#define DDHIEONLIIL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F47F630)
#define DDHIEONLIIL_KHBGONMDCPI_OFFSET UNITYSDK_OFFSET(0x1F47F790)
#define DDHIEONLIIL_LNCKJIDOBPA_OFFSET UNITYSDK_OFFSET(0x1F47F7A0)
#define DDHIEONLIIL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F47FD10)
#define DDHIEONLIIL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F47FCC0)
#define DDHIEONLIIL_NNAIDLADDIK_OFFSET UNITYSDK_OFFSET(0x1F47F770)
#define DDHIEONLIIL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F47F690)
#define DDHIEONLIIL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F47F9C0)
#define DDHIEONLIIL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F47FA20)

inline static constexpr unsigned int DDHIEONLIIL_TypeDefinitionIndex = 31915;

	class DDHIEONLIIL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean FMOMGAKACID; // 0x18
		::System::Boolean DHAHNCEMJJE; // 0x19
		::System::Byte _padding0[0x6];
		::System::UInt64 KIPJPMDOMPF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DDHIEONLIIL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DDHIEONLIIL*>**)UnitySDK::FromName("", "DDHIEONLIIL")->GetStaticField(0xD1A0);
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

		static ::Google::Protobuf::MessageParser_1<::DDHIEONLIIL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DDHIEONLIIL*>*(*)())((::PBYTE)hIl2Cpp + DDHIEONLIIL_JJGHOBBFNJD_OFFSET))();
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
