#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGNOPNICH;
class KHNBFDNKLHE;
class NNAMFPHNGBF;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNAMFPHNGBF_BEHODKAJAFD_OFFSET UNITYSDK_OFFSET(0x1EB7E730)
#define NNAMFPHNGBF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7EDC0)
#define NNAMFPHNGBF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F230)
#define NNAMFPHNGBF_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7E6B0)
#define NNAMFPHNGBF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7E5D0)
#define NNAMFPHNGBF_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E5C0)
#define NNAMFPHNGBF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7E8B0)
#define NNAMFPHNGBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7E780)
#define NNAMFPHNGBF_FAAJLIEJCCO_OFFSET UNITYSDK_OFFSET(0x1EB7E6F0)
#define NNAMFPHNGBF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB7E710)
#define NNAMFPHNGBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7EB00)
#define NNAMFPHNGBF_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1EB7E750)
#define NNAMFPHNGBF_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1EB7E760)
#define NNAMFPHNGBF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7E580)
#define NNAMFPHNGBF_MDGINAIKHBE_OFFSET UNITYSDK_OFFSET(0x1EB7E6E0)
#define NNAMFPHNGBF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7F0D0)
#define NNAMFPHNGBF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7EF80)
#define NNAMFPHNGBF_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1EB7E770)
#define NNAMFPHNGBF_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1EB7E740)
#define NNAMFPHNGBF_NLHPBHDBDCO_OFFSET UNITYSDK_OFFSET(0x1EB7E720)
#define NNAMFPHNGBF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB7E700)
#define NNAMFPHNGBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7E5B0)
#define NNAMFPHNGBF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7EB70)
#define NNAMFPHNGBF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7EBD0)

	class NNAMFPHNGBF : public ::System::Object
	{
	public:
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x10
		::FHEGNOPNICH* ICCCGPOGDIO; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		::System::UInt32 EMPJJFJONNC; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NNAMFPHNGBF")->GetStaticField(0x1F20);
		}

		// static const ::System::Object IPBKHFKCFJB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ANLDPPJMDBM; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNAMFPHNGBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAMFPHNGBF*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNAMFPHNGBF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NNAMFPHNGBF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNAMFPHNGBF* Clone()
		{
			return ((::NNAMFPHNGBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_CLONE_OFFSET))(this);
		}

		::FHEGNOPNICH* MDGINAIKHBE()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_MDGINAIKHBE_OFFSET))(this);
		}

		::System::Void FAAJLIEJCCO(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_FAAJLIEJCCO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NLHPBHDBDCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_NLHPBHDBDCO_OFFSET))(this);
		}

		::System::Void BEHODKAJAFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_BEHODKAJAFD_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNAMFPHNGBF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNAMFPHNGBF*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNAMFPHNGBF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNAMFPHNGBF*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNAMFPHNGBF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
