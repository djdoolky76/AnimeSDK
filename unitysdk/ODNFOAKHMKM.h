#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODNFOAKHMKM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ODNFOAKHMKM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDF4900)
#define ODNFOAKHMKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF49A0)
#define ODNFOAKHMKM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDF45F0)
#define ODNFOAKHMKM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDF45C0)
#define ODNFOAKHMKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF45B0)
#define ODNFOAKHMKM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDF4700)
#define ODNFOAKHMKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDF4630)
#define ODNFOAKHMKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDF4860)
#define ODNFOAKHMKM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDF4570)
#define ODNFOAKHMKM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDF4950)
#define ODNFOAKHMKM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDF4920)
#define ODNFOAKHMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDF45A0)
#define ODNFOAKHMKM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDF4890)
#define ODNFOAKHMKM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDF48F0)

inline static constexpr unsigned int ODNFOAKHMKM_TypeDefinitionIndex = 34637;

	class ODNFOAKHMKM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ODNFOAKHMKM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ODNFOAKHMKM*>**)UnitySDK::FromName("", "ODNFOAKHMKM")->GetStaticField(0x12CA0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ODNFOAKHMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODNFOAKHMKM*))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ODNFOAKHMKM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ODNFOAKHMKM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ODNFOAKHMKM*>*(*)())((::PBYTE)hIl2Cpp + ODNFOAKHMKM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ODNFOAKHMKM* Clone()
		{
			return ((::ODNFOAKHMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ODNFOAKHMKM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ODNFOAKHMKM*))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ODNFOAKHMKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODNFOAKHMKM*))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ODNFOAKHMKM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
