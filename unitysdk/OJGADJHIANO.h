#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGNOPNICH;
class OJGADJHIANO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJGADJHIANO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE81C70)
#define OJGADJHIANO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE81FE0)
#define OJGADJHIANO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE81720)
#define OJGADJHIANO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE816B0)
#define OJGADJHIANO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE816A0)
#define OJGADJHIANO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE81960)
#define OJGADJHIANO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE817E0)
#define OJGADJHIANO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE817D0)
#define OJGADJHIANO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE81AE0)
#define OJGADJHIANO_HGKEAJLMLKN_OFFSET UNITYSDK_OFFSET(0x1DE817A0)
#define OJGADJHIANO_JIOJFMGAOHG_OFFSET UNITYSDK_OFFSET(0x1DE817B0)
#define OJGADJHIANO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE81660)
#define OJGADJHIANO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE81E00)
#define OJGADJHIANO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE81D40)
#define OJGADJHIANO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE817C0)
#define OJGADJHIANO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE81690)
#define OJGADJHIANO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE81B30)
#define OJGADJHIANO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE81B90)

inline static constexpr unsigned int OJGADJHIANO_TypeDefinitionIndex = 30527;

	class OJGADJHIANO : public ::System::Object
	{
	public:
		::FHEGNOPNICH* EHJBJLHIJME; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OJGADJHIANO")->GetStaticField(0x1ED90);
		}

		// static const ::System::Object MABJPMGDBHI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJGADJHIANO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJGADJHIANO*))((::PBYTE)hIl2Cpp + OJGADJHIANO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJGADJHIANO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OJGADJHIANO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJGADJHIANO* Clone()
		{
			return ((::OJGADJHIANO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_CLONE_OFFSET))(this);
		}

		::FHEGNOPNICH* HGKEAJLMLKN()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_HGKEAJLMLKN_OFFSET))(this);
		}

		::System::Void JIOJFMGAOHG(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + OJGADJHIANO_JIOJFMGAOHG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJGADJHIANO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJGADJHIANO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJGADJHIANO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJGADJHIANO*))((::PBYTE)hIl2Cpp + OJGADJHIANO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJGADJHIANO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJGADJHIANO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJGADJHIANO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJGADJHIANO*))((::PBYTE)hIl2Cpp + OJGADJHIANO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJGADJHIANO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
