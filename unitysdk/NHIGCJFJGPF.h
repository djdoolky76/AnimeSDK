#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGHOBPBFFOB;
class NHIGCJFJGPF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHIGCJFJGPF_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1EAF0A70)
#define NHIGCJFJGPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAF0F10)
#define NHIGCJFJGPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAF12D0)
#define NHIGCJFJGPF_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1EAF0A80)
#define NHIGCJFJGPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAF09C0)
#define NHIGCJFJGPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAF0940)
#define NHIGCJFJGPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAF0930)
#define NHIGCJFJGPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAF0C10)
#define NHIGCJFJGPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAF0A90)
#define NHIGCJFJGPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAF0A60)
#define NHIGCJFJGPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAF0D90)
#define NHIGCJFJGPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAF08F0)
#define NHIGCJFJGPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAF10D0)
#define NHIGCJFJGPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAF0FE0)
#define NHIGCJFJGPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAF0A50)
#define NHIGCJFJGPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAF0920)
#define NHIGCJFJGPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAF0DD0)
#define NHIGCJFJGPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAF0E30)

inline static constexpr unsigned int NHIGCJFJGPF_TypeDefinitionIndex = 35123;

	class NHIGCJFJGPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::NHIGCJFJGPF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHIGCJFJGPF*>**)UnitySDK::FromName("", "NHIGCJFJGPF")->GetStaticField(0x64BB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAHAEFHMLHD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHIGCJFJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHIGCJFJGPF*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHIGCJFJGPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHIGCJFJGPF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHIGCJFJGPF*>*(*)())((::PBYTE)hIl2Cpp + NHIGCJFJGPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHIGCJFJGPF* Clone()
		{
			return ((::NHIGCJFJGPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHIGCJFJGPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHIGCJFJGPF*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHIGCJFJGPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHIGCJFJGPF*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHIGCJFJGPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
