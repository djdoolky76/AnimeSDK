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

#define MBJOEPEGLII_ACIHMCOHBMN_OFFSET UNITYSDK_OFFSET(0xC0C4300)
#define MBJOEPEGLII_ADD_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC0C4B80)
#define MBJOEPEGLII_BBACEGPMCEO_OFFSET UNITYSDK_OFFSET(0xC0C4840)
#define MBJOEPEGLII_BJNIJJIFMOP_OFFSET UNITYSDK_OFFSET(0xC0C4720)
#define MBJOEPEGLII_CBDCBCBCGPG_OFFSET UNITYSDK_OFFSET(0xC0C4060)
#define MBJOEPEGLII_CTOR_OFFSET UNITYSDK_OFFSET(0xC0C3C70)
#define MBJOEPEGLII_DIJDCEPIAKM_OFFSET UNITYSDK_OFFSET(0xC0C4220)
#define MBJOEPEGLII_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC0C48C0)
#define MBJOEPEGLII_DKENDOJIKNF_OFFSET UNITYSDK_OFFSET(0xC0C4580)
#define MBJOEPEGLII_DNECEJGIFPI_OFFSET UNITYSDK_OFFSET(0xC0C4380)
#define MBJOEPEGLII_DOIAABELONH_OFFSET UNITYSDK_OFFSET(0xC0C4B10)
#define MBJOEPEGLII_GET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0xC0C4A90)
#define MBJOEPEGLII_GET_GAMEMODE_OFFSET UNITYSDK_OFFSET(0xC0C4A80)
#define MBJOEPEGLII_GET_HASPENDINGSERVERFIGHT_OFFSET UNITYSDK_OFFSET(0xC0C4B60)
#define MBJOEPEGLII_GPLMDLKIOMK_OFFSET UNITYSDK_OFFSET(0xC0C4AB0)
#define MBJOEPEGLII_HMHDJGKKAJI_OFFSET UNITYSDK_OFFSET(0xC0C41A0)
#define MBJOEPEGLII_HOPFJHOHBCA_OFFSET UNITYSDK_OFFSET(0xC0C3C80)
#define MBJOEPEGLII_IFPGHFPNIFA_OFFSET UNITYSDK_OFFSET(0xC0C49A0)
#define MBJOEPEGLII_JCHKHBAGAMK_OFFSET UNITYSDK_OFFSET(0xC0C4690)
#define MBJOEPEGLII_JMHFHECFHBI_OFFSET UNITYSDK_OFFSET(0xC0C4940)
#define MBJOEPEGLII_LNMEAFJAHNL_OFFSET UNITYSDK_OFFSET(0xC0C3FA0)
#define MBJOEPEGLII_MBKIHONHNLE_OFFSET UNITYSDK_OFFSET(0xC0C40C0)
#define MBJOEPEGLII_MKBOIGADFDH_OFFSET UNITYSDK_OFFSET(0xC0C47B0)
#define MBJOEPEGLII_NCLFFNCHPIO_OFFSET UNITYSDK_OFFSET(0xC0C3F10)
#define MBJOEPEGLII_NDIHAJMMJKL_OFFSET UNITYSDK_OFFSET(0xC0C3D10)
#define MBJOEPEGLII_NEBMGKFIKLA_OFFSET UNITYSDK_OFFSET(0xC0C44E0)
#define MBJOEPEGLII_NHNICFNGDBD_OFFSET UNITYSDK_OFFSET(0xC0C4600)
#define MBJOEPEGLII_NIMENMPDOOH_OFFSET UNITYSDK_OFFSET(0xC0C4270)
#define MBJOEPEGLII_OANHMPFJEMH_OFFSET UNITYSDK_OFFSET(0xC0C3E50)
#define MBJOEPEGLII_PIKNEOHBCEC_OFFSET UNITYSDK_OFFSET(0xC0C4450)
#define MBJOEPEGLII_PNDFDBNGEKP_OFFSET UNITYSDK_OFFSET(0xC0C4120)
#define MBJOEPEGLII_REMOVE_ONSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xC0C4BE0)
#define MBJOEPEGLII_SET_CURRENTLOBBY_OFFSET UNITYSDK_OFFSET(0xC0C4AA0)
#define MBJOEPEGLII_SET_HASPENDINGSERVERFIGHT_OFFSET UNITYSDK_OFFSET(0xC0C4B70)

inline static constexpr unsigned int MBJOEPEGLII_TypeDefinitionIndex = 83039;

	class MBJOEPEGLII : public ::System::Object
	{
	public:
		::System::Action_2<::RPG::Client::Multiplayer::MPSessionState, ::RPG::Client::Multiplayer::MPSessionState>* OnStateChanged; // 0x10
		::RPG::Client::BaseLobby* _CurrentLobby_k__BackingField; // 0x18
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
