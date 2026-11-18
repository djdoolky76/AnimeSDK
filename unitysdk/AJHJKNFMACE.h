#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DCNGDMKEFIB;
class FCPBOMMIHCE_LHKPOJLLMDK;
class FGCOIBFFCHB;
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AJHJKNFMACE_GBJGIJONEFG_OFFSET UNITYSDK_OFFSET(0x12CFC170)
#define AJHJKNFMACE_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0x12CFC1D0)
#define AJHJKNFMACE__CTOR_OFFSET UNITYSDK_OFFSET(0x12CFC0C0)

inline static constexpr unsigned int AJHJKNFMACE_TypeDefinitionIndex = 49204;

class AJHJKNFMACE : public ::System::Object
{
public:
	::DCNGDMKEFIB* NKJKDMDINOF; // 0x10
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x20

	::System::Void _ctor(::DCNGDMKEFIB* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::DCNGDMKEFIB*))((::PBYTE)hIl2Cpp + AJHJKNFMACE__CTOR_OFFSET))(this, IOKOLJDCKPN);
	}

	static ::AJHJKNFMACE* JPPEEOLOGGP(::FCPBOMMIHCE_LHKPOJLLMDK* IOKOLJDCKPN)
	{
		return ((::AJHJKNFMACE*(*)(::FCPBOMMIHCE_LHKPOJLLMDK*))((::PBYTE)hIl2Cpp + AJHJKNFMACE_JPPEEOLOGGP_OFFSET))(IOKOLJDCKPN);
	}

	::System::Void GBJGIJONEFG(::FCPBOMMIHCE_LHKPOJLLMDK* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::FCPBOMMIHCE_LHKPOJLLMDK*))((::PBYTE)hIl2Cpp + AJHJKNFMACE_GBJGIJONEFG_OFFSET))(this, IOKOLJDCKPN);
	}
};
