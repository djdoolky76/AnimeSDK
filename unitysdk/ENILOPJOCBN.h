#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALNGMGOJDOA;
class ENILOPJOCBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENILOPJOCBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5D58D0)
#define ENILOPJOCBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5D5C30)
#define ENILOPJOCBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5D52B0)
#define ENILOPJOCBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5D5240)
#define ENILOPJOCBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D5230)
#define ENILOPJOCBN_EDHGOHPFOFB_OFFSET UNITYSDK_OFFSET(0x1F5D5330)
#define ENILOPJOCBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5D54C0)
#define ENILOPJOCBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5D5350)
#define ENILOPJOCBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5D5790)
#define ENILOPJOCBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5D51F0)
#define ENILOPJOCBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5D5A20)
#define ENILOPJOCBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5D5930)
#define ENILOPJOCBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5D5220)
#define ENILOPJOCBN_PDMEGKFCOEE_OFFSET UNITYSDK_OFFSET(0x1F5D5340)
#define ENILOPJOCBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5D57E0)
#define ENILOPJOCBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5D5840)

inline static constexpr unsigned int ENILOPJOCBN_TypeDefinitionIndex = 31514;

	class ENILOPJOCBN : public ::System::Object
	{
	public:
		::ALNGMGOJDOA* NBDGOJNBINH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ENILOPJOCBN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENILOPJOCBN*>**)UnitySDK::FromName("", "ENILOPJOCBN")->GetStaticField(0x50460);
		}

		// static const ::System::Object IDIAOOLKKBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENILOPJOCBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENILOPJOCBN*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENILOPJOCBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENILOPJOCBN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENILOPJOCBN*>*(*)())((::PBYTE)hIl2Cpp + ENILOPJOCBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENILOPJOCBN* Clone()
		{
			return ((::ENILOPJOCBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_CLONE_OFFSET))(this);
		}

		::ALNGMGOJDOA* EDHGOHPFOFB()
		{
			return ((::ALNGMGOJDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_EDHGOHPFOFB_OFFSET))(this);
		}

		::System::Void PDMEGKFCOEE(::ALNGMGOJDOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALNGMGOJDOA*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_PDMEGKFCOEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENILOPJOCBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENILOPJOCBN*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENILOPJOCBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENILOPJOCBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENILOPJOCBN*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENILOPJOCBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
