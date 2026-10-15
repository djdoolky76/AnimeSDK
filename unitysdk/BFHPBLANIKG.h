#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFHPBLANIKG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFHPBLANIKG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6D5A0)
#define BFHPBLANIKG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D7C0)
#define BFHPBLANIKG_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6D1F0)
#define BFHPBLANIKG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6D1C0)
#define BFHPBLANIKG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D1B0)
#define BFHPBLANIKG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6D320)
#define BFHPBLANIKG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6D250)
#define BFHPBLANIKG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA6D240)
#define BFHPBLANIKG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6D490)
#define BFHPBLANIKG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6D170)
#define BFHPBLANIKG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6D660)
#define BFHPBLANIKG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6D630)
#define BFHPBLANIKG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA6D230)
#define BFHPBLANIKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D1A0)
#define BFHPBLANIKG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6D4C0)
#define BFHPBLANIKG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6D520)

inline static constexpr unsigned int BFHPBLANIKG_TypeDefinitionIndex = 31646;

	class BFHPBLANIKG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFHPBLANIKG")->GetStaticField(0x42290);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFHPBLANIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHPBLANIKG*))((::PBYTE)hIl2Cpp + BFHPBLANIKG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFHPBLANIKG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFHPBLANIKG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFHPBLANIKG* Clone()
		{
			return ((::BFHPBLANIKG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BFHPBLANIKG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFHPBLANIKG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFHPBLANIKG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFHPBLANIKG*))((::PBYTE)hIl2Cpp + BFHPBLANIKG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFHPBLANIKG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFHPBLANIKG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFHPBLANIKG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFHPBLANIKG*))((::PBYTE)hIl2Cpp + BFHPBLANIKG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFHPBLANIKG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
