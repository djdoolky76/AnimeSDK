#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class DrinkMakerDrinkState; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Rigidbody; }

#define DRINKMAKERPHYICE_CTOR_OFFSET UNITYSDK_OFFSET(0x12668750)
#define DRINKMAKERPHYICE_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x12667EC0)
#define DRINKMAKERPHYICE_HDLIBLPGBIG_OFFSET UNITYSDK_OFFSET(0x12667A30)
#define DRINKMAKERPHYICE_HIEOHDKHKBC_OFFSET UNITYSDK_OFFSET(0x12667290)
#define DRINKMAKERPHYICE_JLNEPEMKFHH_OFFSET UNITYSDK_OFFSET(0x12667560)
#define DRINKMAKERPHYICE_KEHBMHFOHMN_OFFSET UNITYSDK_OFFSET(0x12667380)
#define DRINKMAKERPHYICE_NLPLFJFKCPL_OFFSET UNITYSDK_OFFSET(0x12667D60)
#define DRINKMAKERPHYICE_ONDRAWGIZMOSSELECTED_OFFSET UNITYSDK_OFFSET(0x12667FD0)
#define DRINKMAKERPHYICE_START_OFFSET UNITYSDK_OFFSET(0x12667100)

inline static constexpr unsigned int DrinkMakerPhyIce_TypeDefinitionIndex = 47188;

	class DrinkMakerPhyIce : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Rigidbody* DEHJMGGDCBK; // 0x18
		::UnityEngine::BoxCollider* CDFFODPBKCC; // 0x20
		::System::Single IKDOFKHFNNH; // 0x28
		::System::Single JAMFIIAGONP; // 0x2C
		::UnityEngine::Vector3 EJDHAEPMICP; // 0x30
		::UnityEngine::Vector3 JMNGMGDGKEH; // 0x3C
		::UnityEngine::Vector3 IPLPDEKFMOJ; // 0x48
		::UnityEngine::Vector3 BLOFEIMBLBG; // 0x54
		::UnityEngine::Vector3 KJGNPEDFOLD; // 0x60
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DrinkMakerDrinkState* Drink; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_CTOR_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_START_OFFSET))(this);
		}

		::System::Void HIEOHDKHKBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_HIEOHDKHKBC_OFFSET))(this);
		}

		::System::Void KEHBMHFOHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_KEHBMHFOHMN_OFFSET))(this);
		}

		::System::Void JLNEPEMKFHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_JLNEPEMKFHH_OFFSET))(this);
		}

		::System::Void HDLIBLPGBIG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_HDLIBLPGBIG_OFFSET))(this);
		}

		::System::Void NLPLFJFKCPL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_NLPLFJFKCPL_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void OnDrawGizmosSelected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DRINKMAKERPHYICE_ONDRAWGIZMOSSELECTED_OFFSET))(this);
		}

	};
