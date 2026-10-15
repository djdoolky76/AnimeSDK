#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGLBEGNMMNJ;
class POBLGKIGINE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGLBEGNMMNJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4518F0)
#define GGLBEGNMMNJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E451C70)
#define GGLBEGNMMNJ_CIOGAGDPMJN_OFFSET UNITYSDK_OFFSET(0x1E451390)
#define GGLBEGNMMNJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4512A0)
#define GGLBEGNMMNJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E451210)
#define GGLBEGNMMNJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E451200)
#define GGLBEGNMMNJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E451540)
#define GGLBEGNMMNJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4513A0)
#define GGLBEGNMMNJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E451370)
#define GGLBEGNMMNJ_FENEPOCNAPP_OFFSET UNITYSDK_OFFSET(0x1E451380)
#define GGLBEGNMMNJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4516E0)
#define GGLBEGNMMNJ_HIKMOLEFDEJ_OFFSET UNITYSDK_OFFSET(0x1E451350)
#define GGLBEGNMMNJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4511C0)
#define GGLBEGNMMNJ_LEOBJFOPKOG_OFFSET UNITYSDK_OFFSET(0x1E451340)
#define GGLBEGNMMNJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E451A80)
#define GGLBEGNMMNJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4519C0)
#define GGLBEGNMMNJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E451360)
#define GGLBEGNMMNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4511F0)
#define GGLBEGNMMNJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E451720)
#define GGLBEGNMMNJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E451780)

inline static constexpr unsigned int GGLBEGNMMNJ_TypeDefinitionIndex = 34225;

	class GGLBEGNMMNJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::POBLGKIGINE* ODAIMKHGFAB; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::Boolean CFKCFMPACNP; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GGLBEGNMMNJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGLBEGNMMNJ*>**)UnitySDK::FromName("", "GGLBEGNMMNJ")->GetStaticField(0x15AA0);
		}

		// static const ::System::Object ENBMHCGPODL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LNNFMNLEBGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGLBEGNMMNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGLBEGNMMNJ*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGLBEGNMMNJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGLBEGNMMNJ*>*(*)())((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGLBEGNMMNJ* Clone()
		{
			return ((::GGLBEGNMMNJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_CLONE_OFFSET))(this);
		}

		::System::Boolean LEOBJFOPKOG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_LEOBJFOPKOG_OFFSET))(this);
		}

		::System::Void HIKMOLEFDEJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_HIKMOLEFDEJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::POBLGKIGINE* FENEPOCNAPP()
		{
			return ((::POBLGKIGINE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_FENEPOCNAPP_OFFSET))(this);
		}

		::System::Void CIOGAGDPMJN(::POBLGKIGINE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POBLGKIGINE*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_CIOGAGDPMJN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGLBEGNMMNJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGLBEGNMMNJ*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGLBEGNMMNJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGLBEGNMMNJ*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGLBEGNMMNJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
