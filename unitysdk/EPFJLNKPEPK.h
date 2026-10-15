#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPFJLNKPEPK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EPFJLNKPEPK_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1E30A020)
#define EPFJLNKPEPK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E30A370)
#define EPFJLNKPEPK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E30A6A0)
#define EPFJLNKPEPK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E309FB0)
#define EPFJLNKPEPK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E309F70)
#define EPFJLNKPEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E309F60)
#define EPFJLNKPEPK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E30A120)
#define EPFJLNKPEPK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E30A040)
#define EPFJLNKPEPK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E30A1F0)
#define EPFJLNKPEPK_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1E30A030)
#define EPFJLNKPEPK_IEGCGBGEJMA_OFFSET UNITYSDK_OFFSET(0x1E30A010)
#define EPFJLNKPEPK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E309F20)
#define EPFJLNKPEPK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E30A520)
#define EPFJLNKPEPK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E30A4E0)
#define EPFJLNKPEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E309F50)
#define EPFJLNKPEPK_PMBLNJLGBHE_OFFSET UNITYSDK_OFFSET(0x1E30A000)
#define EPFJLNKPEPK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E30A230)
#define EPFJLNKPEPK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E30A290)

	class EPFJLNKPEPK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 EMIEPBJAICO; // 0x18
		::System::UInt32 CMCCOIIMHMC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EPFJLNKPEPK")->GetStaticField(0x204F0);
		}

		// static const ::System::Object NLAPNDADCIN; // 0x0
		// static const ::System::Object FMDKMAKPJOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EPFJLNKPEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFJLNKPEPK*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EPFJLNKPEPK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EPFJLNKPEPK* Clone()
		{
			return ((::EPFJLNKPEPK*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CLONE_OFFSET))(this);
		}

		::System::UInt32 PMBLNJLGBHE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_PMBLNJLGBHE_OFFSET))(this);
		}

		::System::Void IEGCGBGEJMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_IEGCGBGEJMA_OFFSET))(this, a1);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_GIDJOFIIKAE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EPFJLNKPEPK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EPFJLNKPEPK*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EPFJLNKPEPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPFJLNKPEPK*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EPFJLNKPEPK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
