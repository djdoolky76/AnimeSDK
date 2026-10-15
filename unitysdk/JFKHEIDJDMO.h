#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFKHEIDJDMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFKHEIDJDMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7301E0)
#define JFKHEIDJDMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E730400)
#define JFKHEIDJDMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E72FE30)
#define JFKHEIDJDMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E72FE00)
#define JFKHEIDJDMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E72FDF0)
#define JFKHEIDJDMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E72FF60)
#define JFKHEIDJDMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E72FE90)
#define JFKHEIDJDMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7300D0)
#define JFKHEIDJDMO_JGDJGILDNJF_OFFSET UNITYSDK_OFFSET(0x1E72FE80)
#define JFKHEIDJDMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E72FDB0)
#define JFKHEIDJDMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7302A0)
#define JFKHEIDJDMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E730270)
#define JFKHEIDJDMO_NNBAOEHFDJM_OFFSET UNITYSDK_OFFSET(0x1E72FE70)
#define JFKHEIDJDMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E72FDE0)
#define JFKHEIDJDMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E730100)
#define JFKHEIDJDMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E730160)

inline static constexpr unsigned int JFKHEIDJDMO_TypeDefinitionIndex = 31912;

	class JFKHEIDJDMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MEPOEBNNJMI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFKHEIDJDMO")->GetStaticField(0x5FFE0);
		}

		// static const ::System::Object AGGOGPLGGOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFKHEIDJDMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKHEIDJDMO*))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFKHEIDJDMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFKHEIDJDMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFKHEIDJDMO* Clone()
		{
			return ((::JFKHEIDJDMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBAOEHFDJM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_NNBAOEHFDJM_OFFSET))(this);
		}

		::System::Void JGDJGILDNJF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_JGDJGILDNJF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFKHEIDJDMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFKHEIDJDMO*))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFKHEIDJDMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFKHEIDJDMO*))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFKHEIDJDMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
