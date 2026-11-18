#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MKLHKPDBOLG;
namespace MoleMole { class UIAvatarGestureVideoDisplayPopWindowController_Context; }
namespace MoleMole { class UIGeneralAvatarGesturePurchaseWidgetController_Context; }

#define MKLHKPDBOLG_FAEODHKALKF_ADNKBNBCAMB_OFFSET UNITYSDK_OFFSET(0x16C952B0)
#define MKLHKPDBOLG_FAEODHKALKF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C952A0)

inline static constexpr unsigned int MKLHKPDBOLG_FAEODHKALKF_TypeDefinitionIndex = 74116;

class MKLHKPDBOLG_FAEODHKALKF : public ::System::Object
{
public:
	::MKLHKPDBOLG* KLHPEBKNIFB; // 0x10
	::MoleMole::UIAvatarGestureVideoDisplayPopWindowController_Context* AAOCANGHBDG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKLHKPDBOLG_FAEODHKALKF__CTOR_OFFSET))(this);
	}

	::System::Void ADNKBNBCAMB(::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context* EHFBMKGEGDJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralAvatarGesturePurchaseWidgetController_Context*))((::PBYTE)hIl2Cpp + MKLHKPDBOLG_FAEODHKALKF_ADNKBNBCAMB_OFFSET))(this, EHFBMKGEGDJ);
	}
};
