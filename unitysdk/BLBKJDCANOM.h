#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DMFPOGCDPAL.h"
#include "unitysdk/MoleMole/Vehicle/VehicleModelNodes.h"
#include "unitysdk/PMBINEINIIG.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Vehicle { class VehicleConfig; }
namespace UnityEngine { class Transform; }

#define BLBKJDCANOM_AFHNMGCEGGB_OFFSET UNITYSDK_OFFSET(0x1692B060)
#define BLBKJDCANOM_AJDDMKFCAKP_OFFSET UNITYSDK_OFFSET(0x1692ADD0)
#define BLBKJDCANOM_CAGNAHLLHEO_OFFSET UNITYSDK_OFFSET(0x1692AE40)
#define BLBKJDCANOM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x16929C10)
#define BLBKJDCANOM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16929BE0)
#define BLBKJDCANOM__CTOR_OFFSET UNITYSDK_OFFSET(0x16929BC0)

inline static constexpr unsigned int BLBKJDCANOM_TypeDefinitionIndex = 62334;

class BLBKJDCANOM : public ::System::Object
{
public:
	::MoleMole::Vehicle::VehicleConfig* CEJENBBHBBG; // 0x10
	::UnityEngine::Transform* HNLFJKFHKPL; // 0x18
	::UnityEngine::Transform* LHBDLFPCFMD; // 0x20
	::System::Single IMPCCMJJOIA; // 0x28

	::System::Void _ctor(::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB, ::MoleMole::Vehicle::VehicleModelNodes& CJGAFOBNPOM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleModelNodes&))((::PBYTE)hIl2Cpp + BLBKJDCANOM__CTOR_OFFSET))(this, DFMKILICPFB, CJGAFOBNPOM);
	}

	::System::Void _ctor_1(::BLBKJDCANOM* IJHMPLEFGOL, ::MoleMole::Vehicle::VehicleConfig* DFMKILICPFB, ::MoleMole::Vehicle::VehicleModelNodes& CJGAFOBNPOM)
	{
		return ((::System::Void(*)(::PVOID, ::BLBKJDCANOM*, ::MoleMole::Vehicle::VehicleConfig*, ::MoleMole::Vehicle::VehicleModelNodes&))((::PBYTE)hIl2Cpp + BLBKJDCANOM__CTOR_1_OFFSET))(this, IJHMPLEFGOL, DFMKILICPFB, CJGAFOBNPOM);
	}

	::DMFPOGCDPAL OKJCHFGIKBH(::UnityEngine::Transform* FBHIPPCJGKJ, ::UnityEngine::Vector3 HOEBKFOOOPI, ::PMBINEINIIG& CFPEOIGADED, ::System::Single PBCAAADNEPK)
	{
		return ((::DMFPOGCDPAL(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::PMBINEINIIG&, ::System::Single))((::PBYTE)hIl2Cpp + BLBKJDCANOM_OKJCHFGIKBH_OFFSET))(this, FBHIPPCJGKJ, HOEBKFOOOPI, CFPEOIGADED, PBCAAADNEPK);
	}

	::UnityEngine::Vector3 AFHNMGCEGGB(::UnityEngine::Transform* FBHIPPCJGKJ)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BLBKJDCANOM_AFHNMGCEGGB_OFFSET))(this, FBHIPPCJGKJ);
	}

	static ::UnityEngine::Vector3 AJDDMKFCAKP(::UnityEngine::Vector3 HFMHOELKCAJ)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + BLBKJDCANOM_AJDDMKFCAKP_OFFSET))(HFMHOELKCAJ);
	}

	::UnityEngine::Vector3 CAGNAHLLHEO(::System::Single OGDFBEPAKDC, ::UnityEngine::Quaternion OLMAIHLDGKD)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BLBKJDCANOM_CAGNAHLLHEO_OFFSET))(this, OGDFBEPAKDC, OLMAIHLDGKD);
	}
};
