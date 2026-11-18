#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBICIOFFGBM.h"

namespace MoleMole::Config { class CharacterConfigPhotoCamera; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }

#define HKGOAALFNLG_MCHEMIMGMEI_OFFSET UNITYSDK_OFFSET(0x16CF6E40)
#define HKGOAALFNLG_MPEFFHIJMEG_OFFSET UNITYSDK_OFFSET(0x16CF6D80)
#define HKGOAALFNLG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF6D70)

inline static constexpr unsigned int HKGOAALFNLG_TypeDefinitionIndex = 83729;

class HKGOAALFNLG : public ::FBICIOFFGBM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGOAALFNLG__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::CharacterConfigPhotoCamera* MPEFFHIJMEG()
	{
		return ((::MoleMole::Config::CharacterConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGOAALFNLG_MPEFFHIJMEG_OFFSET))(this);
	}

	::MoleMole::Config::UIConfigPhotoCamera* MCHEMIMGMEI()
	{
		return ((::MoleMole::Config::UIConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + HKGOAALFNLG_MCHEMIMGMEI_OFFSET))(this);
	}
};
