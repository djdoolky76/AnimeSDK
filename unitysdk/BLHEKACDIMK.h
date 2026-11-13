#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchModeType.h"
#include "unitysdk/RPG/Client/PetMarble/PetMarbleMatchState.h"
#include "unitysdk/RPG/Client/LobbyState.h"
#include "unitysdk/System/Object.h"
class CJECJOMDHKG;
namespace RPG::Client::ActivityMarble { class MarbleCoopBossPVPManager; }
namespace RPG::Client::Promises { class Promise; }

#define BLHEKACDIMK_ABFJJPIOCKF_OFFSET UNITYSDK_OFFSET(0x18B4E2A0)
#define BLHEKACDIMK_BPJJPDBJGFC_OFFSET UNITYSDK_OFFSET(0x18B4DD00)
#define BLHEKACDIMK_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0x18B4D920)
#define BLHEKACDIMK_CTOR_OFFSET UNITYSDK_OFFSET(0x18B4E6C0)
#define BLHEKACDIMK_DOMKFMOPCHA_OFFSET UNITYSDK_OFFSET(0x18B4DDA0)
#define BLHEKACDIMK_GMHFMPLLPDL_OFFSET UNITYSDK_OFFSET(0x18B4E0F0)
#define BLHEKACDIMK_HKOBLNDANLB_OFFSET UNITYSDK_OFFSET(0x18B4E650)
#define BLHEKACDIMK_HLCFJJBKGEM_OFFSET UNITYSDK_OFFSET(0x18B4E190)
#define BLHEKACDIMK_KGDCMHAJKHH_OFFSET UNITYSDK_OFFSET(0x18B4E220)
#define BLHEKACDIMK_NKNNIDKJKOJ_OFFSET UNITYSDK_OFFSET(0x18B4DE70)
#define BLHEKACDIMK_OPGLAKFNMLD_OFFSET UNITYSDK_OFFSET(0x18B4D8D0)

inline static constexpr unsigned int BLHEKACDIMK_TypeDefinitionIndex = 76861;

	class BLHEKACDIMK : public ::System::Object
	{
	public:
		::CJECJOMDHKG* CFKHNPGEAJA; // 0x10
		::System::Boolean PAJKNCJLLOK; // 0x18
		::System::Boolean HCDBKNCPMHE; // 0x19
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
