#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHCLMAGAHPN;
class BLPHONLBNBO;
class DGHPIDMDOJM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DGHPIDMDOJM_AFLGDDKKHBM_OFFSET UNITYSDK_OFFSET(0x1E17FEE0)
#define DGHPIDMDOJM_BDJIGGNHKCM_OFFSET UNITYSDK_OFFSET(0x1E17FEB0)
#define DGHPIDMDOJM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E180670)
#define DGHPIDMDOJM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E180A30)
#define DGHPIDMDOJM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E17FDB0)
#define DGHPIDMDOJM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E17FCE0)
#define DGHPIDMDOJM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E17FCD0)
#define DGHPIDMDOJM_DIEFHGCKBGH_OFFSET UNITYSDK_OFFSET(0x1E17FEC0)
#define DGHPIDMDOJM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E180100)
#define DGHPIDMDOJM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E17FF50)
#define DGHPIDMDOJM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E180360)
#define DGHPIDMDOJM_GPCIDCAANHB_OFFSET UNITYSDK_OFFSET(0x1E17FE90)
#define DGHPIDMDOJM_JDLIMFLEDNJ_OFFSET UNITYSDK_OFFSET(0x1E17FEA0)
#define DGHPIDMDOJM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E17FC90)
#define DGHPIDMDOJM_KAFJFOHNGMG_OFFSET UNITYSDK_OFFSET(0x1E17FED0)
#define DGHPIDMDOJM_MCFNIIKKJKF_OFFSET UNITYSDK_OFFSET(0x1E17FF00)
#define DGHPIDMDOJM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E180910)
#define DGHPIDMDOJM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1807C0)
#define DGHPIDMDOJM_MHLKGONEGDG_OFFSET UNITYSDK_OFFSET(0x1E17FEF0)
#define DGHPIDMDOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E17FCC0)
#define DGHPIDMDOJM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E180460)
#define DGHPIDMDOJM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1804C0)

inline static constexpr unsigned int DGHPIDMDOJM_TypeDefinitionIndex = 32320;

	class DGHPIDMDOJM : public ::System::Object
	{
	public:
		::System::String* MFDIFJCMBCL; // 0x10
		::AHCLMAGAHPN* DOEMNNHGAJA; // 0x18
		::BLPHONLBNBO* ODEBGOBLILD; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 JKAEMNMFNBD; // 0x30
		static ::Google::Protobuf::MessageParser_1<::DGHPIDMDOJM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DGHPIDMDOJM*>**)UnitySDK::FromName("", "DGHPIDMDOJM")->GetStaticField(0x2FB50);
		}

		// static const ::System::Object IFAMDLCBOAE; // 0x0
		// static const ::System::Object PMIOJMPCJKH; // 0x0
		// static const ::System::Object PEEEELHGMDO; // 0x0
		// static const ::System::Object FJDILKCJAIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DGHPIDMDOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHPIDMDOJM*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DGHPIDMDOJM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DGHPIDMDOJM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DGHPIDMDOJM*>*(*)())((::PBYTE)hIl2Cpp + DGHPIDMDOJM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DGHPIDMDOJM* Clone()
		{
			return ((::DGHPIDMDOJM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_CLONE_OFFSET))(this);
		}

		::BLPHONLBNBO* GPCIDCAANHB()
		{
			return ((::BLPHONLBNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_GPCIDCAANHB_OFFSET))(this);
		}

		::System::Void JDLIMFLEDNJ(::BLPHONLBNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_JDLIMFLEDNJ_OFFSET))(this, a1);
		}

		::System::UInt32 BDJIGGNHKCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_BDJIGGNHKCM_OFFSET))(this);
		}

		::System::Void DIEFHGCKBGH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_DIEFHGCKBGH_OFFSET))(this, a1);
		}

		::AHCLMAGAHPN* KAFJFOHNGMG()
		{
			return ((::AHCLMAGAHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_KAFJFOHNGMG_OFFSET))(this);
		}

		::System::Void AFLGDDKKHBM(::AHCLMAGAHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHCLMAGAHPN*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_AFLGDDKKHBM_OFFSET))(this, a1);
		}

		::System::String* MHLKGONEGDG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_MHLKGONEGDG_OFFSET))(this);
		}

		::System::Void MCFNIIKKJKF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_MCFNIIKKJKF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DGHPIDMDOJM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DGHPIDMDOJM*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DGHPIDMDOJM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DGHPIDMDOJM*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DGHPIDMDOJM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
