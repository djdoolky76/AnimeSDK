#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class FoundationAndBallBind; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace UnityEngine { class Transform; }

#define MGPPJECNIOL_CKAFKILCBHD_OFFSET UNITYSDK_OFFSET(0xB92E610)
#define MGPPJECNIOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB92EB80)
#define MGPPJECNIOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB92DC90)
#define MGPPJECNIOL_FEKHNFNGLNO_OFFSET UNITYSDK_OFFSET(0xB92EA40)
#define MGPPJECNIOL_HAJMGKEMHKG_OFFSET UNITYSDK_OFFSET(0xB92E170)
#define MGPPJECNIOL_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB92E3B0)
#define MGPPJECNIOL_HIJBFOMCKMI_OFFSET UNITYSDK_OFFSET(0xB92EAF0)
#define MGPPJECNIOL_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xB92E560)
#define MGPPJECNIOL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB92DE40)
#define MGPPJECNIOL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB92D7E0)
#define MGPPJECNIOL_OMBAFEBFBJE_OFFSET UNITYSDK_OFFSET(0xB92E520)
#define MGPPJECNIOL_PCFNFAGGPAD_OFFSET UNITYSDK_OFFSET(0xB92E4C0)
#define MGPPJECNIOL_PLNCKDADELF_OFFSET UNITYSDK_OFFSET(0xB92DBF0)
#define MGPPJECNIOL_PNMONIDIDMP_OFFSET UNITYSDK_OFFSET(0xB92E470)
#define MGPPJECNIOL_POCADFCNNBM_OFFSET UNITYSDK_OFFSET(0xB92DB80)

inline static constexpr unsigned int MGPPJECNIOL_TypeDefinitionIndex = 57482;

	class MGPPJECNIOL : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* JLMJJGPNGDD; // 0x10
		::RPG::GameCore::PropComponent* DIAJJGFEMIM; // 0x18
		::RPG::GameCore::PropComponent* JHJIJOPHKEK; // 0x20
		::RPG::GameCore::FoundationAndBallBind* GHGPCGIEJGM; // 0x28
		::RPG::GameCore::GameEntity* MJFOPNGAPHL; // 0x30
		::UnityEngine::Transform* IPDJFLCDGEE; // 0x38
		::System::Single LCILANFDPPE; // 0x40
		::System::Single PAMGAJPNICB; // 0x44
		::System::Single OEFLNACHDBK; // 0x48
		::System::Single IJACPGGLMGH; // 0x4C
		::System::Single FNPEKLJMDGB; // 0x50
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
