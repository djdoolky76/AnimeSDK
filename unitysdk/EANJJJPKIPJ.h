#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFDPLINPMJF;
class EANJJJPKIPJ;
class NKKADHADOLO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EANJJJPKIPJ_ANOKHFHCGFL_OFFSET UNITYSDK_OFFSET(0x1E22E800)
#define EANJJJPKIPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E22EEF0)
#define EANJJJPKIPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E22F290)
#define EANJJJPKIPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E22E710)
#define EANJJJPKIPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E22E670)
#define EANJJJPKIPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E22E660)
#define EANJJJPKIPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E22EA90)
#define EANJJJPKIPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E22E840)
#define EANJJJPKIPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E22ECC0)
#define EANJJJPKIPJ_IEMDAPOMIDK_OFFSET UNITYSDK_OFFSET(0x1E22E820)
#define EANJJJPKIPJ_ILGMJEGHAOK_OFFSET UNITYSDK_OFFSET(0x1E22E810)
#define EANJJJPKIPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E22E5F0)
#define EANJJJPKIPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E22F090)
#define EANJJJPKIPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E22EF80)
#define EANJJJPKIPJ_OPEIKPDCOJC_OFFSET UNITYSDK_OFFSET(0x1E22E830)
#define EANJJJPKIPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E22E650)
#define EANJJJPKIPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E22EDB0)
#define EANJJJPKIPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E22EE10)

inline static constexpr unsigned int EANJJJPKIPJ_TypeDefinitionIndex = 25578;

	class EANJJJPKIPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NKKADHADOLO* ENDLJKJCPAC; // 0x18
		::DFDPLINPMJF* GFODEGIJHBD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EANJJJPKIPJ")->GetStaticField(0x49970);
		}

		// static const ::System::Object DPILENHLIAA; // 0x0
		// static const ::System::Object BCDIAEANPPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EANJJJPKIPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJJJPKIPJ*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EANJJJPKIPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EANJJJPKIPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EANJJJPKIPJ* Clone()
		{
			return ((::EANJJJPKIPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_CLONE_OFFSET))(this);
		}

		::DFDPLINPMJF* ANOKHFHCGFL()
		{
			return ((::DFDPLINPMJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_ANOKHFHCGFL_OFFSET))(this);
		}

		::System::Void ILGMJEGHAOK(::DFDPLINPMJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFDPLINPMJF*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_ILGMJEGHAOK_OFFSET))(this, a1);
		}

		::NKKADHADOLO* IEMDAPOMIDK()
		{
			return ((::NKKADHADOLO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_IEMDAPOMIDK_OFFSET))(this);
		}

		::System::Void OPEIKPDCOJC(::NKKADHADOLO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKKADHADOLO*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_OPEIKPDCOJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EANJJJPKIPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EANJJJPKIPJ*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EANJJJPKIPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJJJPKIPJ*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EANJJJPKIPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
