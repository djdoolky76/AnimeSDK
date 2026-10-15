#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MAOINJAJOEC;
class NCFKHDIKCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MAOINJAJOEC_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1E9DE110)
#define MAOINJAJOEC_BJDIHPEDCKF_OFFSET UNITYSDK_OFFSET(0x1E9DE070)
#define MAOINJAJOEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9DE750)
#define MAOINJAJOEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DED40)
#define MAOINJAJOEC_CGBLCIEBPKJ_OFFSET UNITYSDK_OFFSET(0x1E9DE0C0)
#define MAOINJAJOEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9DDF80)
#define MAOINJAJOEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9DDEE0)
#define MAOINJAJOEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DDED0)
#define MAOINJAJOEC_DCBGNJCLMPF_OFFSET UNITYSDK_OFFSET(0x1E9DE0F0)
#define MAOINJAJOEC_DOKGDPEPGBM_OFFSET UNITYSDK_OFFSET(0x1E9DE0B0)
#define MAOINJAJOEC_ELGKALGLLCF_OFFSET UNITYSDK_OFFSET(0x1E9DE120)
#define MAOINJAJOEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9DE1F0)
#define MAOINJAJOEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9DE140)
#define MAOINJAJOEC_FBHBMBLBIKM_OFFSET UNITYSDK_OFFSET(0x1E9DE130)
#define MAOINJAJOEC_FJGPHFGJMAB_OFFSET UNITYSDK_OFFSET(0x1E9DE090)
#define MAOINJAJOEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9DE310)
#define MAOINJAJOEC_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1E9DE100)
#define MAOINJAJOEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9DDE60)
#define MAOINJAJOEC_LIPJFEJPBIL_OFFSET UNITYSDK_OFFSET(0x1E9DE080)
#define MAOINJAJOEC_LMMJLJJDMGD_OFFSET UNITYSDK_OFFSET(0x1E9DE0E0)
#define MAOINJAJOEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9DEBC0)
#define MAOINJAJOEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9DEA80)
#define MAOINJAJOEC_NLAFJCIBCDC_OFFSET UNITYSDK_OFFSET(0x1E9DE060)
#define MAOINJAJOEC_OCKODBAMFPL_OFFSET UNITYSDK_OFFSET(0x1E9DE0A0)
#define MAOINJAJOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9DDEC0)
#define MAOINJAJOEC_PCGKLOJNLOM_OFFSET UNITYSDK_OFFSET(0x1E9DE0D0)
#define MAOINJAJOEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9DE450)
#define MAOINJAJOEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9DE4B0)

inline static constexpr unsigned int MAOINJAJOEC_TypeDefinitionIndex = 31940;

	class MAOINJAJOEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NCFKHDIKCNI* LHJILAOOJMF; // 0x18
		::System::UInt32 OJGKMOFGIHA; // 0x20
		::System::UInt32 CAFNGIDMMMP; // 0x24
		::System::UInt32 IBEBBFIHLLP; // 0x28
		::System::UInt32 LIGJAGENICG; // 0x2C
		::System::UInt32 KMMDLAAGKBG; // 0x30
		::System::UInt32 GJPBFGGIPGC; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MAOINJAJOEC")->GetStaticField(0x42E80);
		}

		// static const ::System::Object LEGNJMKPCNI; // 0x0
		// static const ::System::Object JMLBKMKHMNK; // 0x0
		// static const ::System::Object PMNOGKAJLKJ; // 0x0
		// static const ::System::Object INEFFHJPGDJ; // 0x0
		// static const ::System::Object EPPBJAMAMGC; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object NMKDAKODKBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MAOINJAJOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAOINJAJOEC*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MAOINJAJOEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MAOINJAJOEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MAOINJAJOEC* Clone()
		{
			return ((::MAOINJAJOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 NLAFJCIBCDC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_NLAFJCIBCDC_OFFSET))(this);
		}

		::System::Void BJDIHPEDCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOINJAJOEC_BJDIHPEDCKF_OFFSET))(this, a1);
		}

		::System::UInt32 LIPJFEJPBIL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_LIPJFEJPBIL_OFFSET))(this);
		}

		::System::Void FJGPHFGJMAB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOINJAJOEC_FJGPHFGJMAB_OFFSET))(this, a1);
		}

		::System::UInt32 OCKODBAMFPL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_OCKODBAMFPL_OFFSET))(this);
		}

		::System::Void DOKGDPEPGBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOINJAJOEC_DOKGDPEPGBM_OFFSET))(this, a1);
		}

		::System::UInt32 CGBLCIEBPKJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_CGBLCIEBPKJ_OFFSET))(this);
		}

		::System::Void PCGKLOJNLOM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOINJAJOEC_PCGKLOJNLOM_OFFSET))(this, a1);
		}

		::NCFKHDIKCNI* LMMJLJJDMGD()
		{
			return ((::NCFKHDIKCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_LMMJLJJDMGD_OFFSET))(this);
		}

		::System::Void DCBGNJCLMPF(::NCFKHDIKCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFKHDIKCNI*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_DCBGNJCLMPF_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOINJAJOEC_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::UInt32 ELGKALGLLCF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_ELGKALGLLCF_OFFSET))(this);
		}

		::System::Void FBHBMBLBIKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MAOINJAJOEC_FBHBMBLBIKM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MAOINJAJOEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MAOINJAJOEC*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MAOINJAJOEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MAOINJAJOEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MAOINJAJOEC*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MAOINJAJOEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
