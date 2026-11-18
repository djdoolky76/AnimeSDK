#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFIPOPKLNOI.h"
#include "unitysdk/DNAJBNAHOCL.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class CJMLLONLLEG;
namespace MoleMole { class UITowerDefenseMainPageController; }
namespace UnityEngine { class GameObject; }

#define ANCEMLJFAGM_ACMIEJCJNKK_OFFSET UNITYSDK_OFFSET(0x113C20B0)
#define ANCEMLJFAGM_DIHCGHDHPJP_OFFSET UNITYSDK_OFFSET(0x113C25C0)
#define ANCEMLJFAGM_OCPIPIJCOEO_OFFSET UNITYSDK_OFFSET(0x113C2670)
#define ANCEMLJFAGM_OHGABMGNOEN_OFFSET UNITYSDK_OFFSET(0x113C2910)
#define ANCEMLJFAGM_OIBKFFAGPNH_OFFSET UNITYSDK_OFFSET(0x113C27B0)
#define ANCEMLJFAGM_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x113C1EF0)
#define ANCEMLJFAGM__CTOR_OFFSET UNITYSDK_OFFSET(0x113C1ED0)

inline static constexpr unsigned int ANCEMLJFAGM_TypeDefinitionIndex = 92643;

class ANCEMLJFAGM : public ::FFIPOPKLNOI
{
public:
	::UnityEngine::GameObject* EINGHKHLPEC; // 0x10
	::MoleMole::UITowerDefenseMainPageController* MACHGCHBMBO; // 0x18
	::System::Int32 EFNNGMGLLIH; // 0x20
	::System::Int32 PNADMIEKJGE; // 0x24
	::System::Single DLHLCDGLMAB; // 0x28

	::System::Void _ctor(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::UnityEngine::GameObject* LPABCGMKOMJ, ::System::Int32 HKHHHJHCGKL, ::System::Int32 BOBGEDKOMCM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANCEMLJFAGM__CTOR_OFFSET))(this, FIEJJJIKOPC, LPABCGMKOMJ, HKHHHJHCGKL, BOBGEDKOMCM);
	}

	::CJMLLONLLEG* OKJCHFGIKBH()
	{
		return ((::CJMLLONLLEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEMLJFAGM_OKJCHFGIKBH_OFFSET))(this);
	}

	::DNAJBNAHOCL DIHCGHDHPJP(::MoleMole::InputActionEvent MLNBANAGAEE)
	{
		return ((::DNAJBNAHOCL(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + ANCEMLJFAGM_DIHCGHDHPJP_OFFSET))(this, MLNBANAGAEE);
	}

	::System::Void OCPIPIJCOEO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEMLJFAGM_OCPIPIJCOEO_OFFSET))(this);
	}

	::System::Void OIBKFFAGPNH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEMLJFAGM_OIBKFFAGPNH_OFFSET))(this);
	}

	::CJMLLONLLEG* OHGABMGNOEN(::MoleMole::UITowerDefenseMainPageController* FIEJJJIKOPC, ::UnityEngine::GameObject* LPABCGMKOMJ, ::System::Int32 HKHHHJHCGKL, ::System::Int32 BOBGEDKOMCM)
	{
		return ((::CJMLLONLLEG*(*)(::PVOID, ::MoleMole::UITowerDefenseMainPageController*, ::UnityEngine::GameObject*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANCEMLJFAGM_OHGABMGNOEN_OFFSET))(this, FIEJJJIKOPC, LPABCGMKOMJ, HKHHHJHCGKL, BOBGEDKOMCM);
	}

	::System::Void ACMIEJCJNKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANCEMLJFAGM_ACMIEJCJNKK_OFFSET))(this);
	}
};
