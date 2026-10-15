#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIAIOEBDNEE.h"
#include "unitysdk/RPG/Client/LittleGameShare/MsgRetcode.h"
class ADDMLHHPOBC;
class EENGOMFCDEI;
class FDKAIKEOLON;
class GCEBGLLMGPE;
class GHADLBDBHNA;
class GMIFBFGDGJK;
class HKJBGGODPLG;
class IFBFJDCECML;
class LBGDIMPFAKE;
class NBIBJILIFIG;
class OCCHJLMKMFL;
class OGJIHAPHFGL;
class ONIJDACKGJG;
class PBGNKMMDBGD;
namespace Google::Protobuf { class IMessage; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AGENEONNBML_BHGHBJKFMEL_OFFSET UNITYSDK_OFFSET(0x1C587700)
#define AGENEONNBML_CTOR_OFFSET UNITYSDK_OFFSET(0x1C584C50)
#define AGENEONNBML_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C585420)
#define AGENEONNBML_EDGJFLBDEBJ_OFFSET UNITYSDK_OFFSET(0x1C5853D0)
#define AGENEONNBML_EJAHEDDMHCF_OFFSET UNITYSDK_OFFSET(0x1C5850B0)
#define AGENEONNBML_EPEBLBFEBPG_OFFSET UNITYSDK_OFFSET(0x1C587040)
#define AGENEONNBML_FBIBFFMGLEE_OFFSET UNITYSDK_OFFSET(0x1C5815C0)
#define AGENEONNBML_FJAAMLKHAGD_OFFSET UNITYSDK_OFFSET(0x1C5871F0)
#define AGENEONNBML_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x1C5854B0)
#define AGENEONNBML_GET_ISFORBIDPLAYERCONNECT_OFFSET UNITYSDK_OFFSET(0x1C587AC0)
#define AGENEONNBML_GET_ISPVE_OFFSET UNITYSDK_OFFSET(0x1C587AE0)
#define AGENEONNBML_GET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x1C587B00)
#define AGENEONNBML_GKHOJNGIOJI_OFFSET UNITYSDK_OFFSET(0x1C586CC0)
#define AGENEONNBML_GPIBOKAODBG_OFFSET UNITYSDK_OFFSET(0x1C5864F0)
#define AGENEONNBML_HDCCDOEJDPO_OFFSET UNITYSDK_OFFSET(0x1C587640)
#define AGENEONNBML_HDHGINJAGGI_OFFSET UNITYSDK_OFFSET(0x1C5865B0)
#define AGENEONNBML_HMKENKHEBEN_OFFSET UNITYSDK_OFFSET(0x1C585860)
#define AGENEONNBML_IJLBDMIOFLE_OFFSET UNITYSDK_OFFSET(0x1C5857D0)
#define AGENEONNBML_IMNJBGBNNGP_OFFSET UNITYSDK_OFFSET(0x1C586BA0)
#define AGENEONNBML_JJGCHFLLIAO_OFFSET UNITYSDK_OFFSET(0x1C5876F0)
#define AGENEONNBML_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C5851E0)
#define AGENEONNBML_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C585500)
#define AGENEONNBML_LHCGHJOJEBJ_OFFSET UNITYSDK_OFFSET(0x1C5872D0)
#define AGENEONNBML_MFDACIDJLCI_OFFSET UNITYSDK_OFFSET(0x1C585E80)
#define AGENEONNBML_NLIFAHNMHGB_OFFSET UNITYSDK_OFFSET(0x1C587500)
#define AGENEONNBML_OCLBMMNNMFC_OFFSET UNITYSDK_OFFSET(0x1C587660)
#define AGENEONNBML_OCOACGHIKDM_OFFSET UNITYSDK_OFFSET(0x1C586890)
#define AGENEONNBML_OIKMNKLDFOC_OFFSET UNITYSDK_OFFSET(0x1C585C50)
#define AGENEONNBML_OIOCMIJNGAA_OFFSET UNITYSDK_OFFSET(0x1C5878B0)
#define AGENEONNBML_OJKLNCDEOCF_OFFSET UNITYSDK_OFFSET(0x1C587A60)
#define AGENEONNBML_ONREQ_OFFSET UNITYSDK_OFFSET(0x1C587090)
#define AGENEONNBML_SET_ISFORBIDPLAYERCONNECT_OFFSET UNITYSDK_OFFSET(0x1C587AD0)
#define AGENEONNBML_SET_ISPVE_OFFSET UNITYSDK_OFFSET(0x1C587AF0)
#define AGENEONNBML_SET_ROOMUID_OFFSET UNITYSDK_OFFSET(0x1C587B10)

inline static constexpr unsigned int AGENEONNBML_TypeDefinitionIndex = 37213;

	class AGENEONNBML : public ::LIAIOEBDNEE
	{
	public:
		::FDKAIKEOLON* ENPEAKNPNML; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* GBHMLJFFPIJ; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::ADDMLHHPOBC*>* LLJJICKGMND; // 0x20
		::NBIBJILIFIG* BBEIAGBCOKL; // 0x28
		::EENGOMFCDEI* KGBLBBMCHKG; // 0x30
		::OGJIHAPHFGL* MOAHPOKJFMH; // 0x38
		::HKJBGGODPLG* FKINCGODJEP; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::LBGDIMPFAKE*>* FHIKIAIFLIF; // 0x48
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x50
		::System::UInt64 _RoomUid_k__BackingField; // 0x58
		::System::Boolean _IsForbidPlayerConnect_k__BackingField; // 0x60
		::System::Boolean _IsPve_k__BackingField; // 0x61
		::System::Boolean NDKNKNAGAEP; // 0x62
		::System::Boolean JBLKLDNOGFI; // 0x63
		::System::Void _ctor(::FDKAIKEOLON* a1, ::ONIJDACKGJG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDKAIKEOLON*, ::ONIJDACKGJG*))((::PBYTE)hIl2Cpp + AGENEONNBML_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void EJAHEDDMHCF(::GHADLBDBHNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHADLBDBHNA*))((::PBYTE)hIl2Cpp + AGENEONNBML_EJAHEDDMHCF_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AGENEONNBML_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::OCCHJLMKMFL* EDGJFLBDEBJ()
		{
			return ((::OCCHJLMKMFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_EDGJFLBDEBJ_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_DISPOSE_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_FNACALDOOIF_OFFSET))(this);
		}

		::System::Boolean KPJGDHLENIP(::System::UInt64 a1, ::System::Object* a2, ::System::Object* a3, ::System::UInt32 a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt64, ::System::Object*, ::System::Object*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + AGENEONNBML_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean OIKMNKLDFOC(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGENEONNBML_OIKMNKLDFOC_OFFSET))(this, a1);
		}

		::System::Boolean MFDACIDJLCI(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGENEONNBML_MFDACIDJLCI_OFFSET))(this, a1);
		}

		::System::Void HMKENKHEBEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_HMKENKHEBEN_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::MsgRetcode GPIBOKAODBG(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_GPIBOKAODBG_OFFSET))(this, a1);
		}

		::System::Void HDHGINJAGGI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_HDHGINJAGGI_OFFSET))(this, a1);
		}

		::System::Void OCOACGHIKDM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_OCOACGHIKDM_OFFSET))(this, a1);
		}

		::System::Void GKHOJNGIOJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_GKHOJNGIOJI_OFFSET))(this);
		}

		::System::Void IMNJBGBNNGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_IMNJBGBNNGP_OFFSET))(this);
		}

		::System::Void OnReq(::Google::Protobuf::IMessage* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::IMessage*, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_ONREQ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::LittleGameShare::MsgRetcode FJAAMLKHAGD(::System::UInt32 a1)
		{
			return ((::RPG::Client::LittleGameShare::MsgRetcode(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_FJAAMLKHAGD_OFFSET))(this, a1);
		}

		::GCEBGLLMGPE* LHCGHJOJEBJ(::System::Int32 a1)
		{
			return ((::GCEBGLLMGPE*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENEONNBML_LHCGHJOJEBJ_OFFSET))(this, a1);
		}

		::IFBFJDCECML* NLIFAHNMHGB(::System::Int32 a1)
		{
			return ((::IFBFJDCECML*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGENEONNBML_NLIFAHNMHGB_OFFSET))(this, a1);
		}

		::GMIFBFGDGJK* HDCCDOEJDPO()
		{
			return ((::GMIFBFGDGJK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_HDCCDOEJDPO_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* FBIBFFMGLEE()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_FBIBFFMGLEE_OFFSET))(this);
		}

		::System::Boolean OCLBMMNNMFC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_OCLBMMNNMFC_OFFSET))(this, a1);
		}

		::PBGNKMMDBGD* JJGCHFLLIAO()
		{
			return ((::PBGNKMMDBGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_JJGCHFLLIAO_OFFSET))(this);
		}

		::System::Boolean IJLBDMIOFLE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGENEONNBML_IJLBDMIOFLE_OFFSET))(this, a1);
		}

		::System::Void BHGHBJKFMEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_BHGHBJKFMEL_OFFSET))(this);
		}

		::System::Void OIOCMIJNGAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_OIOCMIJNGAA_OFFSET))(this);
		}

		::System::Void OJKLNCDEOCF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_OJKLNCDEOCF_OFFSET))(this);
		}

		::System::UInt32 EPEBLBFEBPG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_EPEBLBFEBPG_OFFSET))(this);
		}

		::System::Boolean get_IsForbidPlayerConnect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_GET_ISFORBIDPLAYERCONNECT_OFFSET))(this);
		}

		::System::Void set_IsForbidPlayerConnect(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGENEONNBML_SET_ISFORBIDPLAYERCONNECT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPve()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_GET_ISPVE_OFFSET))(this);
		}

		::System::Void set_IsPve(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGENEONNBML_SET_ISPVE_OFFSET))(this, a1);
		}

		::System::UInt64 get_RoomUid()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + AGENEONNBML_GET_ROOMUID_OFFSET))(this);
		}

		::System::Void set_RoomUid(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + AGENEONNBML_SET_ROOMUID_OFFSET))(this, a1);
		}

	};
