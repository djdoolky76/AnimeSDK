#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNBDOMKFAGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNBDOMKFAGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9B04E0)
#define LNBDOMKFAGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9B0700)
#define LNBDOMKFAGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9B0130)
#define LNBDOMKFAGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9B0100)
#define LNBDOMKFAGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9B00F0)
#define LNBDOMKFAGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9B0260)
#define LNBDOMKFAGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9B0190)
#define LNBDOMKFAGG_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1E9B0170)
#define LNBDOMKFAGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9B03D0)
#define LNBDOMKFAGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9B00B0)
#define LNBDOMKFAGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9B05A0)
#define LNBDOMKFAGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9B0570)
#define LNBDOMKFAGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9B00E0)
#define LNBDOMKFAGG_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1E9B0180)
#define LNBDOMKFAGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9B0400)
#define LNBDOMKFAGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9B0460)

inline static constexpr unsigned int LNBDOMKFAGG_TypeDefinitionIndex = 34491;

	class LNBDOMKFAGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBDCJHECJOO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LNBDOMKFAGG")->GetStaticField(0x4E5B0);
		}

		// static const ::System::Object HACFLGOPALO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNBDOMKFAGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBDOMKFAGG*))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNBDOMKFAGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LNBDOMKFAGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNBDOMKFAGG* Clone()
		{
			return ((::LNBDOMKFAGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_CLONE_OFFSET))(this);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNBDOMKFAGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNBDOMKFAGG*))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNBDOMKFAGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNBDOMKFAGG*))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNBDOMKFAGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
