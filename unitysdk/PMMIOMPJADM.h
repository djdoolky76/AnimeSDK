#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CABBOOKAODO;
class PMMIOMPJADM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMMIOMPJADM_BBGEHKCINNM_OFFSET UNITYSDK_OFFSET(0x1DF80270)
#define PMMIOMPJADM_BIBNNGLPJKA_OFFSET UNITYSDK_OFFSET(0x1DF80260)
#define PMMIOMPJADM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF80800)
#define PMMIOMPJADM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF80B00)
#define PMMIOMPJADM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF801C0)
#define PMMIOMPJADM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF80130)
#define PMMIOMPJADM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF80120)
#define PMMIOMPJADM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF803F0)
#define PMMIOMPJADM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF80280)
#define PMMIOMPJADM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF806C0)
#define PMMIOMPJADM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF800E0)
#define PMMIOMPJADM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF80930)
#define PMMIOMPJADM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF80860)
#define PMMIOMPJADM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF80110)
#define PMMIOMPJADM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF80710)
#define PMMIOMPJADM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF80770)

inline static constexpr unsigned int PMMIOMPJADM_TypeDefinitionIndex = 32607;

	class PMMIOMPJADM : public ::System::Object
	{
	public:
		::CABBOOKAODO* CMKBCNFAGIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PMMIOMPJADM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PMMIOMPJADM*>**)UnitySDK::FromName("", "PMMIOMPJADM")->GetStaticField(0x402F0);
		}

		// static const ::System::Object CNLIOGJOBKB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMMIOMPJADM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMIOMPJADM*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMMIOMPJADM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PMMIOMPJADM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PMMIOMPJADM*>*(*)())((::PBYTE)hIl2Cpp + PMMIOMPJADM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMMIOMPJADM* Clone()
		{
			return ((::PMMIOMPJADM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_CLONE_OFFSET))(this);
		}

		::CABBOOKAODO* BIBNNGLPJKA()
		{
			return ((::CABBOOKAODO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_BIBNNGLPJKA_OFFSET))(this);
		}

		::System::Void BBGEHKCINNM(::CABBOOKAODO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CABBOOKAODO*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_BBGEHKCINNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMMIOMPJADM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMMIOMPJADM*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMIOMPJADM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMMIOMPJADM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMMIOMPJADM*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMMIOMPJADM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
