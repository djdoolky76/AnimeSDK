#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFMPPKAEHE.h"
#include "unitysdk/System/Object.h"
class KHNBFDNKLHE;
class MCJANHINPDO;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MCJANHINPDO_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1E9F9750)
#define MCJANHINPDO_BMDGCNADLKC_OFFSET UNITYSDK_OFFSET(0x1E9F97A0)
#define MCJANHINPDO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9F9D60)
#define MCJANHINPDO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9FA170)
#define MCJANHINPDO_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1E9F9760)
#define MCJANHINPDO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9F9680)
#define MCJANHINPDO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9F95E0)
#define MCJANHINPDO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F95D0)
#define MCJANHINPDO_EEBLEFFIHBP_OFFSET UNITYSDK_OFFSET(0x1E9F9790)
#define MCJANHINPDO_EJDIMEGMAKG_OFFSET UNITYSDK_OFFSET(0x1E9F9730)
#define MCJANHINPDO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9F98F0)
#define MCJANHINPDO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9F97D0)
#define MCJANHINPDO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9F9AA0)
#define MCJANHINPDO_GOIACKBBPOD_OFFSET UNITYSDK_OFFSET(0x1E9F9740)
#define MCJANHINPDO_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E9F9780)
#define MCJANHINPDO_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E9F97B0)
#define MCJANHINPDO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9F9590)
#define MCJANHINPDO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9FA070)
#define MCJANHINPDO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9F9F90)
#define MCJANHINPDO_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E9F97C0)
#define MCJANHINPDO_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E9F9770)
#define MCJANHINPDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9F95C0)
#define MCJANHINPDO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9F9AF0)
#define MCJANHINPDO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9F9B50)

inline static constexpr unsigned int MCJANHINPDO_TypeDefinitionIndex = 32418;

	class MCJANHINPDO : public ::System::Object
	{
	public:
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::System::UInt32 MGPCOLIAECE; // 0x28
		::System::UInt32 PLKGEBACJMA; // 0x2C
		::GMFMPPKAEHE EMHBAOIIKLC; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MCJANHINPDO")->GetStaticField(0x47FE0);
		}

		// static const ::System::Object NINHOJDICNH; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object OEAKKPCOOJF; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MCJANHINPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCJANHINPDO*))((::PBYTE)hIl2Cpp + MCJANHINPDO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCJANHINPDO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MCJANHINPDO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MCJANHINPDO* Clone()
		{
			return ((::MCJANHINPDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_CLONE_OFFSET))(this);
		}

		::GMFMPPKAEHE EJDIMEGMAKG()
		{
			return ((::GMFMPPKAEHE(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_EJDIMEGMAKG_OFFSET))(this);
		}

		::System::Void GOIACKBBPOD(::GMFMPPKAEHE a1)
		{
			return ((::System::Void(*)(::PVOID, ::GMFMPPKAEHE))((::PBYTE)hIl2Cpp + MCJANHINPDO_GOIACKBBPOD_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCJANHINPDO_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + MCJANHINPDO_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::System::UInt32 EEBLEFFIHBP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_EEBLEFFIHBP_OFFSET))(this);
		}

		::System::Void BMDGCNADLKC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MCJANHINPDO_BMDGCNADLKC_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + MCJANHINPDO_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MCJANHINPDO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MCJANHINPDO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MCJANHINPDO*))((::PBYTE)hIl2Cpp + MCJANHINPDO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MCJANHINPDO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCJANHINPDO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MCJANHINPDO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MCJANHINPDO*))((::PBYTE)hIl2Cpp + MCJANHINPDO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MCJANHINPDO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
