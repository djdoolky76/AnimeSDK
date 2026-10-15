#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGEHGBKOBEF;
class FHEGNOPNICH;
class KHNBFDNKLHE;
class KNBOCPOOAEM;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KNBOCPOOAEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E872510)
#define KNBOCPOOAEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E872980)
#define KNBOCPOOAEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E871E10)
#define KNBOCPOOAEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E871D20)
#define KNBOCPOOAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E871D10)
#define KNBOCPOOAEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E871F10)
#define KNBOCPOOAEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E871EE0)
#define KNBOCPOOAEM_FAAJLIEJCCO_OFFSET UNITYSDK_OFFSET(0x1E871E70)
#define KNBOCPOOAEM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E871EB0)
#define KNBOCPOOAEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8721F0)
#define KNBOCPOOAEM_HGAGGIFCLAA_OFFSET UNITYSDK_OFFSET(0x1E871ED0)
#define KNBOCPOOAEM_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E871E50)
#define KNBOCPOOAEM_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E871E80)
#define KNBOCPOOAEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E871CD0)
#define KNBOCPOOAEM_JNHIJCFBJLE_OFFSET UNITYSDK_OFFSET(0x1E871EC0)
#define KNBOCPOOAEM_MDGINAIKHBE_OFFSET UNITYSDK_OFFSET(0x1E871E60)
#define KNBOCPOOAEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E872800)
#define KNBOCPOOAEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E872680)
#define KNBOCPOOAEM_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E871E90)
#define KNBOCPOOAEM_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E871E40)
#define KNBOCPOOAEM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E871EA0)
#define KNBOCPOOAEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E871D00)
#define KNBOCPOOAEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8722C0)
#define KNBOCPOOAEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E872320)

inline static constexpr unsigned int KNBOCPOOAEM_TypeDefinitionIndex = 32706;

	class KNBOCPOOAEM : public ::System::Object
	{
	public:
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x10
		::AGEHGBKOBEF* GIGAAAKGAHL; // 0x18
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::FHEGNOPNICH* ICCCGPOGDIO; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		static ::Google::Protobuf::MessageParser_1<::KNBOCPOOAEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KNBOCPOOAEM*>**)UnitySDK::FromName("", "KNBOCPOOAEM")->GetStaticField(0x1F8E0);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object IPBKHFKCFJB; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ODMJKLKBCOO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KNBOCPOOAEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNBOCPOOAEM*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KNBOCPOOAEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KNBOCPOOAEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KNBOCPOOAEM*>*(*)())((::PBYTE)hIl2Cpp + KNBOCPOOAEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KNBOCPOOAEM* Clone()
		{
			return ((::KNBOCPOOAEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::FHEGNOPNICH* MDGINAIKHBE()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_MDGINAIKHBE_OFFSET))(this);
		}

		::System::Void FAAJLIEJCCO(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_FAAJLIEJCCO_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::AGEHGBKOBEF* JNHIJCFBJLE()
		{
			return ((::AGEHGBKOBEF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_JNHIJCFBJLE_OFFSET))(this);
		}

		::System::Void HGAGGIFCLAA(::AGEHGBKOBEF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGEHGBKOBEF*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_HGAGGIFCLAA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KNBOCPOOAEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KNBOCPOOAEM*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KNBOCPOOAEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNBOCPOOAEM*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KNBOCPOOAEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
