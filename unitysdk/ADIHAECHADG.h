#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADIHAECHADG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ADIHAECHADG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDE26B0)
#define ADIHAECHADG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE28D0)
#define ADIHAECHADG_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDE22A0)
#define ADIHAECHADG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE2270)
#define ADIHAECHADG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE2260)
#define ADIHAECHADG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDE2430)
#define ADIHAECHADG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE2330)
#define ADIHAECHADG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE25A0)
#define ADIHAECHADG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDE21F0)
#define ADIHAECHADG_LKCIOAMDIJD_OFFSET UNITYSDK_OFFSET(0x1DDE2320)
#define ADIHAECHADG_MCCBKJHICAB_OFFSET UNITYSDK_OFFSET(0x1DDE2310)
#define ADIHAECHADG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDE2770)
#define ADIHAECHADG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDE2740)
#define ADIHAECHADG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDE2250)
#define ADIHAECHADG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDE25D0)
#define ADIHAECHADG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDE2630)

inline static constexpr unsigned int ADIHAECHADG_TypeDefinitionIndex = 33364;

	class ADIHAECHADG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AKDEMPHHFPI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ADIHAECHADG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ADIHAECHADG*>**)UnitySDK::FromName("", "ADIHAECHADG")->GetStaticField(0x2B900);
		}

		// static const ::System::Object KLNHFGLBBIM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ADIHAECHADG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADIHAECHADG*))((::PBYTE)hIl2Cpp + ADIHAECHADG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADIHAECHADG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ADIHAECHADG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ADIHAECHADG*>*(*)())((::PBYTE)hIl2Cpp + ADIHAECHADG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ADIHAECHADG* Clone()
		{
			return ((::ADIHAECHADG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_CLONE_OFFSET))(this);
		}

		::System::UInt32 MCCBKJHICAB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_MCCBKJHICAB_OFFSET))(this);
		}

		::System::Void LKCIOAMDIJD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADIHAECHADG_LKCIOAMDIJD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADIHAECHADG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ADIHAECHADG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ADIHAECHADG*))((::PBYTE)hIl2Cpp + ADIHAECHADG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ADIHAECHADG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADIHAECHADG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ADIHAECHADG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADIHAECHADG*))((::PBYTE)hIl2Cpp + ADIHAECHADG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ADIHAECHADG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
