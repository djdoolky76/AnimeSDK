#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHEGNOPNICH;
class GCPGBPNGOFF;
class KHNBFDNKLHE;
class PKPICFPDHEO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCPGBPNGOFF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4432E0)
#define GCPGBPNGOFF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E443730)
#define GCPGBPNGOFF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E442AF0)
#define GCPGBPNGOFF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E442A20)
#define GCPGBPNGOFF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E442A10)
#define GCPGBPNGOFF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E442E00)
#define GCPGBPNGOFF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E442BA0)
#define GCPGBPNGOFF_FAAJLIEJCCO_OFFSET UNITYSDK_OFFSET(0x1E442B50)
#define GCPGBPNGOFF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4430D0)
#define GCPGBPNGOFF_IPFDMFDOKHJ_OFFSET UNITYSDK_OFFSET(0x1E442B70)
#define GCPGBPNGOFF_JIFPIGBJFEH_OFFSET UNITYSDK_OFFSET(0x1E442B80)
#define GCPGBPNGOFF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4429A0)
#define GCPGBPNGOFF_MDGINAIKHBE_OFFSET UNITYSDK_OFFSET(0x1E442B40)
#define GCPGBPNGOFF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4434D0)
#define GCPGBPNGOFF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4433A0)
#define GCPGBPNGOFF_MIILIPJBOKO_OFFSET UNITYSDK_OFFSET(0x1E442B90)
#define GCPGBPNGOFF_NDGJGMEFMLH_OFFSET UNITYSDK_OFFSET(0x1E442B60)
#define GCPGBPNGOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E442A00)
#define GCPGBPNGOFF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E443140)
#define GCPGBPNGOFF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4431A0)

	class GCPGBPNGOFF : public ::System::Object
	{
	public:
		::PKPICFPDHEO* MNJNMPKLFAI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::KHNBFDNKLHE* CHFNJJAMCCO; // 0x20
		::FHEGNOPNICH* ICCCGPOGDIO; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GCPGBPNGOFF")->GetStaticField(0xFBE0);
		}

		// static const ::System::Object IPBKHFKCFJB; // 0x0
		// static const ::System::Object CJDOLCNNPKL; // 0x0
		// static const ::System::Object KBMGGGHELJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCPGBPNGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCPGBPNGOFF*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCPGBPNGOFF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GCPGBPNGOFF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCPGBPNGOFF* Clone()
		{
			return ((::GCPGBPNGOFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_CLONE_OFFSET))(this);
		}

		::FHEGNOPNICH* MDGINAIKHBE()
		{
			return ((::FHEGNOPNICH*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_MDGINAIKHBE_OFFSET))(this);
		}

		::System::Void FAAJLIEJCCO(::FHEGNOPNICH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHEGNOPNICH*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_FAAJLIEJCCO_OFFSET))(this, a1);
		}

		::KHNBFDNKLHE* NDGJGMEFMLH()
		{
			return ((::KHNBFDNKLHE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_NDGJGMEFMLH_OFFSET))(this);
		}

		::System::Void IPFDMFDOKHJ(::KHNBFDNKLHE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHNBFDNKLHE*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_IPFDMFDOKHJ_OFFSET))(this, a1);
		}

		::PKPICFPDHEO* JIFPIGBJFEH()
		{
			return ((::PKPICFPDHEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_JIFPIGBJFEH_OFFSET))(this);
		}

		::System::Void MIILIPJBOKO(::PKPICFPDHEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKPICFPDHEO*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_MIILIPJBOKO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCPGBPNGOFF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCPGBPNGOFF*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCPGBPNGOFF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCPGBPNGOFF*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCPGBPNGOFF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
