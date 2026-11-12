#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class FoundationAndBallBind; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class Transform; }

#define MGPPJECNIOL_CKAFKILCBHD_OFFSET UNITYSDK_OFFSET(0xC1E1F10)
#define MGPPJECNIOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC1E2480)
#define MGPPJECNIOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1E1590)
#define MGPPJECNIOL_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0xC1E2340)
#define MGPPJECNIOL_HAJMGKEMHKG_OFFSET UNITYSDK_OFFSET(0xC1E1A70)
#define MGPPJECNIOL_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xC1E1CB0)
#define MGPPJECNIOL_HIJBFOMCKMI_OFFSET UNITYSDK_OFFSET(0xC1E23F0)
#define MGPPJECNIOL_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xC1E1E60)
#define MGPPJECNIOL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC1E1740)
#define MGPPJECNIOL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC1E10E0)
#define MGPPJECNIOL_OMBAFEBFBJE_OFFSET UNITYSDK_OFFSET(0xC1E1E20)
#define MGPPJECNIOL_PCFNFAGGPAD_OFFSET UNITYSDK_OFFSET(0xC1E1DC0)
#define MGPPJECNIOL_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xC1E14F0)
#define MGPPJECNIOL_PNMONIDIDMP_OFFSET UNITYSDK_OFFSET(0xC1E1D70)
#define MGPPJECNIOL_POCADFCNNBM_OFFSET UNITYSDK_OFFSET(0xC1E1480)

inline static constexpr unsigned int MGPPJECNIOL_TypeDefinitionIndex = 58710;

	class MGPPJECNIOL : public ::System::Object
	{
	public:
		::RPG::GameCore::PropComponent* DIAJJGFEMIM; // 0x10
		::RPG::GameCore::GameEntity* MJFOPNGAPHL; // 0x18
		::RPG::GameCore::GameEntity* JLMJJGPNGDD; // 0x20
		::UnityEngine::Transform* IPDJFLCDGEE; // 0x28
		::RPG::GameCore::PropComponent* JHJIJOPHKEK; // 0x30
		::RPG::GameCore::FoundationAndBallBind* GHGPCGIEJGM; // 0x38
		::System::Single FNPEKLJMDGB; // 0x40
		::System::Single LCILANFDPPE; // 0x44
		::System::Single IJACPGGLMGH; // 0x48
		::System::Single PAMGAJPNICB; // 0x4C
		::System::Single OEFLNACHDBK; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::FoundationAndBallBind* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FoundationAndBallBind*))((::PBYTE)hIl2Cpp + MGPPJECNIOL_KPJGDHLENIP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGPPJECNIOL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGPPJECNIOL_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::System::Void PLNCKDADELF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_PLNCKDADELF_OFFSET))(this);
		}

		::System::Void PNMONIDIDMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_PNMONIDIDMP_OFFSET))(this);
		}

		::System::Boolean PCFNFAGGPAD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_PCFNFAGGPAD_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* OMBAFEBFBJE()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_OMBAFEBFBJE_OFFSET))(this);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MGPPJECNIOL_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::System::Void CKAFKILCBHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_CKAFKILCBHD_OFFSET))(this);
		}

		::System::Void HAJMGKEMHKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_HAJMGKEMHKG_OFFSET))(this);
		}

		::System::Void POCADFCNNBM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_POCADFCNNBM_OFFSET))(this);
		}

		::System::Void FEKHNFNGLNO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + MGPPJECNIOL_FEKHNFNGLNO_OFFSET))(this, a1);
		}

		::System::Void HIJBFOMCKMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGPPJECNIOL_HIJBFOMCKMI_OFFSET))(this);
		}

	};
