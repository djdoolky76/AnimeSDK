#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNHMAGJNFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHNHMAGJNFN_ABAJLMILIDL_OFFSET UNITYSDK_OFFSET(0x1E84CBD0)
#define KHNHMAGJNFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E84CF10)
#define KHNHMAGJNFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E84D1E0)
#define KHNHMAGJNFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E84CB60)
#define KHNHMAGJNFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E84CB30)
#define KHNHMAGJNFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84CB20)
#define KHNHMAGJNFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E84CCD0)
#define KHNHMAGJNFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E84CBF0)
#define KHNHMAGJNFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E84CDA0)
#define KHNHMAGJNFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E84CAE0)
#define KHNHMAGJNFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E84D060)
#define KHNHMAGJNFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E84D020)
#define KHNHMAGJNFN_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1E84CBC0)
#define KHNHMAGJNFN_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1E84CBB0)
#define KHNHMAGJNFN_OODPKALBLDP_OFFSET UNITYSDK_OFFSET(0x1E84CBE0)
#define KHNHMAGJNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E84CB10)
#define KHNHMAGJNFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E84CDD0)
#define KHNHMAGJNFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E84CE30)

	class KHNHMAGJNFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HEFMPPMMBJG; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KHNHMAGJNFN")->GetStaticField(0x17D80);
		}

		// static const ::System::Object EDGGGCNOFHI; // 0x0
		// static const ::System::Object KLLKPAPOHDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHNHMAGJNFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNHMAGJNFN*))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHNHMAGJNFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KHNHMAGJNFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHNHMAGJNFN* Clone()
		{
			return ((::KHNHMAGJNFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 NOHEIINLGMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_NOHEIINLGMA_OFFSET))(this);
		}

		::System::Void MFDGNAJMGLB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_MFDGNAJMGLB_OFFSET))(this, a1);
		}

		::System::UInt32 ABAJLMILIDL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_ABAJLMILIDL_OFFSET))(this);
		}

		::System::Void OODPKALBLDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_OODPKALBLDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHNHMAGJNFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHNHMAGJNFN*))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHNHMAGJNFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNHMAGJNFN*))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHNHMAGJNFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
