#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAMIHIIOBNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAMIHIIOBNM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7BC050)
#define BAMIHIIOBNM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC270)
#define BAMIHIIOBNM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7BBCA0)
#define BAMIHIIOBNM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7BBC70)
#define BAMIHIIOBNM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BBC60)
#define BAMIHIIOBNM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7BBDD0)
#define BAMIHIIOBNM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7BBD00)
#define BAMIHIIOBNM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7BBF40)
#define BAMIHIIOBNM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7BBC20)
#define BAMIHIIOBNM_LELBEPIMPMC_OFFSET UNITYSDK_OFFSET(0x1E7BBCE0)
#define BAMIHIIOBNM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7BC110)
#define BAMIHIIOBNM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7BC0E0)
#define BAMIHIIOBNM_OLALIDNOEOK_OFFSET UNITYSDK_OFFSET(0x1E7BBCF0)
#define BAMIHIIOBNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7BBC50)
#define BAMIHIIOBNM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7BBF70)
#define BAMIHIIOBNM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7BBFD0)

inline static constexpr unsigned int BAMIHIIOBNM_TypeDefinitionIndex = 34877;

	class BAMIHIIOBNM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EGLDDJMEOJC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BAMIHIIOBNM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BAMIHIIOBNM*>**)UnitySDK::FromName("", "BAMIHIIOBNM")->GetStaticField(0x46390);
		}

		// static const ::System::Object KPMNBDKJBCI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAMIHIIOBNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAMIHIIOBNM*))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAMIHIIOBNM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BAMIHIIOBNM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BAMIHIIOBNM*>*(*)())((::PBYTE)hIl2Cpp + BAMIHIIOBNM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAMIHIIOBNM* Clone()
		{
			return ((::BAMIHIIOBNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_CLONE_OFFSET))(this);
		}

		::System::UInt32 LELBEPIMPMC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_LELBEPIMPMC_OFFSET))(this);
		}

		::System::Void OLALIDNOEOK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_OLALIDNOEOK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAMIHIIOBNM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAMIHIIOBNM*))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAMIHIIOBNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAMIHIIOBNM*))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAMIHIIOBNM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
