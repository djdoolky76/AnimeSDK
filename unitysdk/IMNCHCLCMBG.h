#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIPCMLEONLI.h"

namespace DG::Tweening { class Tweener; }

#define IMNCHCLCMBG_FENPLGEJDLF_OFFSET UNITYSDK_OFFSET(0x197E0F00)
#define IMNCHCLCMBG_IEBGDGHJOFM_OFFSET UNITYSDK_OFFSET(0x197E0FE0)
#define IMNCHCLCMBG_LGAFACFIAGI_OFFSET UNITYSDK_OFFSET(0x197E0F90)
#define IMNCHCLCMBG__CTOR_OFFSET UNITYSDK_OFFSET(0x197E0EB0)

inline static constexpr unsigned int IMNCHCLCMBG_TypeDefinitionIndex = 54147;

class IMNCHCLCMBG : public ::GIPCMLEONLI
{
public:
	::DG::Tweening::Tweener* AFFLFMEJEPG; // 0x40

	::System::Void _ctor(::DG::Tweening::Tweener* PLKMHOHFJFA)
	{
		return ((::System::Void(*)(::PVOID, ::DG::Tweening::Tweener*))((::PBYTE)hIl2Cpp + IMNCHCLCMBG__CTOR_OFFSET))(this, PLKMHOHFJFA);
	}

	::System::Void FENPLGEJDLF(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMNCHCLCMBG_FENPLGEJDLF_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void LGAFACFIAGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNCHCLCMBG_LGAFACFIAGI_OFFSET))(this);
	}

	::System::Void IEBGDGHJOFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMNCHCLCMBG_IEBGDGHJOFM_OFFSET))(this);
	}
};
