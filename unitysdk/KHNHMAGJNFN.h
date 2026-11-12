#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHNHMAGJNFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHNHMAGJNFN_ABAJLMILIDL_OFFSET UNITYSDK_OFFSET(0x1FB66560)
#define KHNHMAGJNFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB668A0)
#define KHNHMAGJNFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB66B70)
#define KHNHMAGJNFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB664F0)
#define KHNHMAGJNFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB664C0)
#define KHNHMAGJNFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB664B0)
#define KHNHMAGJNFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB66660)
#define KHNHMAGJNFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB66580)
#define KHNHMAGJNFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB66730)
#define KHNHMAGJNFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB66470)
#define KHNHMAGJNFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB669F0)
#define KHNHMAGJNFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB669B0)
#define KHNHMAGJNFN_MFDGNAJMGLB_OFFSET UNITYSDK_OFFSET(0x1FB66550)
#define KHNHMAGJNFN_NOHEIINLGMA_OFFSET UNITYSDK_OFFSET(0x1FB66540)
#define KHNHMAGJNFN_OODPKALBLDP_OFFSET UNITYSDK_OFFSET(0x1FB66570)
#define KHNHMAGJNFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB664A0)
#define KHNHMAGJNFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB66760)
#define KHNHMAGJNFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB667C0)

inline static constexpr unsigned int KHNHMAGJNFN_TypeDefinitionIndex = 27234;

	class KHNHMAGJNFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HEFMPPMMBJG; // 0x18
		::System::UInt32 ABPDPMHFFNN; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KHNHMAGJNFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHNHMAGJNFN*>**)UnitySDK::FromName("", "KHNHMAGJNFN")->GetStaticField(0x11DD0);
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

		static ::Google::Protobuf::MessageParser_1<::KHNHMAGJNFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHNHMAGJNFN*>*(*)())((::PBYTE)hIl2Cpp + KHNHMAGJNFN_JJGHOBBFNJD_OFFSET))();
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
