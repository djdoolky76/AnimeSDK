#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KEMPKDDHEFN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KEMPKDDHEFN_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E7E3460)
#define KEMPKDDHEFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7E37C0)
#define KEMPKDDHEFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7E39E0)
#define KEMPKDDHEFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7E3410)
#define KEMPKDDHEFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7E33E0)
#define KEMPKDDHEFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7E33D0)
#define KEMPKDDHEFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7E3540)
#define KEMPKDDHEFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7E3470)
#define KEMPKDDHEFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7E36B0)
#define KEMPKDDHEFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7E3390)
#define KEMPKDDHEFN_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E7E3450)
#define KEMPKDDHEFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7E3880)
#define KEMPKDDHEFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7E3850)
#define KEMPKDDHEFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7E33C0)
#define KEMPKDDHEFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7E36E0)
#define KEMPKDDHEFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7E3740)

inline static constexpr unsigned int KEMPKDDHEFN_TypeDefinitionIndex = 33382;

	class KEMPKDDHEFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKMEMBIPHAN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KEMPKDDHEFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KEMPKDDHEFN*>**)UnitySDK::FromName("", "KEMPKDDHEFN")->GetStaticField(0x11DE0);
		}

		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KEMPKDDHEFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMPKDDHEFN*))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KEMPKDDHEFN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KEMPKDDHEFN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KEMPKDDHEFN*>*(*)())((::PBYTE)hIl2Cpp + KEMPKDDHEFN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KEMPKDDHEFN* Clone()
		{
			return ((::KEMPKDDHEFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KEMPKDDHEFN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KEMPKDDHEFN*))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KEMPKDDHEFN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEMPKDDHEFN*))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KEMPKDDHEFN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
