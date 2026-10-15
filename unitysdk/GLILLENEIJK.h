#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLILLENEIJK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLILLENEIJK_AEOLLAKHLGK_OFFSET UNITYSDK_OFFSET(0x1E4C1480)
#define GLILLENEIJK_AGAMIFMFAKF_OFFSET UNITYSDK_OFFSET(0x1E4C1470)
#define GLILLENEIJK_BMEAMKMEBMF_OFFSET UNITYSDK_OFFSET(0x1E4C1490)
#define GLILLENEIJK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4C17F0)
#define GLILLENEIJK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4C1AC0)
#define GLILLENEIJK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4C13F0)
#define GLILLENEIJK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4C13C0)
#define GLILLENEIJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4C13B0)
#define GLILLENEIJK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4C15B0)
#define GLILLENEIJK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4C14A0)
#define GLILLENEIJK_FFLNOHBNFHL_OFFSET UNITYSDK_OFFSET(0x1E4C1460)
#define GLILLENEIJK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4C1680)
#define GLILLENEIJK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4C1340)
#define GLILLENEIJK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4C1940)
#define GLILLENEIJK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4C1900)
#define GLILLENEIJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4C13A0)
#define GLILLENEIJK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4C16B0)
#define GLILLENEIJK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4C1710)

inline static constexpr unsigned int GLILLENEIJK_TypeDefinitionIndex = 28908;

	class GLILLENEIJK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFHKEGMKOJG; // 0x18
		::System::UInt32 BLCOOMJICJC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GLILLENEIJK")->GetStaticField(0x1F5C0);
		}

		// static const ::System::Object BOJDOPJDNBO; // 0x0
		// static const ::System::Object HMILGJNJNCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLILLENEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLILLENEIJK*))((::PBYTE)hIl2Cpp + GLILLENEIJK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLILLENEIJK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GLILLENEIJK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLILLENEIJK* Clone()
		{
			return ((::GLILLENEIJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFLNOHBNFHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_FFLNOHBNFHL_OFFSET))(this);
		}

		::System::Void AGAMIFMFAKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLILLENEIJK_AGAMIFMFAKF_OFFSET))(this, a1);
		}

		::System::UInt32 AEOLLAKHLGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_AEOLLAKHLGK_OFFSET))(this);
		}

		::System::Void BMEAMKMEBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GLILLENEIJK_BMEAMKMEBMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLILLENEIJK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLILLENEIJK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLILLENEIJK*))((::PBYTE)hIl2Cpp + GLILLENEIJK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLILLENEIJK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLILLENEIJK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLILLENEIJK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLILLENEIJK*))((::PBYTE)hIl2Cpp + GLILLENEIJK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLILLENEIJK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
