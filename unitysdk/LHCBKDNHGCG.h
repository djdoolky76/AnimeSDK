#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHCBKDNHGCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHCBKDNHGCG_BKHDBPHNNLH_OFFSET UNITYSDK_OFFSET(0x1E95CC20)
#define LHCBKDNHGCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E95CFB0)
#define LHCBKDNHGCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95D240)
#define LHCBKDNHGCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E95CBD0)
#define LHCBKDNHGCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E95CBA0)
#define LHCBKDNHGCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E95CB90)
#define LHCBKDNHGCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E95CD10)
#define LHCBKDNHGCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E95CC40)
#define LHCBKDNHGCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E95CE80)
#define LHCBKDNHGCG_GIDJOFIIKAE_OFFSET UNITYSDK_OFFSET(0x1E95CC30)
#define LHCBKDNHGCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E95CB50)
#define LHCBKDNHGCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E95D0E0)
#define LHCBKDNHGCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E95D0A0)
#define LHCBKDNHGCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E95CB80)
#define LHCBKDNHGCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E95CEC0)
#define LHCBKDNHGCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E95CF20)

inline static constexpr unsigned int LHCBKDNHGCG_TypeDefinitionIndex = 27779;

	class LHCBKDNHGCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 EMIEPBJAICO; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LHCBKDNHGCG")->GetStaticField(0x40AE0);
		}

		// static const ::System::Object FMDKMAKPJOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHCBKDNHGCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHCBKDNHGCG*))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHCBKDNHGCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LHCBKDNHGCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHCBKDNHGCG* Clone()
		{
			return ((::LHCBKDNHGCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_CLONE_OFFSET))(this);
		}

		::System::UInt64 BKHDBPHNNLH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_BKHDBPHNNLH_OFFSET))(this);
		}

		::System::Void GIDJOFIIKAE(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_GIDJOFIIKAE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHCBKDNHGCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHCBKDNHGCG*))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHCBKDNHGCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHCBKDNHGCG*))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHCBKDNHGCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
