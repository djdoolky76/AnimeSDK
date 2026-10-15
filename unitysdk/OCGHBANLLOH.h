#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCGHBANLLOH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCGHBANLLOH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE137B0)
#define OCGHBANLLOH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE13A80)
#define OCGHBANLLOH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE13400)
#define OCGHBANLLOH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE133D0)
#define OCGHBANLLOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE133C0)
#define OCGHBANLLOH_ECCEKCANBID_OFFSET UNITYSDK_OFFSET(0x1DE13470)
#define OCGHBANLLOH_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1DE13460)
#define OCGHBANLLOH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE13570)
#define OCGHBANLLOH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE13490)
#define OCGHBANLLOH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE13640)
#define OCGHBANLLOH_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1DE13450)
#define OCGHBANLLOH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE13380)
#define OCGHBANLLOH_MABGCABMNOM_OFFSET UNITYSDK_OFFSET(0x1DE13480)
#define OCGHBANLLOH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE13900)
#define OCGHBANLLOH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE138C0)
#define OCGHBANLLOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE133B0)
#define OCGHBANLLOH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE13670)
#define OCGHBANLLOH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE136D0)

	class OCGHBANLLOH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEKECGJLGEF; // 0x18
		::System::UInt32 JNKLHJOCCBN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCGHBANLLOH")->GetStaticField(0x12BD0);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object KKPOIMOFOGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCGHBANLLOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCGHBANLLOH*))((::PBYTE)hIl2Cpp + OCGHBANLLOH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCGHBANLLOH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCGHBANLLOH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCGHBANLLOH* Clone()
		{
			return ((::OCGHBANLLOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCGHBANLLOH_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 ECCEKCANBID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_ECCEKCANBID_OFFSET))(this);
		}

		::System::Void MABGCABMNOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCGHBANLLOH_MABGCABMNOM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCGHBANLLOH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCGHBANLLOH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCGHBANLLOH*))((::PBYTE)hIl2Cpp + OCGHBANLLOH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCGHBANLLOH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCGHBANLLOH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCGHBANLLOH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCGHBANLLOH*))((::PBYTE)hIl2Cpp + OCGHBANLLOH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCGHBANLLOH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
