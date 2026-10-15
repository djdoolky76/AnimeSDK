#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFMHMJLPHOG.h"
#include "unitysdk/System/Object.h"
class NNCEFFFGNEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNCEFFFGNEN_ANLBMCFAOCN_OFFSET UNITYSDK_OFFSET(0x1EB7F570)
#define NNCEFFFGNEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB7FA50)
#define NNCEFFFGNEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB7FE70)
#define NNCEFFFGNEN_CHFIMNHABGP_OFFSET UNITYSDK_OFFSET(0x1EB7F580)
#define NNCEFFFGNEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB7F500)
#define NNCEFFFGNEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB7F460)
#define NNCEFFFGNEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F410)
#define NNCEFFFGNEN_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1EB7F530)
#define NNCEFFFGNEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB7F650)
#define NNCEFFFGNEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB7F5C0)
#define NNCEFFFGNEN_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1EB7F560)
#define NNCEFFFGNEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB7F6D0)
#define NNCEFFFGNEN_HOKMPGOLPGL_OFFSET UNITYSDK_OFFSET(0x1EB7F5B0)
#define NNCEFFFGNEN_HONGLJECAAC_OFFSET UNITYSDK_OFFSET(0x1EB7F590)
#define NNCEFFFGNEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB7F3D0)
#define NNCEFFFGNEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB7FD60)
#define NNCEFFFGNEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB7FCF0)
#define NNCEFFFGNEN_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1EB7F540)
#define NNCEFFFGNEN_OJDCPGGJKGK_OFFSET UNITYSDK_OFFSET(0x1EB7F5A0)
#define NNCEFFFGNEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB7F400)
#define NNCEFFFGNEN_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1EB7F550)
#define NNCEFFFGNEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB7F7F0)
#define NNCEFFFGNEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB7F850)

inline static constexpr unsigned int NNCEFFFGNEN_TypeDefinitionIndex = 32500;

	class NNCEFFFGNEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFNHANNCAMC; // 0x18
		::System::UInt32 DBHLHPDBNFD; // 0x20
		::KFMHMJLPHOG EIJBNFIAAIB; // 0x24
		::System::UInt32 FLBKCMIIFFP; // 0x28
		::System::UInt32 DHELHDBPKIK; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FCNMONMFJEF()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NNCEFFFGNEN")->GetStaticField(0x25F0);
		}

		static ::Google::Protobuf::MessageParser_1<::NNCEFFFGNEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNCEFFFGNEN*>**)UnitySDK::FromName("", "NNCEFFFGNEN")->GetStaticField(0x25F8);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object HHAPFDHANFC; // 0x0
		// static const ::System::Object MKIOLOIMFED; // 0x0
		// static const ::System::Object GEJEJNNMGGP; // 0x0
		// static const ::System::Object KPCHFPLEHOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNCEFFFGNEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNCEFFFGNEN*))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNCEFFFGNEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNCEFFFGNEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNCEFFFGNEN*>*(*)())((::PBYTE)hIl2Cpp + NNCEFFFGNEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNCEFFFGNEN* Clone()
		{
			return ((::NNCEFFFGNEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::UInt32 ANLBMCFAOCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_ANLBMCFAOCN_OFFSET))(this);
		}

		::System::Void CHFIMNHABGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_CHFIMNHABGP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HONGLJECAAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_HONGLJECAAC_OFFSET))(this);
		}

		::KFMHMJLPHOG OJDCPGGJKGK()
		{
			return ((::KFMHMJLPHOG(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_OJDCPGGJKGK_OFFSET))(this);
		}

		::System::Void HOKMPGOLPGL(::KFMHMJLPHOG a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFMHMJLPHOG))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_HOKMPGOLPGL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNCEFFFGNEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNCEFFFGNEN*))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNCEFFFGNEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNCEFFFGNEN*))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNCEFFFGNEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
