#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLGOONIKLAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLGOONIKLAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E99B790)
#define LLGOONIKLAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E99BA60)
#define LLGOONIKLAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E99B3E0)
#define LLGOONIKLAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E99B3B0)
#define LLGOONIKLAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E99B3A0)
#define LLGOONIKLAJ_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E99B430)
#define LLGOONIKLAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E99B550)
#define LLGOONIKLAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E99B470)
#define LLGOONIKLAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E99B620)
#define LLGOONIKLAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E99B360)
#define LLGOONIKLAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E99B8E0)
#define LLGOONIKLAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E99B8A0)
#define LLGOONIKLAJ_MMFCFABFPJA_OFFSET UNITYSDK_OFFSET(0x1E99B450)
#define LLGOONIKLAJ_NBGDJNEMIJN_OFFSET UNITYSDK_OFFSET(0x1E99B460)
#define LLGOONIKLAJ_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E99B440)
#define LLGOONIKLAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E99B390)
#define LLGOONIKLAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E99B650)
#define LLGOONIKLAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E99B6B0)

inline static constexpr unsigned int LLGOONIKLAJ_TypeDefinitionIndex = 27678;

	class LLGOONIKLAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HOMOFBOHOEF; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLGOONIKLAJ")->GetStaticField(0x4BEE0);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object OJHHIMKBKJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLGOONIKLAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLGOONIKLAJ*))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLGOONIKLAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLGOONIKLAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLGOONIKLAJ* Clone()
		{
			return ((::LLGOONIKLAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 MMFCFABFPJA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_MMFCFABFPJA_OFFSET))(this);
		}

		::System::Void NBGDJNEMIJN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_NBGDJNEMIJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLGOONIKLAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLGOONIKLAJ*))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLGOONIKLAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLGOONIKLAJ*))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLGOONIKLAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
