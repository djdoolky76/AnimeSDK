#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPJCKMPBAFC;
class ELJDDNGDGCH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELJDDNGDGCH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A5930)
#define ELJDDNGDGCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5BC0)
#define ELJDDNGDGCH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A5300)
#define ELJDDNGDGCH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A5280)
#define ELJDDNGDGCH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5270)
#define ELJDDNGDGCH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A5520)
#define ELJDDNGDGCH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A53B0)
#define ELJDDNGDGCH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A57F0)
#define ELJDDNGDGCH_IFECPLFEPIE_OFFSET UNITYSDK_OFFSET(0x1E2A5390)
#define ELJDDNGDGCH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A5230)
#define ELJDDNGDGCH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A5A40)
#define ELJDDNGDGCH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A5990)
#define ELJDDNGDGCH_MNPKDNPEKDH_OFFSET UNITYSDK_OFFSET(0x1E2A53A0)
#define ELJDDNGDGCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A5260)
#define ELJDDNGDGCH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A5840)
#define ELJDDNGDGCH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A58A0)

inline static constexpr unsigned int ELJDDNGDGCH_TypeDefinitionIndex = 30513;

	class ELJDDNGDGCH : public ::System::Object
	{
	public:
		::BPJCKMPBAFC* GMBIBLEDALJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELJDDNGDGCH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELJDDNGDGCH*>**)UnitySDK::FromName("", "ELJDDNGDGCH")->GetStaticField(0x51910);
		}

		// static const ::System::Object JJBDGCGPPFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELJDDNGDGCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJDDNGDGCH*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELJDDNGDGCH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELJDDNGDGCH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELJDDNGDGCH*>*(*)())((::PBYTE)hIl2Cpp + ELJDDNGDGCH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELJDDNGDGCH* Clone()
		{
			return ((::ELJDDNGDGCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_CLONE_OFFSET))(this);
		}

		::BPJCKMPBAFC* IFECPLFEPIE()
		{
			return ((::BPJCKMPBAFC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_IFECPLFEPIE_OFFSET))(this);
		}

		::System::Void MNPKDNPEKDH(::BPJCKMPBAFC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPJCKMPBAFC*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_MNPKDNPEKDH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELJDDNGDGCH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELJDDNGDGCH*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELJDDNGDGCH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELJDDNGDGCH*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELJDDNGDGCH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
