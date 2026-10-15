#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBMCLNPBHJH;
class HDHPAHIFEPM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBMCLNPBHJH_AIAKMLLNHIM_OFFSET UNITYSDK_OFFSET(0x1E2431B0)
#define EBMCLNPBHJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2436A0)
#define EBMCLNPBHJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E243A00)
#define EBMCLNPBHJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2430B0)
#define EBMCLNPBHJH_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E2431C0)
#define EBMCLNPBHJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E243010)
#define EBMCLNPBHJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E243000)
#define EBMCLNPBHJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E243390)
#define EBMCLNPBHJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2431E0)
#define EBMCLNPBHJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E243510)
#define EBMCLNPBHJH_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E2431D0)
#define EBMCLNPBHJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E242F90)
#define EBMCLNPBHJH_LENJFOCOIBO_OFFSET UNITYSDK_OFFSET(0x1E2431A0)
#define EBMCLNPBHJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E243850)
#define EBMCLNPBHJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E243770)
#define EBMCLNPBHJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E242FF0)
#define EBMCLNPBHJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E243560)
#define EBMCLNPBHJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2435C0)

	class EBMCLNPBHJH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HDHPAHIFEPM* IKINNHFCFPJ; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EBMCLNPBHJH")->GetStaticField(0x4C370);
		}

		// static const ::System::Object CGLMBFKHCDC; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBMCLNPBHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBMCLNPBHJH*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBMCLNPBHJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EBMCLNPBHJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBMCLNPBHJH* Clone()
		{
			return ((::EBMCLNPBHJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_CLONE_OFFSET))(this);
		}

		::HDHPAHIFEPM* LENJFOCOIBO()
		{
			return ((::HDHPAHIFEPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_LENJFOCOIBO_OFFSET))(this);
		}

		::System::Void AIAKMLLNHIM(::HDHPAHIFEPM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDHPAHIFEPM*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_AIAKMLLNHIM_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBMCLNPBHJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBMCLNPBHJH*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBMCLNPBHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBMCLNPBHJH*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBMCLNPBHJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
