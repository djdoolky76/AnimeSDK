#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJPOKDFLDBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJPOKDFLDBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47FE20)
#define GJPOKDFLDBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4800F0)
#define GJPOKDFLDBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47FA70)
#define GJPOKDFLDBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47FA40)
#define GJPOKDFLDBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47FA30)
#define GJPOKDFLDBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47FBE0)
#define GJPOKDFLDBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47FB00)
#define GJPOKDFLDBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47FCB0)
#define GJPOKDFLDBJ_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1E47FAF0)
#define GJPOKDFLDBJ_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1E47FAE0)
#define GJPOKDFLDBJ_JHFNDNHJLMD_OFFSET UNITYSDK_OFFSET(0x1E47FAD0)
#define GJPOKDFLDBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47F9F0)
#define GJPOKDFLDBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47FF70)
#define GJPOKDFLDBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47FF30)
#define GJPOKDFLDBJ_NIOMOGPMHIL_OFFSET UNITYSDK_OFFSET(0x1E47FAC0)
#define GJPOKDFLDBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47FA20)
#define GJPOKDFLDBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47FCE0)
#define GJPOKDFLDBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47FD40)

inline static constexpr unsigned int GJPOKDFLDBJ_TypeDefinitionIndex = 26287;

	class GJPOKDFLDBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GMPNCOBOFDM; // 0x18
		::System::UInt32 KBFPBBDEBBB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GJPOKDFLDBJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GJPOKDFLDBJ*>**)UnitySDK::FromName("", "GJPOKDFLDBJ")->GetStaticField(0x1A420);
		}

		// static const ::System::Object ONICGPGMJCP; // 0x0
		// static const ::System::Object GDFHGOOLLFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJPOKDFLDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJPOKDFLDBJ*))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GJPOKDFLDBJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GJPOKDFLDBJ*>*(*)())((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJPOKDFLDBJ* Clone()
		{
			return ((::GJPOKDFLDBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 NIOMOGPMHIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_NIOMOGPMHIL_OFFSET))(this);
		}

		::System::Void JHFNDNHJLMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_JHFNDNHJLMD_OFFSET))(this, a1);
		}

		::System::UInt32 JBIOGKPHKKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJPOKDFLDBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJPOKDFLDBJ*))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJPOKDFLDBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJPOKDFLDBJ*))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJPOKDFLDBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
