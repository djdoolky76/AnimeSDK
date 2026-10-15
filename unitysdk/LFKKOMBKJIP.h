#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFKKOMBKJIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFKKOMBKJIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9428A0)
#define LFKKOMBKJIP_CAOAFPAENFC_OFFSET UNITYSDK_OFFSET(0x1E9422D0)
#define LFKKOMBKJIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E942B90)
#define LFKKOMBKJIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E942240)
#define LFKKOMBKJIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9421F0)
#define LFKKOMBKJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9421D0)
#define LFKKOMBKJIP_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E942330)
#define LFKKOMBKJIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9424D0)
#define LFKKOMBKJIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E942380)
#define LFKKOMBKJIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E942600)
#define LFKKOMBKJIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E942160)
#define LFKKOMBKJIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9429A0)
#define LFKKOMBKJIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E942940)
#define LFKKOMBKJIP_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E942320)
#define LFKKOMBKJIP_NDMBDGKAJEK_OFFSET UNITYSDK_OFFSET(0x1E9422C0)
#define LFKKOMBKJIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9421C0)
#define LFKKOMBKJIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E942740)
#define LFKKOMBKJIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9427A0)

inline static constexpr unsigned int LFKKOMBKJIP_TypeDefinitionIndex = 25317;

	class LFKKOMBKJIP : public ::System::Object
	{
	public:
		::System::String* CLAHCINJGNA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::String* DFKHBNCHKBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LFKKOMBKJIP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LFKKOMBKJIP*>**)UnitySDK::FromName("", "LFKKOMBKJIP")->GetStaticField(0x3B920);
		}

		// static const ::System::Object GBCAJJPCIIN; // 0x0
		// static const ::System::Object JLAAHBJNEML; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFKKOMBKJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKKOMBKJIP*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFKKOMBKJIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LFKKOMBKJIP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LFKKOMBKJIP*>*(*)())((::PBYTE)hIl2Cpp + LFKKOMBKJIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFKKOMBKJIP* Clone()
		{
			return ((::LFKKOMBKJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_CLONE_OFFSET))(this);
		}

		::System::String* NDMBDGKAJEK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_NDMBDGKAJEK_OFFSET))(this);
		}

		::System::Void CAOAFPAENFC(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_CAOAFPAENFC_OFFSET))(this, a1);
		}

		::System::String* MNLDMBGAJIF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFKKOMBKJIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFKKOMBKJIP*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFKKOMBKJIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFKKOMBKJIP*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFKKOMBKJIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
