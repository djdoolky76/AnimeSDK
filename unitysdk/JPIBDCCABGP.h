#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGCCGEJBMAO_ReceiveMode.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/RPG/Client/LittleGameShare/LittleGameClientNetMode.h"
class AEKIOONKCIB;
class COMJKPOMILA;
class HNNHKPKCMJD;
class IAJLHKIHBFB;
class NNIKOAIKFMO;
namespace Google::Protobuf { class ByteString; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JPIBDCCABGP_CPOCICCPHNM_OFFSET UNITYSDK_OFFSET(0xB2C1C30)
#define JPIBDCCABGP_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C2B10)
#define JPIBDCCABGP_DAHAFHEHFKF_OFFSET UNITYSDK_OFFSET(0xB2C1DD0)
#define JPIBDCCABGP_DDPJHDKJEFG_OFFSET UNITYSDK_OFFSET(0xB2C2750)
#define JPIBDCCABGP_EDBADJJABAH_OFFSET UNITYSDK_OFFSET(0xB2C2B00)
#define JPIBDCCABGP_FENFLDLJLAI_OFFSET UNITYSDK_OFFSET(0xB2C1EF0)
#define JPIBDCCABGP_FHAPJCGHGLJ_OFFSET UNITYSDK_OFFSET(0xB2C1850)
#define JPIBDCCABGP_FNBKHILFHCC_OFFSET UNITYSDK_OFFSET(0xB2C2190)
#define JPIBDCCABGP_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xB2C2A90)
#define JPIBDCCABGP_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xB2C2AB0)
#define JPIBDCCABGP_GET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0xB2C2AD0)
#define JPIBDCCABGP_JDEALCKJEGJ_OFFSET UNITYSDK_OFFSET(0xB2C2AF0)
#define JPIBDCCABGP_KBPPLONEOOA_OFFSET UNITYSDK_OFFSET(0xB2C2670)
#define JPIBDCCABGP_KFAOHFEGPAL_OFFSET UNITYSDK_OFFSET(0xB2C2A70)
#define JPIBDCCABGP_LAOBLHHMLPJ_OFFSET UNITYSDK_OFFSET(0xB2C2A80)
#define JPIBDCCABGP_OJKDIKOENLN_OFFSET UNITYSDK_OFFSET(0xB2C1BD0)
#define JPIBDCCABGP_OLIDAMGBGNL_OFFSET UNITYSDK_OFFSET(0xB2C0C80)
#define JPIBDCCABGP_OPHKDDLIFID_OFFSET UNITYSDK_OFFSET(0xB2C1A90)
#define JPIBDCCABGP_PCJPPFPIEMC_OFFSET UNITYSDK_OFFSET(0xB2C2830)
#define JPIBDCCABGP_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xB2C2AA0)
#define JPIBDCCABGP_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET UNITYSDK_OFFSET(0xB2C2AC0)
#define JPIBDCCABGP_SET_ISPAUSEREPLAY_OFFSET UNITYSDK_OFFSET(0xB2C2AE0)
#define JPIBDCCABGP__CANLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB2C1FE0)
#define JPIBDCCABGP__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xB2C2400)
#define JPIBDCCABGP__ONINIT_OFFSET UNITYSDK_OFFSET(0xB2C0CC0)
#define JPIBDCCABGP__ONLATEUPDATE_OFFSET UNITYSDK_OFFSET(0xB2C2020)
#define JPIBDCCABGP__ONSTART_OFFSET UNITYSDK_OFFSET(0xB2C0F80)
#define JPIBDCCABGP__ONTICK_OFFSET UNITYSDK_OFFSET(0xB2C11B0)

inline static constexpr unsigned int JPIBDCCABGP_TypeDefinitionIndex = 60569;

	class JPIBDCCABGP : public ::HCLPKMIIANI
	{
	public:
		::AEKIOONKCIB* EOJJACAGMJM; // 0x78
		::System::Collections::Generic::List_1<::System::Int32>* FCNFCPMOOBD; // 0x80
		::System::Action* MHEBKIOKMCG; // 0x88
		::System::Action* MGMLPPCOONF; // 0x90
		::HNNHKPKCMJD* HICCPCEDFLA; // 0x98
		::System::Action* FNPNAEJCMNB; // 0xA0
		::NNIKOAIKFMO* HKCEFPHJGNC; // 0xA8
		::System::UInt64 _ClientPredicateTimeStampMs_k__BackingField; // 0xB0
		::RPG::Client::LittleGameShare::LittleGameClientNetMode GBEPMICDFJO; // 0xB8
		::System::Boolean JEFDCGHEEPL; // 0xB9
		::System::Boolean _IsPauseReplay_k__BackingField; // 0xBA
		::System::Byte _padding0[0x1];
		::System::UInt32 AOMJLHEENIB; // 0xBC
		::System::UInt32 GBAOPEBHOKK; // 0xC0
		::DGCCGEJBMAO_ReceiveMode NMLENCDBHAA; // 0xC4
		::System::UInt64 _ClientReplayTimeStampMs_k__BackingField; // 0xC8
		::System::UInt64 LBADGOLINJL; // 0xD0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_CTOR_OFFSET))(this);
		}

		::System::Void OLIDAMGBGNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_OLIDAMGBGNL_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + JPIBDCCABGP__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP__ONSTART_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPIBDCCABGP__ONTICK_OFFSET))(this, a1);
		}

		::System::Boolean DAHAFHEHFKF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_DAHAFHEHFKF_OFFSET))(this);
		}

		::System::Void FHAPJCGHGLJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_FHAPJCGHGLJ_OFFSET))(this);
		}

		::System::Boolean CPOCICCPHNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_CPOCICCPHNM_OFFSET))(this);
		}

		::System::UInt64 OJKDIKOENLN(::System::UInt64 a1, ::System::UInt64 a2)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + JPIBDCCABGP_OJKDIKOENLN_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CanLateUpdate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP__CANLATEUPDATE_OFFSET))(this);
		}

		::System::Void _OnLateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPIBDCCABGP__ONLATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void FNBKHILFHCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_FNBKHILFHCC_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP__ONCLEAR_OFFSET))(this);
		}

		::System::Void KBPPLONEOOA(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JPIBDCCABGP_KBPPLONEOOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DDPJHDKJEFG(::System::Action* a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + JPIBDCCABGP_DDPJHDKJEFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PCJPPFPIEMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_PCJPPFPIEMC_OFFSET))(this);
		}

		::RPG::Client::LittleGameShare::LittleGameClientNetMode KFAOHFEGPAL()
		{
			return ((::RPG::Client::LittleGameShare::LittleGameClientNetMode(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_KFAOHFEGPAL_OFFSET))(this);
		}

		::System::Void LAOBLHHMLPJ(::RPG::Client::LittleGameShare::LittleGameClientNetMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameShare::LittleGameClientNetMode))((::PBYTE)hIl2Cpp + JPIBDCCABGP_LAOBLHHMLPJ_OFFSET))(this, a1);
		}

		::System::UInt64 OPHKDDLIFID()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_OPHKDDLIFID_OFFSET))(this);
		}

		::System::UInt32 FENFLDLJLAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_FENFLDLJLAI_OFFSET))(this);
		}

		::System::UInt64 get_ClientPredicateTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_GET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this);
		}

		::System::Void set_ClientPredicateTimeStampMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JPIBDCCABGP_SET_CLIENTPREDICATETIMESTAMPMS_OFFSET))(this, a1);
		}

		::System::UInt64 get_ClientReplayTimeStampMs()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_GET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this);
		}

		::System::Void set_ClientReplayTimeStampMs(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + JPIBDCCABGP_SET_CLIENTREPLAYTIMESTAMPMS_OFFSET))(this, a1);
		}

		::System::Boolean get_IsPauseReplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_GET_ISPAUSEREPLAY_OFFSET))(this);
		}

		::System::Void set_IsPauseReplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPIBDCCABGP_SET_ISPAUSEREPLAY_OFFSET))(this, a1);
		}

		::HNNHKPKCMJD* JDEALCKJEGJ()
		{
			return ((::HNNHKPKCMJD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_JDEALCKJEGJ_OFFSET))(this);
		}

		::AEKIOONKCIB* EDBADJJABAH()
		{
			return ((::AEKIOONKCIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIBDCCABGP_EDBADJJABAH_OFFSET))(this);
		}

	};
