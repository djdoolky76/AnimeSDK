#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LGEFLIGFLJL_CHHKAHFDAFM;
namespace MoleMole { class ConfigGalGameAvatarShowSettings; }

#define LGEFLIGFLJL_MHFDFDDONNH_PFNIPADEPKG_OFFSET UNITYSDK_OFFSET(0x15DF7C60)
#define LGEFLIGFLJL_MHFDFDDONNH__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF7C50)

inline static constexpr unsigned int LGEFLIGFLJL_MHFDFDDONNH_TypeDefinitionIndex = 62382;

class LGEFLIGFLJL_MHFDFDDONNH : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::LGEFLIGFLJL_CHHKAHFDAFM* FGBNBFHOKAA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_MHFDFDDONNH__CTOR_OFFSET))(this);
	}

	::System::Void PFNIPADEPKG(::MoleMole::ConfigGalGameAvatarShowSettings* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigGalGameAvatarShowSettings*))((::PBYTE)hIl2Cpp + LGEFLIGFLJL_MHFDFDDONNH_PFNIPADEPKG_OFFSET))(this, DFMKILICPFB);
	}
};
