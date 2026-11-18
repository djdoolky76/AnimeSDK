#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigEntityScreenEffectBase.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Config { class ScreenEffectFloat; }
namespace System { class String; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETINTENSITY_OFFSET UNITYSDK_OFFSET(0x19B16290)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETRESPONSE_OFFSET UNITYSDK_OFFSET(0x19B16310)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETTEXTURE_OFFSET UNITYSDK_OFFSET(0x19B16580)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETTYPE_OFFSET UNITYSDK_OFFSET(0x19B16220)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GET_TEXTURE_OFFSET UNITYSDK_OFFSET(0x19B16390)
#define MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x19B165F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEntityFilmGrain_TypeDefinitionIndex = 79465;

	class ConfigEntityFilmGrain : public ::MoleMole::Config::ConfigEntityScreenEffectBase
	{
	public:
		::System::String* texturePath; // 0x40
		::UnityEngine::Texture2D* _texture; // 0x48
		::MoleMole::Config::ScreenEffectFloat* intensity; // 0x50
		::MoleMole::Config::ScreenEffectFloat* response; // 0x58
		::UnityEngine::Rendering::Universal::FilmGrainLookup type; // 0x60
		::MoleMole::Config::ScreenEffectFieldHandleType intensityHandleType; // 0x64
		::MoleMole::Config::ScreenEffectFieldHandleType textureHandleType; // 0x68
		::MoleMole::Config::ScreenEffectFieldHandleType responseHandleType; // 0x6C
		::MoleMole::Config::ScreenEffectFieldHandleType typeHandleType; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN__CTOR_OFFSET))(this);
		}

		::UnityEngine::Rendering::Universal::FilmGrainLookup GetType(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Rendering::Universal::FilmGrainLookup(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETTYPE_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetIntensity(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETINTENSITY_OFFSET))(this, curTime, realHoldTime);
		}

		::System::Single GetResponse(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETRESPONSE_OFFSET))(this, curTime, realHoldTime);
		}

		::UnityEngine::Texture2D* get_texture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GET_TEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture* GetTexture(::System::Single curTime, ::System::Single realHoldTime)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENTITYFILMGRAIN_GETTEXTURE_OFFSET))(this, curTime, realHoldTime);
		}
	};
}
