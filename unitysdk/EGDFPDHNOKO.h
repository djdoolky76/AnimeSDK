#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGDFPDHNOKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EGDFPDHNOKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E292CE0)
#define EGDFPDHNOKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E292FB0)
#define EGDFPDHNOKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E292930)
#define EGDFPDHNOKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E292900)
#define EGDFPDHNOKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2928F0)
#define EGDFPDHNOKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E292AA0)
#define EGDFPDHNOKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2929C0)
#define EGDFPDHNOKO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E292990)
#define EGDFPDHNOKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E292B70)
#define EGDFPDHNOKO_JBICHJMDFMP_OFFSET UNITYSDK_OFFSET(0x1E2929B0)
#define EGDFPDHNOKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2928B0)
#define EGDFPDHNOKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E292E30)
#define EGDFPDHNOKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E292DF0)
#define EGDFPDHNOKO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E292980)
#define EGDFPDHNOKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2928E0)
#define EGDFPDHNOKO_PMCHAPMFHMF_OFFSET UNITYSDK_OFFSET(0x1E2929A0)
#define EGDFPDHNOKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E292BA0)
#define EGDFPDHNOKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E292C00)

inline static constexpr unsigned int EGDFPDHNOKO_TypeDefinitionIndex = 30257;

	class EGDFPDHNOKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 OMHPIDILPBL; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::EGDFPDHNOKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EGDFPDHNOKO*>**)UnitySDK::FromName("", "EGDFPDHNOKO")->GetStaticField(0x45BB0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object IDKBGOGIBDL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EGDFPDHNOKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGDFPDHNOKO*))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGDFPDHNOKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EGDFPDHNOKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EGDFPDHNOKO*>*(*)())((::PBYTE)hIl2Cpp + EGDFPDHNOKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EGDFPDHNOKO* Clone()
		{
			return ((::EGDFPDHNOKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 PMCHAPMFHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_PMCHAPMFHMF_OFFSET))(this);
		}

		::System::Void JBICHJMDFMP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_JBICHJMDFMP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EGDFPDHNOKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EGDFPDHNOKO*))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EGDFPDHNOKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EGDFPDHNOKO*))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EGDFPDHNOKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
