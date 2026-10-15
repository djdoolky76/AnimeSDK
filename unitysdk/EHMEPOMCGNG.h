#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EHMEPOMCGNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EHMEPOMCGNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A2310)
#define EHMEPOMCGNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A2640)
#define EHMEPOMCGNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A1E10)
#define EHMEPOMCGNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A1D80)
#define EHMEPOMCGNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1D30)
#define EHMEPOMCGNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A1FC0)
#define EHMEPOMCGNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A1E90)
#define EHMEPOMCGNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A20B0)
#define EHMEPOMCGNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A1CC0)
#define EHMEPOMCGNG_KGABFPKOHMB_OFFSET UNITYSDK_OFFSET(0x1E2A1E80)
#define EHMEPOMCGNG_KMPMBJPJEBE_OFFSET UNITYSDK_OFFSET(0x1E2A1E70)
#define EHMEPOMCGNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A2470)
#define EHMEPOMCGNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A2420)
#define EHMEPOMCGNG_NPJMCNLNGGB_OFFSET UNITYSDK_OFFSET(0x1E2A1E60)
#define EHMEPOMCGNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A1D20)
#define EHMEPOMCGNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A21B0)
#define EHMEPOMCGNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A2210)

	class EHMEPOMCGNG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGKEFBJICNH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AEEDEPDAIJM; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EHMEPOMCGNG")->GetStaticField(0x2FAC0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_MMNLOILJEEI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EHMEPOMCGNG")->GetStaticField(0x2FAC8);
		}

		// static const ::System::Object FFHCMKCPNOD; // 0x0
		// static const ::System::Object HOGMLCJNEAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EHMEPOMCGNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHMEPOMCGNG*))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMEPOMCGNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EHMEPOMCGNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EHMEPOMCGNG* Clone()
		{
			return ((::EHMEPOMCGNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_CLONE_OFFSET))(this);
		}

		::System::UInt32 NPJMCNLNGGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_NPJMCNLNGGB_OFFSET))(this);
		}

		::System::Void KMPMBJPJEBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_KMPMBJPJEBE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KGABFPKOHMB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_KGABFPKOHMB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EHMEPOMCGNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EHMEPOMCGNG*))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EHMEPOMCGNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHMEPOMCGNG*))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EHMEPOMCGNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
