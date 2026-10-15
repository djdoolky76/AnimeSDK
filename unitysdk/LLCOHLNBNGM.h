#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHNAEJBKINH;
class LLCOHLNBNGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLCOHLNBNGM_ANLBMCFAOCN_OFFSET UNITYSDK_OFFSET(0x1E998C30)
#define LLCOHLNBNGM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E999240)
#define LLCOHLNBNGM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9996F0)
#define LLCOHLNBNGM_CHFIMNHABGP_OFFSET UNITYSDK_OFFSET(0x1E998C40)
#define LLCOHLNBNGM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E998B50)
#define LLCOHLNBNGM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E998AC0)
#define LLCOHLNBNGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E998AB0)
#define LLCOHLNBNGM_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E998C50)
#define LLCOHLNBNGM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E998DA0)
#define LLCOHLNBNGM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E998C90)
#define LLCOHLNBNGM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E998C20)
#define LLCOHLNBNGM_FDPMDCOAEIL_OFFSET UNITYSDK_OFFSET(0x1E998C80)
#define LLCOHLNBNGM_FHIPAKNOOFG_OFFSET UNITYSDK_OFFSET(0x1E998BF0)
#define LLCOHLNBNGM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E998EB0)
#define LLCOHLNBNGM_HCNIENLIDDJ_OFFSET UNITYSDK_OFFSET(0x1E998C00)
#define LLCOHLNBNGM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E998A70)
#define LLCOHLNBNGM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9995B0)
#define LLCOHLNBNGM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E999480)
#define LLCOHLNBNGM_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E998C60)
#define LLCOHLNBNGM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E998C10)
#define LLCOHLNBNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E998AA0)
#define LLCOHLNBNGM_PCMFGAPBPGK_OFFSET UNITYSDK_OFFSET(0x1E998C70)
#define LLCOHLNBNGM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E998FF0)
#define LLCOHLNBNGM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E999050)

inline static constexpr unsigned int LLCOHLNBNGM_TypeDefinitionIndex = 32506;

	class LLCOHLNBNGM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FHNAEJBKINH* NAHIJHIIJAC; // 0x18
		::System::UInt32 DBHLHPDBNFD; // 0x20
		::System::UInt32 FLBKCMIIFFP; // 0x24
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::UInt32 DHELHDBPKIK; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LLCOHLNBNGM")->GetStaticField(0x4B820);
		}

		// static const ::System::Object MIDPJFPOCGH; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MKIOLOIMFED; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object HHAPFDHANFC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLCOHLNBNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLCOHLNBNGM*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCOHLNBNGM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LLCOHLNBNGM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLCOHLNBNGM* Clone()
		{
			return ((::LLCOHLNBNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_CLONE_OFFSET))(this);
		}

		::FHNAEJBKINH* FHIPAKNOOFG()
		{
			return ((::FHNAEJBKINH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_FHIPAKNOOFG_OFFSET))(this);
		}

		::System::Void HCNIENLIDDJ(::FHNAEJBKINH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FHNAEJBKINH*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_HCNIENLIDDJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 ANLBMCFAOCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_ANLBMCFAOCN_OFFSET))(this);
		}

		::System::Void CHFIMNHABGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_CHFIMNHABGP_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 PCMFGAPBPGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_PCMFGAPBPGK_OFFSET))(this);
		}

		::System::Void FDPMDCOAEIL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_FDPMDCOAEIL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLCOHLNBNGM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLCOHLNBNGM*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLCOHLNBNGM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLCOHLNBNGM*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLCOHLNBNGM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
