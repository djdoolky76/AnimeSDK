#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONMMBJHCHIN.h"
#include "unitysdk/System/Object.h"
class AIOOFPINJMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AIOOFPINJMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E255650)
#define AIOOFPINJMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2558B0)
#define AIOOFPINJMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E255280)
#define AIOOFPINJMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E255250)
#define AIOOFPINJMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E255240)
#define AIOOFPINJMD_EOGAKLEODAP_OFFSET UNITYSDK_OFFSET(0x1E2552D0)
#define AIOOFPINJMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2553B0)
#define AIOOFPINJMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2552E0)
#define AIOOFPINJMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E255520)
#define AIOOFPINJMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E255200)
#define AIOOFPINJMD_LNAJIHJMOII_OFFSET UNITYSDK_OFFSET(0x1E2552C0)
#define AIOOFPINJMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E255750)
#define AIOOFPINJMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E255720)
#define AIOOFPINJMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E255230)
#define AIOOFPINJMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E255550)
#define AIOOFPINJMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2555B0)

inline static constexpr unsigned int AIOOFPINJMD_TypeDefinitionIndex = 32076;

	class AIOOFPINJMD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::ONMMBJHCHIN INJGECDAJIA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AIOOFPINJMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AIOOFPINJMD*>**)UnitySDK::FromName("", "AIOOFPINJMD")->GetStaticField(0x3BF10);
		}

		// static const ::System::Object BCGONOOIJBD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AIOOFPINJMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIOOFPINJMD*))((::PBYTE)hIl2Cpp + AIOOFPINJMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AIOOFPINJMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AIOOFPINJMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AIOOFPINJMD*>*(*)())((::PBYTE)hIl2Cpp + AIOOFPINJMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AIOOFPINJMD* Clone()
		{
			return ((::AIOOFPINJMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_CLONE_OFFSET))(this);
		}

		::ONMMBJHCHIN LNAJIHJMOII()
		{
			return ((::ONMMBJHCHIN(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_LNAJIHJMOII_OFFSET))(this);
		}

		::System::Void EOGAKLEODAP(::ONMMBJHCHIN a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONMMBJHCHIN))((::PBYTE)hIl2Cpp + AIOOFPINJMD_EOGAKLEODAP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIOOFPINJMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AIOOFPINJMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AIOOFPINJMD*))((::PBYTE)hIl2Cpp + AIOOFPINJMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AIOOFPINJMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AIOOFPINJMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AIOOFPINJMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AIOOFPINJMD*))((::PBYTE)hIl2Cpp + AIOOFPINJMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AIOOFPINJMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
