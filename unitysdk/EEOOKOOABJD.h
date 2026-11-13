#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
class EEOOKOOABJD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EEOOKOOABJD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20490A00)
#define EEOOKOOABJD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20490C90)
#define EEOOKOOABJD_CLONE_OFFSET UNITYSDK_OFFSET(0x204903D0)
#define EEOOKOOABJD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20490340)
#define EEOOKOOABJD_CTOR_OFFSET UNITYSDK_OFFSET(0x20490330)
#define EEOOKOOABJD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204905F0)
#define EEOOKOOABJD_EQUALS_OFFSET UNITYSDK_OFFSET(0x20490480)
#define EEOOKOOABJD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204908C0)
#define EEOOKOOABJD_IFECPLFEPIE_OFFSET UNITYSDK_OFFSET(0x20490460)
#define EEOOKOOABJD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204902F0)
#define EEOOKOOABJD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20490B10)
#define EEOOKOOABJD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20490A60)
#define EEOOKOOABJD_MNPKDNPEKDH_OFFSET UNITYSDK_OFFSET(0x20490470)
#define EEOOKOOABJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20490320)
#define EEOOKOOABJD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20490910)
#define EEOOKOOABJD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20490970)

inline static constexpr unsigned int EEOOKOOABJD_TypeDefinitionIndex = 31443;

	class EEOOKOOABJD : public ::System::Object
	{
	public:
		::BPJCKMPBAFC* GMBIBLEDALJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::EEOOKOOABJD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EEOOKOOABJD*>**)UnitySDK::FromName("", "EEOOKOOABJD")->GetStaticField(0x49CA0);
		}

		// static const ::System::Object JJBDGCGPPFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EEOOKOOABJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEOOKOOABJD*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EEOOKOOABJD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EEOOKOOABJD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EEOOKOOABJD*>*(*)())((::PBYTE)hIl2Cpp + EEOOKOOABJD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EEOOKOOABJD* Clone()
		{
			return ((::EEOOKOOABJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_CLONE_OFFSET))(this);
		}

		::BPJCKMPBAFC* IFECPLFEPIE()
		{
			return ((::BPJCKMPBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_IFECPLFEPIE_OFFSET))(this);
		}

		::System::Void MNPKDNPEKDH(::BPJCKMPBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_MNPKDNPEKDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EEOOKOOABJD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EEOOKOOABJD*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EEOOKOOABJD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EEOOKOOABJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEOOKOOABJD*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EEOOKOOABJD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
