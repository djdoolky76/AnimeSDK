#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/RPG/Client/Multiplayer/MPSessionState.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class BaseLobby; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MBJOEPEGLII_ACIHMCOHBMN_OFFSET UNITYSDK_OFFSET(0xB857DC0)
#define MBJOEPEGLII_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB858640)
#define MBJOEPEGLII_BBACEGPMCEO_OFFSET UNITYSDK_OFFSET(0xB858300)
#define MBJOEPEGLII_BJNIJJIFMOP_OFFSET UNITYSDK_OFFSET(0xB8581E0)
#define MBJOEPEGLII_CBDCBCBCGPG_OFFSET UNITYSDK_OFFSET(0xB857B20)
#define MBJOEPEGLII_CTOR_OFFSET UNITYSDK_OFFSET(0xB857730)
#define MBJOEPEGLII_DIJDCEPIAKM_OFFSET UNITYSDK_OFFSET(0xB857CE0)
#define MBJOEPEGLII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB858380)
#define MBJOEPEGLII_DKENDOJIKNF_OFFSET UNITYSDK_OFFSET(0xB858040)
#define MBJOEPEGLII_DNECEJGIFPI_OFFSET UNITYSDK_OFFSET(0xB857E40)
#define MBJOEPEGLII_DOIAABELONH_OFFSET UNITYSDK_OFFSET(0xB8585D0)
#define MBJOEPEGLII_GET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0xB858550)
#define MBJOEPEGLII_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xB858540)
#define MBJOEPEGLII_GET_HASPENDINGSERVERFIGHT_OFFSET UNITYSDK_OFFSET(0xB858620)
#define MBJOEPEGLII_GPLMDLKIOMK_OFFSET UNITYSDK_OFFSET(0xB858570)
#define MBJOEPEGLII_HMHDJGKKAJI_OFFSET UNITYSDK_OFFSET(0xB857C60)
#define MBJOEPEGLII_HOPFJHOHBCA_OFFSET UNITYSDK_OFFSET(0xB857740)
#define MBJOEPEGLII_IFPGHFPNIFA_OFFSET UNITYSDK_OFFSET(0xB858460)
#define MBJOEPEGLII_JCHKHBAGAMK_OFFSET UNITYSDK_OFFSET(0xB858150)
#define MBJOEPEGLII_JMHFHECFHBI_OFFSET UNITYSDK_OFFSET(0xB858400)
#define MBJOEPEGLII_LNMEAFJAHNL_OFFSET UNITYSDK_OFFSET(0xB857A60)
#define MBJOEPEGLII_MBKIHONHNLE_OFFSET UNITYSDK_OFFSET(0xB857B80)
#define MBJOEPEGLII_MKBOIGADFDH_OFFSET UNITYSDK_OFFSET(0xB858270)
#define MBJOEPEGLII_NCLFFNCHPIO_OFFSET UNITYSDK_OFFSET(0xB8579D0)
#define MBJOEPEGLII_NDIHAJMMJKL_OFFSET UNITYSDK_OFFSET(0xB8577D0)
#define MBJOEPEGLII_NEBMGKFIKLA_OFFSET UNITYSDK_OFFSET(0xB857FA0)
#define MBJOEPEGLII_NHNICFNGDBD_OFFSET UNITYSDK_OFFSET(0xB8580C0)
#define MBJOEPEGLII_NIMENMPDOOH_OFFSET UNITYSDK_OFFSET(0xB857D30)
#define MBJOEPEGLII_OANHMPFJEMH_OFFSET UNITYSDK_OFFSET(0xB857910)
#define MBJOEPEGLII_PIKNEOHBCEC_OFFSET UNITYSDK_OFFSET(0xB857F10)
#define MBJOEPEGLII_PNDFDBNGEKP_OFFSET UNITYSDK_OFFSET(0xB857BE0)
#define MBJOEPEGLII_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xB8586A0)
#define MBJOEPEGLII_SET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0xB858560)
#define MBJOEPEGLII_SET_HASPENDINGSERVERFIGHT_OFFSET UNITYSDK_OFFSET(0xB858630)

inline static constexpr unsigned int MBJOEPEGLII_TypeDefinitionIndex = 80261;

	class MBJOEPEGLII : public ::System::Object
	{
	public:
		::RPG::Client::BaseLobby* _CurrentLobby_k__BackingField; // 0x10
		::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* OnStateChanged; // 0x18
		::RPG::Client::Multiplayer::MPSessionState JJBOPOPCOCH; // 0x20
		::FJPMJPEKLJL _GameMode_k__BackingField; // 0x24
		::System::Boolean _HasPendingServerFight_k__BackingField; // 0x28
		::System::Void _ctor(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + MBJOEPEGLII_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>* HOPFJHOHBCA(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::RPG::Client::BaseLobby*>*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + MBJOEPEGLII_HOPFJHOHBCA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* NCLFFNCHPIO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_NCLFFNCHPIO_OFFSET))(this);
		}

		::System::Boolean CBDCBCBCGPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_CBDCBCBCGPG_OFFSET))(this);
		}

		::System::Boolean MBKIHONHNLE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_MBKIHONHNLE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PNDFDBNGEKP()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_PNDFDBNGEKP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* HMHDJGKKAJI()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_HMHDJGKKAJI_OFFSET))(this);
		}

		::System::Boolean DIJDCEPIAKM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_DIJDCEPIAKM_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NIMENMPDOOH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_NIMENMPDOOH_OFFSET))(this);
		}

		::System::Boolean ACIHMCOHBMN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_ACIHMCOHBMN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PIKNEOHBCEC()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_PIKNEOHBCEC_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* NEBMGKFIKLA(::RPG::Client::BaseLobby* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + MBJOEPEGLII_NEBMGKFIKLA_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* DKENDOJIKNF()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_DKENDOJIKNF_OFFSET))(this);
		}

		::System::Boolean NHNICFNGDBD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_NHNICFNGDBD_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* JCHKHBAGAMK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_JCHKHBAGAMK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BJNIJJIFMOP()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_BJNIJJIFMOP_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* MKBOIGADFDH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_MKBOIGADFDH_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* BBACEGPMCEO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_BBACEGPMCEO_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_DISPOSE_OFFSET))(this);
		}

		::System::Void JMHFHECFHBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_JMHFHECFHBI_OFFSET))(this);
		}

		::System::Void NDIHAJMMJKL(::RPG::Client::Multiplayer::MPSessionState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + MBJOEPEGLII_NDIHAJMMJKL_OFFSET))(this, a1);
		}

		::System::Boolean DNECEJGIFPI(::RPG::Client::Multiplayer::MPSessionState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Multiplayer::MPSessionState))((::PBYTE)hIl2Cpp + MBJOEPEGLII_DNECEJGIFPI_OFFSET))(this, a1);
		}

		::System::Void OANHMPFJEMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_OANHMPFJEMH_OFFSET))(this);
		}

		::System::Void LNMEAFJAHNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_LNMEAFJAHNL_OFFSET))(this);
		}

		::System::Void IFPGHFPNIFA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBJOEPEGLII_IFPGHFPNIFA_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL get_GameMode()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_GET_GAMEMODE_OFFSET))(this);
		}

		::RPG::Client::BaseLobby* get_CurrentLobby()
		{
			return ((::RPG::Client::BaseLobby*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_GET_CURRENTLOBBY_OFFSET))(this);
		}

		::System::Void set_CurrentLobby(::RPG::Client::BaseLobby* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseLobby*))((::PBYTE)hIl2Cpp + MBJOEPEGLII_SET_CURRENTLOBBY_OFFSET))(this, a1);
		}

		::System::Boolean GPLMDLKIOMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_GPLMDLKIOMK_OFFSET))(this);
		}

		::System::Boolean DOIAABELONH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_DOIAABELONH_OFFSET))(this);
		}

		::System::Boolean get_HasPendingServerFight()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MBJOEPEGLII_GET_HASPENDINGSERVERFIGHT_OFFSET))(this);
		}

		::System::Void set_HasPendingServerFight(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MBJOEPEGLII_SET_HASPENDINGSERVERFIGHT_OFFSET))(this, a1);
		}

		::System::Void add_OnStateChanged(::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*))((::PBYTE)hIl2Cpp + MBJOEPEGLII_ADD_ONSTATECHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnStateChanged(::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>*))((::PBYTE)hIl2Cpp + MBJOEPEGLII_REMOVE_ONSTATECHANGED_OFFSET))(this, a1);
		}

	};
