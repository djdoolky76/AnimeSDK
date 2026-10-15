#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDABINKIAGM;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BDABINKIAGM_AFDDABNNLJP_OFFSET UNITYSDK_OFFSET(0x1E8E5960)
#define BDABINKIAGM_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E8E5900)
#define BDABINKIAGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8E5E50)
#define BDABINKIAGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8E6180)
#define BDABINKIAGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8E5870)
#define BDABINKIAGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8E57F0)
#define BDABINKIAGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E57E0)
#define BDABINKIAGM_DBBJMKJJDMB_OFFSET UNITYSDK_OFFSET(0x1E8E5970)
#define BDABINKIAGM_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E8E5920)
#define BDABINKIAGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8E5A80)
#define BDABINKIAGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8E5980)
#define BDABINKIAGM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E8E5950)
#define BDABINKIAGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8E5C10)
#define BDABINKIAGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8E57A0)
#define BDABINKIAGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8E60B0)
#define BDABINKIAGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8E6020)
#define BDABINKIAGM_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E8E5910)
#define BDABINKIAGM_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E8E5930)
#define BDABINKIAGM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E8E5940)
#define BDABINKIAGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8E57D0)
#define BDABINKIAGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8E5C60)
#define BDABINKIAGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8E5CC0)

inline static constexpr unsigned int BDABINKIAGM_TypeDefinitionIndex = 34323;

	class BDABINKIAGM : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		::System::UInt32 AIKAJDGKENP; // 0x28
		static ::Google::Protobuf::MessageParser_1<::BDABINKIAGM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BDABINKIAGM*>**)UnitySDK::FromName("", "BDABINKIAGM")->GetStaticField(0x51850);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CEFHBPCEDIF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BDABINKIAGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDABINKIAGM*))((::PBYTE)hIl2Cpp + BDABINKIAGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDABINKIAGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BDABINKIAGM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BDABINKIAGM*>*(*)())((::PBYTE)hIl2Cpp + BDABINKIAGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BDABINKIAGM* Clone()
		{
			return ((::BDABINKIAGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + BDABINKIAGM_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDABINKIAGM_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDABINKIAGM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AFDDABNNLJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_AFDDABNNLJP_OFFSET))(this);
		}

		::System::Void DBBJMKJJDMB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDABINKIAGM_DBBJMKJJDMB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDABINKIAGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BDABINKIAGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BDABINKIAGM*))((::PBYTE)hIl2Cpp + BDABINKIAGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BDABINKIAGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDABINKIAGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BDABINKIAGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BDABINKIAGM*))((::PBYTE)hIl2Cpp + BDABINKIAGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BDABINKIAGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
