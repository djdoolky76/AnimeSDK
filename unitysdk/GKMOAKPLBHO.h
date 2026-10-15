#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKMOAKPLBHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GKMOAKPLBHO_BJIHPAGKCBP_OFFSET UNITYSDK_OFFSET(0x1E48C8F0)
#define GKMOAKPLBHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E48CC70)
#define GKMOAKPLBHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E48D000)
#define GKMOAKPLBHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E48C850)
#define GKMOAKPLBHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E48C810)
#define GKMOAKPLBHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E48C800)
#define GKMOAKPLBHO_EMMJPJAMEFL_OFFSET UNITYSDK_OFFSET(0x1E48C8C0)
#define GKMOAKPLBHO_ENJNOMANLCN_OFFSET UNITYSDK_OFFSET(0x1E48C8B0)
#define GKMOAKPLBHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E48C9E0)
#define GKMOAKPLBHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E48C900)
#define GKMOAKPLBHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E48CAB0)
#define GKMOAKPLBHO_GHCGBBHOAKB_OFFSET UNITYSDK_OFFSET(0x1E48C8A0)
#define GKMOAKPLBHO_HHLOJEAHIDB_OFFSET UNITYSDK_OFFSET(0x1E48C8E0)
#define GKMOAKPLBHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E48C7C0)
#define GKMOAKPLBHO_JLCKFMGKJPB_OFFSET UNITYSDK_OFFSET(0x1E48C8D0)
#define GKMOAKPLBHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E48CE50)
#define GKMOAKPLBHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E48CE00)
#define GKMOAKPLBHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E48C7F0)
#define GKMOAKPLBHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E48CAE0)
#define GKMOAKPLBHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E48CB40)

inline static constexpr unsigned int GKMOAKPLBHO_TypeDefinitionIndex = 33555;

	class GKMOAKPLBHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CMLMANGAIOH; // 0x18
		::System::UInt32 AEKECGJLGEF; // 0x1C
		::System::UInt32 PBPJNDEHDNK; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GKMOAKPLBHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GKMOAKPLBHO*>**)UnitySDK::FromName("", "GKMOAKPLBHO")->GetStaticField(0x1C170);
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

		static ::Google::Protobuf::MessageParser_1<::GKMOAKPLBHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GKMOAKPLBHO*>*(*)())((::PBYTE)hIl2Cpp + GKMOAKPLBHO_JJGHOBBFNJD_OFFSET))();
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
