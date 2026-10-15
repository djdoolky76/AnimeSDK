#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PCFJAHNECFM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PCFJAHNECFM_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DEDA730)
#define PCFJAHNECFM_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DEDA740)
#define PCFJAHNECFM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEDAAA0)
#define PCFJAHNECFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEDACC0)
#define PCFJAHNECFM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEDA6F0)
#define PCFJAHNECFM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEDA6C0)
#define PCFJAHNECFM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDA6B0)
#define PCFJAHNECFM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEDA820)
#define PCFJAHNECFM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEDA750)
#define PCFJAHNECFM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEDA990)
#define PCFJAHNECFM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEDA670)
#define PCFJAHNECFM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEDAB60)
#define PCFJAHNECFM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEDAB30)
#define PCFJAHNECFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEDA6A0)
#define PCFJAHNECFM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEDA9C0)
#define PCFJAHNECFM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEDAA20)

inline static constexpr unsigned int PCFJAHNECFM_TypeDefinitionIndex = 32553;

	class PCFJAHNECFM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PCFJAHNECFM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PCFJAHNECFM*>**)UnitySDK::FromName("", "PCFJAHNECFM")->GetStaticField(0x2E9F0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PCFJAHNECFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCFJAHNECFM*))((::PBYTE)hIl2Cpp + PCFJAHNECFM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PCFJAHNECFM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PCFJAHNECFM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PCFJAHNECFM*>*(*)())((::PBYTE)hIl2Cpp + PCFJAHNECFM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PCFJAHNECFM* Clone()
		{
			return ((::PCFJAHNECFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PCFJAHNECFM_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PCFJAHNECFM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PCFJAHNECFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PCFJAHNECFM*))((::PBYTE)hIl2Cpp + PCFJAHNECFM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PCFJAHNECFM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PCFJAHNECFM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PCFJAHNECFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PCFJAHNECFM*))((::PBYTE)hIl2Cpp + PCFJAHNECFM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PCFJAHNECFM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
