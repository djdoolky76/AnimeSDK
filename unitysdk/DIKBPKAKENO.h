#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NKLAEHJPIMN.h"
#include "unitysdk/System/Object.h"
class DIKBPKAKENO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIKBPKAKENO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1C17A0)
#define DIKBPKAKENO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1AB0)
#define DIKBPKAKENO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1C13E0)
#define DIKBPKAKENO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1C13B0)
#define DIKBPKAKENO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1C13A0)
#define DIKBPKAKENO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1C1550)
#define DIKBPKAKENO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1C1470)
#define DIKBPKAKENO_GAIKIHDIOBM_OFFSET UNITYSDK_OFFSET(0x1E1C1440)
#define DIKBPKAKENO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1C1620)
#define DIKBPKAKENO_HDAOMPLJEFF_OFFSET UNITYSDK_OFFSET(0x1E1C1460)
#define DIKBPKAKENO_JBENBABCOGB_OFFSET UNITYSDK_OFFSET(0x1E1C1430)
#define DIKBPKAKENO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1C1360)
#define DIKBPKAKENO_LGBGKFCDMIJ_OFFSET UNITYSDK_OFFSET(0x1E1C1450)
#define DIKBPKAKENO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1C1930)
#define DIKBPKAKENO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1C18F0)
#define DIKBPKAKENO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1C1390)
#define DIKBPKAKENO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1C1650)
#define DIKBPKAKENO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1C16B0)

inline static constexpr unsigned int DIKBPKAKENO_TypeDefinitionIndex = 33374;

	class DIKBPKAKENO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NKLAEHJPIMN AFHHMCKLLAJ; // 0x18
		::System::UInt32 OLBJMPLIEAB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DIKBPKAKENO")->GetStaticField(0xE170);
		}

		// static const ::System::Object LFMHICIGAPC; // 0x0
		// static const ::System::Object ECJAKLLDDDJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIKBPKAKENO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKBPKAKENO*))((::PBYTE)hIl2Cpp + DIKBPKAKENO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIKBPKAKENO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DIKBPKAKENO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIKBPKAKENO* Clone()
		{
			return ((::DIKBPKAKENO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_CLONE_OFFSET))(this);
		}

		::NKLAEHJPIMN JBENBABCOGB()
		{
			return ((::NKLAEHJPIMN(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_JBENBABCOGB_OFFSET))(this);
		}

		::System::Void GAIKIHDIOBM(::NKLAEHJPIMN a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKLAEHJPIMN))((::PBYTE)hIl2Cpp + DIKBPKAKENO_GAIKIHDIOBM_OFFSET))(this, a1);
		}

		::System::UInt32 LGBGKFCDMIJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_LGBGKFCDMIJ_OFFSET))(this);
		}

		::System::Void HDAOMPLJEFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIKBPKAKENO_HDAOMPLJEFF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIKBPKAKENO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIKBPKAKENO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIKBPKAKENO*))((::PBYTE)hIl2Cpp + DIKBPKAKENO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIKBPKAKENO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKBPKAKENO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIKBPKAKENO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIKBPKAKENO*))((::PBYTE)hIl2Cpp + DIKBPKAKENO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIKBPKAKENO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
