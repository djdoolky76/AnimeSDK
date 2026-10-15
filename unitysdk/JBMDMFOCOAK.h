#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOJEODENHPL;
class JBMDMFOCOAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JBMDMFOCOAK_BHNLIGCELMI_OFFSET UNITYSDK_OFFSET(0x1E6F9D50)
#define JBMDMFOCOAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FA240)
#define JBMDMFOCOAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FA5B0)
#define JBMDMFOCOAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6F9C20)
#define JBMDMFOCOAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6F9B70)
#define JBMDMFOCOAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6F9B60)
#define JBMDMFOCOAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6F9F10)
#define JBMDMFOCOAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6F9D60)
#define JBMDMFOCOAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FA090)
#define JBMDMFOCOAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6F9AF0)
#define JBMDMFOCOAK_LBIOHEOAEFI_OFFSET UNITYSDK_OFFSET(0x1E6F9D20)
#define JBMDMFOCOAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FA400)
#define JBMDMFOCOAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FA310)
#define JBMDMFOCOAK_MGGINJJONKA_OFFSET UNITYSDK_OFFSET(0x1E6F9D30)
#define JBMDMFOCOAK_NONDJMLNJAO_OFFSET UNITYSDK_OFFSET(0x1E6F9D40)
#define JBMDMFOCOAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6F9B50)
#define JBMDMFOCOAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FA100)
#define JBMDMFOCOAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FA160)

inline static constexpr unsigned int JBMDMFOCOAK_TypeDefinitionIndex = 29912;

	class JBMDMFOCOAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::AOJEODENHPL* MEAAOAOGHFF; // 0x18
		::System::UInt32 HFPIMHCJFJH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JBMDMFOCOAK")->GetStaticField(0x5D3C0);
		}

		// static const ::System::Object DGILFMEMCPO; // 0x0
		// static const ::System::Object HPLMLMEBFMP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JBMDMFOCOAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBMDMFOCOAK*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JBMDMFOCOAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JBMDMFOCOAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JBMDMFOCOAK* Clone()
		{
			return ((::JBMDMFOCOAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_CLONE_OFFSET))(this);
		}

		::AOJEODENHPL* LBIOHEOAEFI()
		{
			return ((::AOJEODENHPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_LBIOHEOAEFI_OFFSET))(this);
		}

		::System::Void MGGINJJONKA(::AOJEODENHPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOJEODENHPL*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_MGGINJJONKA_OFFSET))(this, a1);
		}

		::System::UInt32 NONDJMLNJAO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_NONDJMLNJAO_OFFSET))(this);
		}

		::System::Void BHNLIGCELMI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_BHNLIGCELMI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JBMDMFOCOAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JBMDMFOCOAK*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JBMDMFOCOAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBMDMFOCOAK*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JBMDMFOCOAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
