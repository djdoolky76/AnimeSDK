#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBICIOFFGBM.h"

namespace MoleMole::Config { class CharacterConfigPhotoCamera; }
namespace MoleMole::Config { class UIConfigPhotoCamera; }

#define AKPNLHKLPMC_ICPIOJJLAGH_OFFSET UNITYSDK_OFFSET(0x142269E0)
#define AKPNLHKLPMC_MKGJGIHPEGB_OFFSET UNITYSDK_OFFSET(0x14226AA0)
#define AKPNLHKLPMC__CTOR_OFFSET UNITYSDK_OFFSET(0x142106E0)

inline static constexpr unsigned int AKPNLHKLPMC_TypeDefinitionIndex = 74214;

class AKPNLHKLPMC : public ::FBICIOFFGBM
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPNLHKLPMC__CTOR_OFFSET))(this);
	}

	::MoleMole::Config::CharacterConfigPhotoCamera* ICPIOJJLAGH()
	{
		return ((::MoleMole::Config::CharacterConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPNLHKLPMC_ICPIOJJLAGH_OFFSET))(this);
	}

	::MoleMole::Config::UIConfigPhotoCamera* MKGJGIHPEGB()
	{
		return ((::MoleMole::Config::UIConfigPhotoCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPNLHKLPMC_MKGJGIHPEGB_OFFSET))(this);
	}
};
