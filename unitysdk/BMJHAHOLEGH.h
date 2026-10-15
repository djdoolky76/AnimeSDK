#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJHAHOLEGH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMJHAHOLEGH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E028F70)
#define BMJHAHOLEGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E029270)
#define BMJHAHOLEGH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E028B40)
#define BMJHAHOLEGH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E028B10)
#define BMJHAHOLEGH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E028B00)
#define BMJHAHOLEGH_DLBBFLIOMID_OFFSET UNITYSDK_OFFSET(0x1E028BF0)
#define BMJHAHOLEGH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E028C60)
#define BMJHAHOLEGH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E028C10)
#define BMJHAHOLEGH_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E028BA0)
#define BMJHAHOLEGH_FOAFNPGDLLK_OFFSET UNITYSDK_OFFSET(0x1E028BC0)
#define BMJHAHOLEGH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E028D40)
#define BMJHAHOLEGH_JFNJCIIHEFA_OFFSET UNITYSDK_OFFSET(0x1E028BB0)
#define BMJHAHOLEGH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E028AC0)
#define BMJHAHOLEGH_LHGEGKOPEDB_OFFSET UNITYSDK_OFFSET(0x1E028BE0)
#define BMJHAHOLEGH_LJLLAKNNDHA_OFFSET UNITYSDK_OFFSET(0x1E028BD0)
#define BMJHAHOLEGH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0291D0)
#define BMJHAHOLEGH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E029180)
#define BMJHAHOLEGH_NNMMPCBHCLD_OFFSET UNITYSDK_OFFSET(0x1E028C00)
#define BMJHAHOLEGH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E028AF0)
#define BMJHAHOLEGH_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E028B90)
#define BMJHAHOLEGH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E028D80)
#define BMJHAHOLEGH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E028DE0)

	class BMJHAHOLEGH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DBHLHPDBNFD; // 0x18
		::System::UInt32 FJBLKPNOKAF; // 0x1C
		::System::UInt32 GFDLMIKMBHP; // 0x20
		::System::UInt32 LDDJGLLKGCA; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMJHAHOLEGH")->GetStaticField(0x50DB0);
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMJHAHOLEGH_JJGHOBBFNJD_OFFSET))();
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
