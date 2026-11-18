#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TypeTextComponent_MPDLPMIBGHK; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define MODMBBOLKIJ_AGJGCFMCAAN_OFFSET UNITYSDK_OFFSET(0x151F4AD0)
#define MODMBBOLKIJ_BCLFJIDLNBI_OFFSET UNITYSDK_OFFSET(0x151F48C0)
#define MODMBBOLKIJ_LILGIKPMAIA_OFFSET UNITYSDK_OFFSET(0x151F4D10)
#define MODMBBOLKIJ_PPPNOAPFDMN_OFFSET UNITYSDK_OFFSET(0x151F4FD0)

inline static constexpr unsigned int MODMBBOLKIJ_TypeDefinitionIndex = 87213;

class MODMBBOLKIJ : public ::System::Object
{
public:
	static ::System::Void BCLFJIDLNBI(::UnityEngine::UI::Text* GFKCABHFFEE)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MODMBBOLKIJ_BCLFJIDLNBI_OFFSET))(GFKCABHFFEE);
	}

	static ::System::Boolean AGJGCFMCAAN(::UnityEngine::UI::Text* GFKCABHFFEE)
	{
		return ((::System::Boolean(*)(::UnityEngine::UI::Text*))((::PBYTE)hIl2Cpp + MODMBBOLKIJ_AGJGCFMCAAN_OFFSET))(GFKCABHFFEE);
	}

	static ::System::Void LILGIKPMAIA(::UnityEngine::UI::Text* GFKCABHFFEE, ::System::String* FCCLIEJAKLI, ::System::String* KNDONPHAAHM, ::System::Single IAKPGBCAAKM, ::MoleMole::TypeTextComponent_MPDLPMIBGHK* HKEBHFKHBCC)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::TypeTextComponent_MPDLPMIBGHK*))((::PBYTE)hIl2Cpp + MODMBBOLKIJ_LILGIKPMAIA_OFFSET))(GFKCABHFFEE, FCCLIEJAKLI, KNDONPHAAHM, IAKPGBCAAKM, HKEBHFKHBCC);
	}

	static ::System::Void PPPNOAPFDMN(::UnityEngine::UI::Text* GFKCABHFFEE, ::System::String* FCCLIEJAKLI, ::System::Single IAKPGBCAAKM, ::MoleMole::TypeTextComponent_MPDLPMIBGHK* HKEBHFKHBCC)
	{
		return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::MoleMole::TypeTextComponent_MPDLPMIBGHK*))((::PBYTE)hIl2Cpp + MODMBBOLKIJ_PPPNOAPFDMN_OFFSET))(GFKCABHFFEE, FCCLIEJAKLI, IAKPGBCAAKM, HKEBHFKHBCC);
	}
};
