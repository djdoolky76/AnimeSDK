#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGIJFNAFLC;
class OPAOIBLFJOM;
class PKBDAKMLDMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OPAOIBLFJOM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203632C0)
#define OPAOIBLFJOM_CCTOR_OFFSET UNITYSDK_OFFSET(0x203636C0)
#define OPAOIBLFJOM_CLONE_OFFSET UNITYSDK_OFFSET(0x20362BB0)
#define OPAOIBLFJOM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20362AF0)
#define OPAOIBLFJOM_CTOR_OFFSET UNITYSDK_OFFSET(0x20362AE0)
#define OPAOIBLFJOM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20362EF0)
#define OPAOIBLFJOM_EQUALS_OFFSET UNITYSDK_OFFSET(0x20362CC0)
#define OPAOIBLFJOM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20363120)
#define OPAOIBLFJOM_HPDCCNDOIKE_OFFSET UNITYSDK_OFFSET(0x20362CA0)
#define OPAOIBLFJOM_IHHKHFKDPGO_OFFSET UNITYSDK_OFFSET(0x20362CB0)
#define OPAOIBLFJOM_JBEMODKNGCM_OFFSET UNITYSDK_OFFSET(0x20362C80)
#define OPAOIBLFJOM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20362AA0)
#define OPAOIBLFJOM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20363490)
#define OPAOIBLFJOM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20363350)
#define OPAOIBLFJOM_NHHLMKKFLNL_OFFSET UNITYSDK_OFFSET(0x20362C90)
#define OPAOIBLFJOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20362AD0)
#define OPAOIBLFJOM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20363180)
#define OPAOIBLFJOM_WRITETO_OFFSET UNITYSDK_OFFSET(0x203631E0)

inline static constexpr unsigned int OPAOIBLFJOM_TypeDefinitionIndex = 29384;

	class OPAOIBLFJOM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::IPGIJFNAFLC* BNNPBILMCPH; // 0x18
		::PKBDAKMLDMC* DBNDEFGJCHJ; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OPAOIBLFJOM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OPAOIBLFJOM*>**)UnitySDK::FromName("", "OPAOIBLFJOM")->GetStaticField(0x2A2E0);
		}

		// static const ::System::Object BECLLBBADCL; // 0x0
		// static const ::System::Object HDEJMLEIKJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OPAOIBLFJOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPAOIBLFJOM*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPAOIBLFJOM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OPAOIBLFJOM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OPAOIBLFJOM*>*(*)())((::PBYTE)hIl2Cpp + OPAOIBLFJOM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OPAOIBLFJOM* Clone()
		{
			return ((::OPAOIBLFJOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_CLONE_OFFSET))(this);
		}

		::PKBDAKMLDMC* JBEMODKNGCM()
		{
			return ((::PKBDAKMLDMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_JBEMODKNGCM_OFFSET))(this);
		}

		::System::Void NHHLMKKFLNL(::PKBDAKMLDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBDAKMLDMC*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_NHHLMKKFLNL_OFFSET))(this, a1);
		}

		::IPGIJFNAFLC* HPDCCNDOIKE()
		{
			return ((::IPGIJFNAFLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_HPDCCNDOIKE_OFFSET))(this);
		}

		::System::Void IHHKHFKDPGO(::IPGIJFNAFLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGIJFNAFLC*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_IHHKHFKDPGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OPAOIBLFJOM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OPAOIBLFJOM*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OPAOIBLFJOM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPAOIBLFJOM*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OPAOIBLFJOM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
