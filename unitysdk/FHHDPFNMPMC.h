#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHHDPFNMPMC;
class GEGKPEHKGCB;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FHHDPFNMPMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F674B90)
#define FHHDPFNMPMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F674FB0)
#define FHHDPFNMPMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1F674370)
#define FHHDPFNMPMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F674270)
#define FHHDPFNMPMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1F674260)
#define FHHDPFNMPMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F674660)
#define FHHDPFNMPMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F674420)
#define FHHDPFNMPMC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F674410)
#define FHHDPFNMPMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F674930)
#define FHHDPFNMPMC_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1F6743B0)
#define FHHDPFNMPMC_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1F6743C0)
#define FHHDPFNMPMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F674220)
#define FHHDPFNMPMC_KNAPCHCBNKH_OFFSET UNITYSDK_OFFSET(0x1F6743F0)
#define FHHDPFNMPMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F674E40)
#define FHHDPFNMPMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F674CD0)
#define FHHDPFNMPMC_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1F6743D0)
#define FHHDPFNMPMC_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1F6743A0)
#define FHHDPFNMPMC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F674400)
#define FHHDPFNMPMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F674250)
#define FHHDPFNMPMC_PCMILGJDBHF_OFFSET UNITYSDK_OFFSET(0x1F6743E0)
#define FHHDPFNMPMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6749A0)
#define FHHDPFNMPMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F674A00)

inline static constexpr unsigned int FHHDPFNMPMC_TypeDefinitionIndex = 27333;

	class FHHDPFNMPMC : public ::System::Object
	{
	public:
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::GEGKPEHKGCB* DJHECKEIEBP; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::FHHDPFNMPMC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FHHDPFNMPMC*>**)UnitySDK::FromName("", "FHHDPFNMPMC")->GetStaticField(0x5ECF0);
		}

		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		// static const ::System::Object ACACECPPJBJ; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FHHDPFNMPMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHDPFNMPMC*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHDPFNMPMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FHHDPFNMPMC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FHHDPFNMPMC*>*(*)())((::PBYTE)hIl2Cpp + FHHDPFNMPMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FHHDPFNMPMC* Clone()
		{
			return ((::FHHDPFNMPMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_CLONE_OFFSET))(this);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::GEGKPEHKGCB* PCMILGJDBHF()
		{
			return ((::GEGKPEHKGCB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_PCMILGJDBHF_OFFSET))(this);
		}

		::System::Void KNAPCHCBNKH(::GEGKPEHKGCB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEGKPEHKGCB*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_KNAPCHCBNKH_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FHHDPFNMPMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FHHDPFNMPMC*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FHHDPFNMPMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHHDPFNMPMC*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FHHDPFNMPMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
