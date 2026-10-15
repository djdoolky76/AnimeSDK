#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchModeType.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchState.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/System/Object.h"
class CJECJOMDHKG;
namespace RPG::Client::ActivityMarble { class MarbleCoopBossPVPManager; }
namespace RPG::Client::Promises { class Promise; }

#define BLHEKACDIMK_ABFJJPIOCKF_OFFSET UNITYSDK_OFFSET(0xBA72E60)
#define BLHEKACDIMK_BPJJPDBJGFC_OFFSET UNITYSDK_OFFSET(0xBA728C0)
#define BLHEKACDIMK_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xBA724E0)
#define BLHEKACDIMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBA73280)
#define BLHEKACDIMK_DOMKFMOPCHA_OFFSET UNITYSDK_OFFSET(0xBA72960)
#define BLHEKACDIMK_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0xBA72CB0)
#define BLHEKACDIMK_HKOBLNDANLB_OFFSET UNITYSDK_OFFSET(0xBA73210)
#define BLHEKACDIMK_HLCFJJBKGEM_OFFSET UNITYSDK_OFFSET(0xBA72D50)
#define BLHEKACDIMK_KGDCMHAJKHH_OFFSET UNITYSDK_OFFSET(0xBA72DE0)
#define BLHEKACDIMK_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0xBA72A30)
#define BLHEKACDIMK_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0xBA72490)

	class BLHEKACDIMK : public ::System::Object
	{
	public:
		::CJECJOMDHKG* CFKHNPGEAJA; // 0x10
		::System::Boolean HCDBKNCPMHE; // 0x18
		::System::Boolean PAJKNCJLLOK; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_CTOR_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarbleMatchModeType OPGLAKFNMLD()
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_OPGLAKFNMLD_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* CLJEBKODGHK(::CJECJOMDHKG* a1)
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID, ::CJECJOMDHKG*))((::PBYTE)hIl2Cpp + BLHEKACDIMK_CLJEBKODGHK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::Promise* NKNNIDKJKOJ()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_NKNNIDKJKOJ_OFFSET))(this);
		}

		::System::Void GMHFMPLLPDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_GMHFMPLLPDL_OFFSET))(this);
		}

		::System::Void HLCFJJBKGEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_HLCFJJBKGEM_OFFSET))(this);
		}

		::System::Void KGDCMHAJKHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_KGDCMHAJKHH_OFFSET))(this);
		}

		::System::Void ABFJJPIOCKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_ABFJJPIOCKF_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* DOMKFMOPCHA()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_DOMKFMOPCHA_OFFSET))(this);
		}

		::RPG::Client::PetMarble::PetMarbleMatchState HKOBLNDANLB(::RPG::Client::LobbyState a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::PetMarble::PetMarbleMatchState(*)(::PVOID, ::RPG::Client::LobbyState, ::System::Boolean))((::PBYTE)hIl2Cpp + BLHEKACDIMK_HKOBLNDANLB_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager* BPJJPDBJGFC()
		{
			return ((::RPG::Client::ActivityMarble::MarbleCoopBossPVPManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHEKACDIMK_BPJJPDBJGFC_OFFSET))(this);
		}

	};
