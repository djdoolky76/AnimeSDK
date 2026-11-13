#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMELLGLGE;
class JOLAHHGIFHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGAMELLGLGE_BKADKMKGADI_OFFSET UNITYSDK_OFFSET(0x206278A0)
#define JGAMELLGLGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20627E30)
#define JGAMELLGLGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x20628080)
#define JGAMELLGLGE_CLONE_OFFSET UNITYSDK_OFFSET(0x20627810)
#define JGAMELLGLGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206277A0)
#define JGAMELLGLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x20627790)
#define JGAMELLGLGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20627A20)
#define JGAMELLGLGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x206278B0)
#define JGAMELLGLGE_FBKALCJFKEE_OFFSET UNITYSDK_OFFSET(0x20627890)
#define JGAMELLGLGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20627CF0)
#define JGAMELLGLGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20627750)
#define JGAMELLGLGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20627F00)
#define JGAMELLGLGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20627E90)
#define JGAMELLGLGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20627780)
#define JGAMELLGLGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20627D40)
#define JGAMELLGLGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x20627DA0)

inline static constexpr unsigned int JGAMELLGLGE_TypeDefinitionIndex = 35118;

	class JGAMELLGLGE : public ::System::Object
	{
	public:
		::JOLAHHGIFHA* JPDMBNKJOHP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>**)UnitySDK::FromName("", "JGAMELLGLGE")->GetStaticField(0x5FDB0);
		}

		// static const ::System::Object ELADMBPBJKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGAMELLGLGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMELLGLGE*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMELLGLGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>*(*)())((::PBYTE)hIl2Cpp + JGAMELLGLGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGAMELLGLGE* Clone()
		{
			return ((::JGAMELLGLGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CLONE_OFFSET))(this);
		}

		::JOLAHHGIFHA* FBKALCJFKEE()
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_FBKALCJFKEE_OFFSET))(this);
		}

		::System::Void BKADKMKGADI(::JOLAHHGIFHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOLAHHGIFHA*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_BKADKMKGADI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGAMELLGLGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGAMELLGLGE*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGAMELLGLGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMELLGLGE*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
