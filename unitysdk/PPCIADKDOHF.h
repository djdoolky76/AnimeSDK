#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PPCIADKDOHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPCIADKDOHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FCCB0D0)
#define PPCIADKDOHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FCCB2F0)
#define PPCIADKDOHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FCCAD20)
#define PPCIADKDOHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FCCACF0)
#define PPCIADKDOHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FCCACE0)
#define PPCIADKDOHF_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1FCCAD60)
#define PPCIADKDOHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FCCAE50)
#define PPCIADKDOHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FCCAD80)
#define PPCIADKDOHF_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1FCCAD70)
#define PPCIADKDOHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FCCAFC0)
#define PPCIADKDOHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FCCACA0)
#define PPCIADKDOHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FCCB190)
#define PPCIADKDOHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FCCB160)
#define PPCIADKDOHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FCCACD0)
#define PPCIADKDOHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FCCAFF0)
#define PPCIADKDOHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FCCB050)

inline static constexpr unsigned int PPCIADKDOHF_TypeDefinitionIndex = 33097;

	class PPCIADKDOHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PPCIADKDOHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PPCIADKDOHF*>**)UnitySDK::FromName("", "PPCIADKDOHF")->GetStaticField(0x51350);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPCIADKDOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPCIADKDOHF*))((::PBYTE)hIl2Cpp + PPCIADKDOHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPCIADKDOHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PPCIADKDOHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PPCIADKDOHF*>*(*)())((::PBYTE)hIl2Cpp + PPCIADKDOHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPCIADKDOHF* Clone()
		{
			return ((::PPCIADKDOHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPCIADKDOHF_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPCIADKDOHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPCIADKDOHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPCIADKDOHF*))((::PBYTE)hIl2Cpp + PPCIADKDOHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPCIADKDOHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPCIADKDOHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPCIADKDOHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPCIADKDOHF*))((::PBYTE)hIl2Cpp + PPCIADKDOHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPCIADKDOHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
