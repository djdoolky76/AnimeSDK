#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDGHLGHJDMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDGHLGHJDMC_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x203C7DE0)
#define KDGHLGHJDMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203C8170)
#define KDGHLGHJDMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C8390)
#define KDGHLGHJDMC_CLONE_OFFSET UNITYSDK_OFFSET(0x203C7D60)
#define KDGHLGHJDMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203C7D30)
#define KDGHLGHJDMC_CTOR_OFFSET UNITYSDK_OFFSET(0x203C7D20)
#define KDGHLGHJDMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203C7EF0)
#define KDGHLGHJDMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x203C7DF0)
#define KDGHLGHJDMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203C8060)
#define KDGHLGHJDMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203C7CB0)
#define KDGHLGHJDMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203C8230)
#define KDGHLGHJDMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203C8200)
#define KDGHLGHJDMC_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x203C7DD0)
#define KDGHLGHJDMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203C7D10)
#define KDGHLGHJDMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203C8090)
#define KDGHLGHJDMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x203C80F0)

inline static constexpr unsigned int KDGHLGHJDMC_TypeDefinitionIndex = 30374;

	class KDGHLGHJDMC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KDGHLGHJDMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDGHLGHJDMC*>**)UnitySDK::FromName("", "KDGHLGHJDMC")->GetStaticField(0x6D740);
		}

		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDGHLGHJDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDGHLGHJDMC*))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDGHLGHJDMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDGHLGHJDMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDGHLGHJDMC*>*(*)())((::PBYTE)hIl2Cpp + KDGHLGHJDMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDGHLGHJDMC* Clone()
		{
			return ((::KDGHLGHJDMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDGHLGHJDMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDGHLGHJDMC*))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDGHLGHJDMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDGHLGHJDMC*))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDGHLGHJDMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
