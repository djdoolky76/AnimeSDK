#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MECGMMLLHIE;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class LPFKBLNNAMI_2;

#define NCOOPBDGBEF_ENNFLPLLEJC_OFFSET UNITYSDK_OFFSET(0x13ED2900)
#define NCOOPBDGBEF_FIGOANBLGND_OFFSET UNITYSDK_OFFSET(0x13ED2DA0)
#define NCOOPBDGBEF_HIKDGHEFHNM_OFFSET UNITYSDK_OFFSET(0x13ED2A90)
#define NCOOPBDGBEF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x13ED2D00)
#define NCOOPBDGBEF__CTOR_OFFSET UNITYSDK_OFFSET(0x13ED2850)

inline static constexpr unsigned int NCOOPBDGBEF_TypeDefinitionIndex = 79892;

class NCOOPBDGBEF : public ::System::Object
{
public:
	::LPFKBLNNAMI_2<::MoleMole::UIBaseController*, ::MECGMMLLHIE*>* KOEIPOFKCJE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOOPBDGBEF__CTOR_OFFSET))(this);
	}

	::System::Void ENNFLPLLEJC(::MoleMole::UIBaseController* NCIMBHDKIJM, ::MECGMMLLHIE* EDCOHJBPCIO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::MECGMMLLHIE*))((::PBYTE)hIl2Cpp + NCOOPBDGBEF_ENNFLPLLEJC_OFFSET))(this, NCIMBHDKIJM, EDCOHJBPCIO);
	}

	::MECGMMLLHIE* HIKDGHEFHNM(::MoleMole::UIBaseController* NCIMBHDKIJM, ::UnityEngine::Transform* GKBJOPJKCLB)
	{
		return ((::MECGMMLLHIE*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NCOOPBDGBEF_HIKDGHEFHNM_OFFSET))(this, NCIMBHDKIJM, GKBJOPJKCLB);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCOOPBDGBEF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void FIGOANBLGND(::MoleMole::UIBaseController* NCIMBHDKIJM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + NCOOPBDGBEF_FIGOANBLGND_OFFSET))(this, NCIMBHDKIJM);
	}
};
