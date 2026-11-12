#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class CMBGLKEMOGF;
class COIEOCDIBBP;
class EHDNPMEKPCA;
class HHKCBCKEGGI;
class IEKJLPDEGMM;
class JGDOHOFOFOF;
namespace RPG::Client { class InventoryModule; }
namespace RPG::Client::Pet { class IPetInstance; }
namespace RPG::Client::Pet { class IPetInstanceRepository; }
namespace RPG::Client::Pet { class IPetLineup; }
namespace RPG::Client::Pet { class IPetRepository; }
namespace RPG::Client::Pet { class PetInstanceRepository; }
namespace RPG::Client::Pet { class PetLineup; }
namespace RPG::Client::Pet { class PetRepository; }
namespace RPG::Client::Pet { class PetShowSuppressorSet; }
namespace RPG::Client::Pet::BlindBox { class IBlindBoxPetInstance; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_PET_PETMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0xE511190)
#define RPG_CLIENT_PET_PETMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE5117A0)
#define RPG_CLIENT_PET_PETMODULE_GET_CURRENTSUMMONSTATE_OFFSET UNITYSDK_OFFSET(0xE516530)
#define RPG_CLIENT_PET_PETMODULE_GET_HASEDITEDLINEUP_OFFSET UNITYSDK_OFFSET(0xE5166A0)
#define RPG_CLIENT_PET_PETMODULE_GET_ISSELFPETSHOWSUPPRESSED_OFFSET UNITYSDK_OFFSET(0xE516570)
#define RPG_CLIENT_PET_PETMODULE_GET_LINEUP_OFFSET UNITYSDK_OFFSET(0xE516660)
#define RPG_CLIENT_PET_PETMODULE_GET_PETINSTANCES_OFFSET UNITYSDK_OFFSET(0xE509040)
#define RPG_CLIENT_PET_PETMODULE_GET_PETS_OFFSET UNITYSDK_OFFSET(0xE50D750)
#define RPG_CLIENT_PET_PETMODULE_HASLINEUPPET_OFFSET UNITYSDK_OFFSET(0xE511EE0)
#define RPG_CLIENT_PET_PETMODULE_INIT_OFFSET UNITYSDK_OFFSET(0xE511630)
#define RPG_CLIENT_PET_PETMODULE_ISLINEUPSUMMONED_OFFSET UNITYSDK_OFFSET(0xE511DB0)
#define RPG_CLIENT_PET_PETMODULE_ISPETSOLOSUMMONED_OFFSET UNITYSDK_OFFSET(0xE50E4A0)
#define RPG_CLIENT_PET_PETMODULE_ISPETSUMMONED_OFFSET UNITYSDK_OFFSET(0xE50DF20)
#define RPG_CLIENT_PET_PETMODULE_RECALLPETS_OFFSET UNITYSDK_OFFSET(0xE512420)
#define RPG_CLIENT_PET_PETMODULE_SETBLINDBOXPETCHROMAEFFECTIVE_OFFSET UNITYSDK_OFFSET(0xE510580)
#define RPG_CLIENT_PET_PETMODULE_SUMMONPETLINEUP_OFFSET UNITYSDK_OFFSET(0xE512320)
#define RPG_CLIENT_PET_PETMODULE_SUMMONSOLOPET_OFFSET UNITYSDK_OFFSET(0xE512030)
#define RPG_CLIENT_PET_PETMODULE_SUPPRESSSELFPETSHOW_OFFSET UNITYSDK_OFFSET(0xE510FD0)
#define RPG_CLIENT_PET_PETMODULE_UPDATELINEUP_OFFSET UNITYSDK_OFFSET(0xE512500)
#define RPG_CLIENT_PET_PETMODULE__ADDBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xE5107B0)
#define RPG_CLIENT_PET_PETMODULE__ADDNORMALPET_OFFSET UNITYSDK_OFFSET(0xE510C00)
#define RPG_CLIENT_PET_PETMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE511970)
#define RPG_CLIENT_PET_PETMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xE5119C0)
#define RPG_CLIENT_PET_PETMODULE__ADDSHOWSUPPRESSORSNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xE510D40)
#define RPG_CLIENT_PET_PETMODULE__DISPOSESHOWSUPPRESSORS_OFFSET UNITYSDK_OFFSET(0xE510EA0)
#define RPG_CLIENT_PET_PETMODULE__HANDLEADDBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xE513F60)
#define RPG_CLIENT_PET_PETMODULE__HANDLEADDNORMALPET_OFFSET UNITYSDK_OFFSET(0xE513E30)
#define RPG_CLIENT_PET_PETMODULE__HANDLEBLINDBOXPETUPDATE_OFFSET UNITYSDK_OFFSET(0xE514090)
#define RPG_CLIENT_PET_PETMODULE__HANDLELINEUPUPDATE_OFFSET UNITYSDK_OFFSET(0xE5140E0)
#define RPG_CLIENT_PET_PETMODULE__HANDLEREMOVEBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xE513FB0)
#define RPG_CLIENT_PET_PETMODULE__HANDLEREMOVENORMALPET_OFFSET UNITYSDK_OFFSET(0xE513E80)
#define RPG_CLIENT_PET_PETMODULE__HANDLESUMMONSTATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE5147C0)
#define RPG_CLIENT_PET_PETMODULE__NOTIFYPETDATACHANGED_OFFSET UNITYSDK_OFFSET(0xE5138D0)
#define RPG_CLIENT_PET_PETMODULE__ONGETPETDATASCRSP_OFFSET UNITYSDK_OFFSET(0xE512C60)
#define RPG_CLIENT_PET_PETMODULE__ONPETDATACHANGESCNOTIFY_OFFSET UNITYSDK_OFFSET(0xE513920)
#define RPG_CLIENT_PET_PETMODULE__ONRECALLPETSCRSP_OFFSET UNITYSDK_OFFSET(0xE515660)
#define RPG_CLIENT_PET_PETMODULE__ONSETBLINDBOXPETLINEUPSCRSP_OFFSET UNITYSDK_OFFSET(0xE516080)
#define RPG_CLIENT_PET_PETMODULE__ONSUMMONPETSCRSP_OFFSET UNITYSDK_OFFSET(0xE514C20)
#define RPG_CLIENT_PET_PETMODULE__ONSUPPRESSSTATECHANGED_OFFSET UNITYSDK_OFFSET(0xE5164B0)
#define RPG_CLIENT_PET_PETMODULE__ONSWITCHBLINDBOXPETCHROMASCRSP_OFFSET UNITYSDK_OFFSET(0xE516280)
#define RPG_CLIENT_PET_PETMODULE__ONTRANSFERTOFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xE510EF0)
#define RPG_CLIENT_PET_PETMODULE__ONTRANSFERTOREALAVATAR_OFFSET UNITYSDK_OFFSET(0xE511050)
#define RPG_CLIENT_PET_PETMODULE__SYNCBLINDBOXPET_OFFSET UNITYSDK_OFFSET(0xE5109D0)
#define RPG_CLIENT_PET_PETMODULE__SYNCLINEUP_OFFSET UNITYSDK_OFFSET(0xE514130)
#define RPG_CLIENT_PET_PETMODULE__SYNCSUMMONSTATE_OFFSET UNITYSDK_OFFSET(0xE514810)

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetModule_TypeDefinitionIndex = 78017;

	class PetModule : public ::RPG::Client::BaseModule
	{
	public:
		::RPG::Client::Pet::PetLineup* _Lineup; // 0x10
		::RPG::Client::Pet::PetInstanceRepository* _PetInstances; // 0x18
		::RPG::Client::Pet::PetRepository* _Pets; // 0x20
		::RPG::Client::InventoryModule* _InventoryModule; // 0x28
		::HHKCBCKEGGI* _Consts; // 0x30
		::System::IDisposable* _FakeAvatarSuppressor; // 0x38
		::COIEOCDIBBP* _CurrentSummonState; // 0x40
		::RPG::Client::Pet::PetShowSuppressorSet* _SelfPetShowSuppressors; // 0x48
		::IEKJLPDEGMM* _SummonStateFactory; // 0x50
		::System::Boolean _HasEditedLineup; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_CTOR_OFFSET))(this);
		}

		::System::Void SetBlindBoxPetChromaEffective(::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::BlindBox::IBlindBoxPetInstance*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_SETBLINDBOXPETCHROMAEFFECTIVE_OFFSET))(this, a1, a2);
		}

		::System::Void _AddBlindBoxPet(::JGDOHOFOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGDOHOFOFOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ADDBLINDBOXPET_OFFSET))(this, a1);
		}

		::System::Void _SyncBlindBoxPet(::JGDOHOFOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGDOHOFOFOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__SYNCBLINDBOXPET_OFFSET))(this, a1);
		}

		::System::Void _AddNormalPet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ADDNORMALPET_OFFSET))(this, a1);
		}

		::System::Void _AddShowSuppressorsNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ADDSHOWSUPPRESSORSNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _DisposeShowSuppressors()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__DISPOSESHOWSUPPRESSORS_OFFSET))(this);
		}

		::System::Void _OnTransferToFakeAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONTRANSFERTOFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Void _OnTransferToRealAvatar(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONTRANSFERTOREALAVATAR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Boolean IsPetSummoned(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_ISPETSUMMONED_OFFSET))(this, a1);
		}

		::System::Boolean IsPetSoloSummoned(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_ISPETSOLOSUMMONED_OFFSET))(this, a1);
		}

		::System::Boolean IsLineupSummoned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_ISLINEUPSUMMONED_OFFSET))(this);
		}

		::System::Boolean HasLineupPet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_HASLINEUPPET_OFFSET))(this);
		}

		::System::Void SummonSoloPet(::RPG::Client::Pet::IPetInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetInstance*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_SUMMONSOLOPET_OFFSET))(this, a1);
		}

		::System::Void SummonPetLineup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_SUMMONPETLINEUP_OFFSET))(this);
		}

		::System::Void RecallPets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_RECALLPETS_OFFSET))(this);
		}

		::System::Void UpdateLineup(::RPG::Client::Pet::IPetLineup* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Pet::IPetLineup*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_UPDATELINEUP_OFFSET))(this, a1);
		}

		::System::IDisposable* SuppressSelfPetShow(::System::String* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_SUPPRESSSELFPETSHOW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _OnGetPetDataScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONGETPETDATASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnPetDataChangeScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONPETDATACHANGESCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _HandleAddNormalPet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLEADDNORMALPET_OFFSET))(this, a1);
		}

		::System::Void _HandleRemoveNormalPet(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLEREMOVENORMALPET_OFFSET))(this, a1);
		}

		::System::Void _HandleAddBlindBoxPet(::JGDOHOFOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGDOHOFOFOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLEADDBLINDBOXPET_OFFSET))(this, a1);
		}

		::System::Void _HandleRemoveBlindBoxPet(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLEREMOVEBLINDBOXPET_OFFSET))(this, a1);
		}

		::System::Void _HandleBlindBoxPetUpdate(::JGDOHOFOFOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGDOHOFOFOF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLEBLINDBOXPETUPDATE_OFFSET))(this, a1);
		}

		::System::Void _HandleLineupUpdate(::CMBGLKEMOGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMBGLKEMOGF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLELINEUPUPDATE_OFFSET))(this, a1);
		}

		::System::Void _HandleSummonStateUpdate(::EHDNPMEKPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHDNPMEKPCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__HANDLESUMMONSTATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void _OnSummonPetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONSUMMONPETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnRecallPetScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONRECALLPETSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSetBlindBoxPetLineupScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONSETBLINDBOXPETLINEUPSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSwitchBlindBoxPetChromaScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONSWITCHBLINDBOXPETCHROMASCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnSuppressStateChanged(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__ONSUPPRESSSTATECHANGED_OFFSET))(this, a1);
		}

		static ::System::Void _NotifyPetDataChanged()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__NOTIFYPETDATACHANGED_OFFSET))();
		}

		::System::Void _SyncLineup(::CMBGLKEMOGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMBGLKEMOGF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__SYNCLINEUP_OFFSET))(this, a1);
		}

		::System::Void _SyncSummonState(::EHDNPMEKPCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EHDNPMEKPCA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE__SYNCSUMMONSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::Pet::IPetRepository* get_Pets()
		{
			return ((::RPG::Client::Pet::IPetRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_GET_PETS_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetInstanceRepository* get_PetInstances()
		{
			return ((::RPG::Client::Pet::IPetInstanceRepository*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_GET_PETINSTANCES_OFFSET))(this);
		}

		::COIEOCDIBBP* get_CurrentSummonState()
		{
			return ((::COIEOCDIBBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_GET_CURRENTSUMMONSTATE_OFFSET))(this);
		}

		::System::Boolean get_IsSelfPetShowSuppressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_GET_ISSELFPETSHOWSUPPRESSED_OFFSET))(this);
		}

		::RPG::Client::Pet::IPetLineup* get_Lineup()
		{
			return ((::RPG::Client::Pet::IPetLineup*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_GET_LINEUP_OFFSET))(this);
		}

		::System::Boolean get_HasEditedLineup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PET_PETMODULE_GET_HASEDITEDLINEUP_OFFSET))(this);
		}

	};
}
