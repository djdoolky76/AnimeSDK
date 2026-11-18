#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPOBBKGNJHO.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class DragableRectController_GDBIKNOJEMG; }
namespace MoleMole { class DragableRectController_IEMHOBJBHBN; }

#define OBFDFHGIAKP_BFMHMIADBNG_OFFSET UNITYSDK_OFFSET(0x10056710)
#define OBFDFHGIAKP_CNDEHKFOLDA_OFFSET UNITYSDK_OFFSET(0x100567C0)
#define OBFDFHGIAKP_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x10056760)
#define OBFDFHGIAKP__CTOR_OFFSET UNITYSDK_OFFSET(0x10056700)

inline static constexpr unsigned int OBFDFHGIAKP_TypeDefinitionIndex = 73986;

class OBFDFHGIAKP : public ::System::Object
{
public:
	::MoleMole::DragableRectController_GDBIKNOJEMG* KJJMICLGLOE; // 0x10
	::MoleMole::DragableRectController_IEMHOBJBHBN* GMJJLJFHGJH; // 0x18
	::HPOBBKGNJHO OCOJFKMOKMK; // 0x20
	::System::Single JPNPGFDAMMG; // 0x24
	::System::Single EIDCLABIIFM; // 0x28
	::UnityEngine::Vector3 AHNPJPMHIHF; // 0x2C
	::System::Single GHMNDEEMDNE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFDFHGIAKP__CTOR_OFFSET))(this);
	}

	::System::Void BFMHMIADBNG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFDFHGIAKP_BFMHMIADBNG_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBFDFHGIAKP_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void CNDEHKFOLDA(::HPOBBKGNJHO NHDNAPBLDAD)
	{
		return ((::System::Void(*)(::PVOID, ::HPOBBKGNJHO))((::PBYTE)hIl2Cpp + OBFDFHGIAKP_CNDEHKFOLDA_OFFSET))(this, NHDNAPBLDAD);
	}
};
