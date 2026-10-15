#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDOEDOEBFAJ;
class CPMOGOPHJOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPMOGOPHJOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E118170)
#define CPMOGOPHJOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E118460)
#define CPMOGOPHJOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E117C20)
#define CPMOGOPHJOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E117BB0)
#define CPMOGOPHJOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E117BA0)
#define CPMOGOPHJOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E117E60)
#define CPMOGOPHJOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E117CE0)
#define CPMOGOPHJOG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E117CD0)
#define CPMOGOPHJOG_GEEBMGMJBDO_OFFSET UNITYSDK_OFFSET(0x1E117CB0)
#define CPMOGOPHJOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E117FE0)
#define CPMOGOPHJOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E117B60)
#define CPMOGOPHJOG_KENFAFAEDBJ_OFFSET UNITYSDK_OFFSET(0x1E117CA0)
#define CPMOGOPHJOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1182C0)
#define CPMOGOPHJOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E118240)
#define CPMOGOPHJOG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E117CC0)
#define CPMOGOPHJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E117B90)
#define CPMOGOPHJOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E118030)
#define CPMOGOPHJOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E118090)

inline static constexpr unsigned int CPMOGOPHJOG_TypeDefinitionIndex = 27088;

	class CPMOGOPHJOG : public ::System::Object
	{
	public:
		::BDOEDOEBFAJ* OAIPCOJDDDN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::CPMOGOPHJOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPMOGOPHJOG*>**)UnitySDK::FromName("", "CPMOGOPHJOG")->GetStaticField(0x200C0);
		}

		// static const ::System::Object CFELFKIHNOI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPMOGOPHJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMOGOPHJOG*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPMOGOPHJOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPMOGOPHJOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPMOGOPHJOG*>*(*)())((::PBYTE)hIl2Cpp + CPMOGOPHJOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPMOGOPHJOG* Clone()
		{
			return ((::CPMOGOPHJOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_CLONE_OFFSET))(this);
		}

		::BDOEDOEBFAJ* KENFAFAEDBJ()
		{
			return ((::BDOEDOEBFAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_KENFAFAEDBJ_OFFSET))(this);
		}

		::System::Void GEEBMGMJBDO(::BDOEDOEBFAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDOEDOEBFAJ*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_GEEBMGMJBDO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPMOGOPHJOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPMOGOPHJOG*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPMOGOPHJOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPMOGOPHJOG*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPMOGOPHJOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
