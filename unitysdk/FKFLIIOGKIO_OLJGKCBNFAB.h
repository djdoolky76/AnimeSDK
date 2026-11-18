#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class EffectForUIScale; }
namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }

#define FKFLIIOGKIO_OLJGKCBNFAB_COOPILBLFMO_OFFSET UNITYSDK_OFFSET(0x132257F0)
#define FKFLIIOGKIO_OLJGKCBNFAB_LDMKNICFFNB_OFFSET UNITYSDK_OFFSET(0x13225610)
#define FKFLIIOGKIO_OLJGKCBNFAB_MJADONJEHNJ_OFFSET UNITYSDK_OFFSET(0x132256D0)
#define FKFLIIOGKIO_OLJGKCBNFAB_NBGJLEHHFMA_OFFSET UNITYSDK_OFFSET(0x13225650)
#define FKFLIIOGKIO_OLJGKCBNFAB_PNMOBJNHFFB_OFFSET UNITYSDK_OFFSET(0x13225830)
#define FKFLIIOGKIO_OLJGKCBNFAB__CTOR_OFFSET UNITYSDK_OFFSET(0x13225600)

inline static constexpr unsigned int FKFLIIOGKIO_OLJGKCBNFAB_TypeDefinitionIndex = 90366;

class FKFLIIOGKIO_OLJGKCBNFAB : public ::System::Object
{
public:
	::MoleMole::EffectForUIScale* CLMNLPKFBFA; // 0x10
	::UnityEngine::Animation* AOKJEGNBALI; // 0x18
	::MoleMole::UIHollowMainPageController* FIEJJJIKOPC; // 0x20
	::System::String* LAPHHAGMPIJ; // 0x28
	::System::Action* MGAKJHJAGJI; // 0x30
	::UnityEngine::GameObject* IAOJCPHIMHJ; // 0x38
	::System::String* FEJLAJNGNOG; // 0x40
	::System::Boolean HICGMKGFJGO; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_OLJGKCBNFAB__CTOR_OFFSET))(this);
	}

	::System::Void LDMKNICFFNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_OLJGKCBNFAB_LDMKNICFFNB_OFFSET))(this);
	}

	::System::Void NBGJLEHHFMA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_OLJGKCBNFAB_NBGJLEHHFMA_OFFSET))(this);
	}

	::System::Void MJADONJEHNJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_OLJGKCBNFAB_MJADONJEHNJ_OFFSET))(this);
	}

	::System::Void COOPILBLFMO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_OLJGKCBNFAB_COOPILBLFMO_OFFSET))(this);
	}

	::System::Void PNMOBJNHFFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKFLIIOGKIO_OLJGKCBNFAB_PNMOBJNHFFB_OFFSET))(this);
	}
};
