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

#define KEMPKDDHEFN_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1E810A10)
#define KEMPKDDHEFN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E810D70)
#define KEMPKDDHEFN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E810F90)
#define KEMPKDDHEFN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8109C0)
#define KEMPKDDHEFN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E810990)
#define KEMPKDDHEFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E810980)
#define KEMPKDDHEFN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E810AF0)
#define KEMPKDDHEFN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E810A20)
#define KEMPKDDHEFN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E810C60)
#define KEMPKDDHEFN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E810940)
#define KEMPKDDHEFN_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1E810A00)
#define KEMPKDDHEFN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E810E30)
#define KEMPKDDHEFN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E810E00)
#define KEMPKDDHEFN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E810970)
#define KEMPKDDHEFN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E810C90)
#define KEMPKDDHEFN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E810CF0)

inline static constexpr unsigned int KEMPKDDHEFN_TypeDefinitionIndex = 33382;

	class KEMPKDDHEFN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HKMEMBIPHAN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KEMPKDDHEFN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KEMPKDDHEFN*>**)UnitySDK::FromName("", "KEMPKDDHEFN")->GetStaticField(0x12DC0);
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
