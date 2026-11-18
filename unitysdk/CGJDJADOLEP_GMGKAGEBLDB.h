#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CGJDJADOLEP;
namespace MoleMole { class UIMainCityPageController; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CGJDJADOLEP_GMGKAGEBLDB_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x1479BC90)
#define CGJDJADOLEP_GMGKAGEBLDB_PEJFEPJJDMI_OFFSET UNITYSDK_OFFSET(0x1479BAF0)
#define CGJDJADOLEP_GMGKAGEBLDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1479BAE0)

inline static constexpr unsigned int CGJDJADOLEP_GMGKAGEBLDB_TypeDefinitionIndex = 88718;

class CGJDJADOLEP_GMGKAGEBLDB : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::MoleMole::UIMainCityPageController* DJNCNDNLIHJ; // 0x18
	::System::Action* DLMJCFBENGB; // 0x20
	::CGJDJADOLEP* KLHPEBKNIFB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJADOLEP_GMGKAGEBLDB__CTOR_OFFSET))(this);
	}

	::System::Void PEJFEPJJDMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJADOLEP_GMGKAGEBLDB_PEJFEPJJDMI_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJDJADOLEP_GMGKAGEBLDB_MJMKFFANPBL_OFFSET))(this);
	}
};
