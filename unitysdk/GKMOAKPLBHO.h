#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMOAKPLBHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKMOAKPLBHO_BJIHPAGKCBP_OFFSET UNITYSDK_OFFSET(0x1E4B9F70)
#define GKMOAKPLBHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4BA2F0)
#define GKMOAKPLBHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BA680)
#define GKMOAKPLBHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4B9ED0)
#define GKMOAKPLBHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4B9E90)
#define GKMOAKPLBHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4B9E80)
#define GKMOAKPLBHO_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1E4B9F40)
#define GKMOAKPLBHO_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E4B9F30)
#define GKMOAKPLBHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4BA060)
#define GKMOAKPLBHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4B9F80)
#define GKMOAKPLBHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4BA130)
#define GKMOAKPLBHO_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E4B9F20)
#define GKMOAKPLBHO_HHLOJEAHIDB_OFFSET UNITYSDK_OFFSET(0x1E4B9F60)
#define GKMOAKPLBHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4B9E40)
#define GKMOAKPLBHO_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1E4B9F50)
#define GKMOAKPLBHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4BA4D0)
#define GKMOAKPLBHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4BA480)
#define GKMOAKPLBHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4B9E70)
#define GKMOAKPLBHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4BA160)
#define GKMOAKPLBHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4BA1C0)

inline static constexpr unsigned int GKMOAKPLBHO_TypeDefinitionIndex = 33555;

	class GKMOAKPLBHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEKECGJLGEF; // 0x18
		::System::UInt32 PBPJNDEHDNK; // 0x1C
		::System::UInt32 CMLMANGAIOH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GKMOAKPLBHO")->GetStaticField(0x1E0F0);
		}

		// static const ::System::Object AINHNOCEBJG; // 0x0
		// static const ::System::Object JOKMIFACEIK; // 0x0
		// static const ::System::Object LLHBHLCEKNK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GKMOAKPLBHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKMOAKPLBHO*))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GKMOAKPLBHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GKMOAKPLBHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GKMOAKPLBHO* Clone()
		{
			return ((::GKMOAKPLBHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHCGBBHOAKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_GHCGBBHOAKB_OFFSET))(this);
		}

		::System::Void ENJNOMANLCN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_ENJNOMANLCN_OFFSET))(this, a1);
		}

		::System::UInt32 EMMJPJAMEFL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_EMMJPJAMEFL_OFFSET))(this);
		}

		::System::Void JLCKFMGKJPB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_JLCKFMGKJPB_OFFSET))(this, a1);
		}

		::System::UInt32 HHLOJEAHIDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_HHLOJEAHIDB_OFFSET))(this);
		}

		::System::Void BJIHPAGKCBP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_BJIHPAGKCBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GKMOAKPLBHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GKMOAKPLBHO*))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GKMOAKPLBHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKMOAKPLBHO*))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GKMOAKPLBHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
