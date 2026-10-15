#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGEEIJCMHHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGEEIJCMHHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E17DF20)
#define DGEEIJCMHHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E17E0E0)
#define DGEEIJCMHHO_CGHAPGBFDGO_OFFSET UNITYSDK_OFFSET(0x1E17DB60)
#define DGEEIJCMHHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17DB00)
#define DGEEIJCMHHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17DAD0)
#define DGEEIJCMHHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17DAC0)
#define DGEEIJCMHHO_DENCEOPOIDI_OFFSET UNITYSDK_OFFSET(0x1E17DB50)
#define DGEEIJCMHHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E17DC50)
#define DGEEIJCMHHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17DB70)
#define DGEEIJCMHHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E17DDD0)
#define DGEEIJCMHHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17DA80)
#define DGEEIJCMHHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E17DF80)
#define DGEEIJCMHHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E17DF50)
#define DGEEIJCMHHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17DAB0)
#define DGEEIJCMHHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E17DE00)
#define DGEEIJCMHHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E17DE60)

inline static constexpr unsigned int DGEEIJCMHHO_TypeDefinitionIndex = 29031;

	class DGEEIJCMHHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean AKKFIMGPOAA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DGEEIJCMHHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGEEIJCMHHO*>**)UnitySDK::FromName("", "DGEEIJCMHHO")->GetStaticField(0x2F1C0);
		}

		// static const ::System::Object KEKEBGBCPPH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGEEIJCMHHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGEEIJCMHHO*))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGEEIJCMHHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGEEIJCMHHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGEEIJCMHHO*>*(*)())((::PBYTE)hIl2Cpp + DGEEIJCMHHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGEEIJCMHHO* Clone()
		{
			return ((::DGEEIJCMHHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_CLONE_OFFSET))(this);
		}

		::System::Boolean DENCEOPOIDI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_DENCEOPOIDI_OFFSET))(this);
		}

		::System::Void CGHAPGBFDGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_CGHAPGBFDGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGEEIJCMHHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGEEIJCMHHO*))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGEEIJCMHHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGEEIJCMHHO*))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGEEIJCMHHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
