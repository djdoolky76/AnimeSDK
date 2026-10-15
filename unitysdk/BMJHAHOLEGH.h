#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHAHOLEGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMJHAHOLEGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFFB970)
#define BMJHAHOLEGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFBC70)
#define BMJHAHOLEGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFFB540)
#define BMJHAHOLEGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFFB510)
#define BMJHAHOLEGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFB500)
#define BMJHAHOLEGH_DLBBFLIOMID_OFFSET UNITYSDK_OFFSET(0x1DFFB5F0)
#define BMJHAHOLEGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFFB660)
#define BMJHAHOLEGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFFB610)
#define BMJHAHOLEGH_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1DFFB5A0)
#define BMJHAHOLEGH_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1DFFB5C0)
#define BMJHAHOLEGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFFB740)
#define BMJHAHOLEGH_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1DFFB5B0)
#define BMJHAHOLEGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFFB4C0)
#define BMJHAHOLEGH_LHGEGKOPEDB_OFFSET UNITYSDK_OFFSET(0x1DFFB5E0)
#define BMJHAHOLEGH_LJLLAKNNDHA_OFFSET UNITYSDK_OFFSET(0x1DFFB5D0)
#define BMJHAHOLEGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFFBBD0)
#define BMJHAHOLEGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFFBB80)
#define BMJHAHOLEGH_NNMMPCBHCLD_OFFSET UNITYSDK_OFFSET(0x1DFFB600)
#define BMJHAHOLEGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFFB4F0)
#define BMJHAHOLEGH_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1DFFB590)
#define BMJHAHOLEGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFFB780)
#define BMJHAHOLEGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFFB7E0)

inline static constexpr unsigned int BMJHAHOLEGH_TypeDefinitionIndex = 31321;

	class BMJHAHOLEGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBHLHPDBNFD; // 0x18
		::System::UInt32 GFDLMIKMBHP; // 0x1C
		::System::UInt32 LDDJGLLKGCA; // 0x20
		::System::UInt32 FJBLKPNOKAF; // 0x24
		static ::Google::Protobuf::MessageParser_1<::BMJHAHOLEGH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BMJHAHOLEGH*>**)UnitySDK::FromName("", "BMJHAHOLEGH")->GetStaticField(0x596B0);
		}

		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object PFPJMEJFKFH; // 0x0
		// static const ::System::Object NAEPAIKBMPJ; // 0x0
		// static const ::System::Object MMEMPCIMNDG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMJHAHOLEGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMJHAHOLEGH*))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMJHAHOLEGH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BMJHAHOLEGH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BMJHAHOLEGH*>*(*)())((::PBYTE)hIl2Cpp + BMJHAHOLEGH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMJHAHOLEGH* Clone()
		{
			return ((::BMJHAHOLEGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_CLONE_OFFSET))(this);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 JFNJCIIHEFA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_JFNJCIIHEFA_OFFSET))(this);
		}

		::System::Void FOAFNPGDLLK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_FOAFNPGDLLK_OFFSET))(this, a1);
		}

		::System::UInt32 LJLLAKNNDHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_LJLLAKNNDHA_OFFSET))(this);
		}

		::System::Void LHGEGKOPEDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_LHGEGKOPEDB_OFFSET))(this, a1);
		}

		::System::UInt32 DLBBFLIOMID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_DLBBFLIOMID_OFFSET))(this);
		}

		::System::Void NNMMPCBHCLD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_NNMMPCBHCLD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMJHAHOLEGH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMJHAHOLEGH*))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMJHAHOLEGH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMJHAHOLEGH*))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMJHAHOLEGH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
