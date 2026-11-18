#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1BA2C320)
#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1BA2C130)
#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x1BA2C510)
#define MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2C670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigFinishedChessPiece_TypeDefinitionIndex = 91236;

	class ConfigFinishedChessPiece : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* overlayEffect; // 0x10
		::System::String* screenMapTexturePath; // 0x18
		::UnityEngine::Texture2D* _noiseTexture; // 0x20
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x28
		::System::String* textureSheetConfigKey; // 0x30
		::System::String* noiseTexturePath; // 0x38
		::UnityEngine::Texture2D* _screenMapTexture; // 0x40
		::UnityEngine::Color noiseColor; // 0x48
		::System::Boolean isTextureSheet; // 0x58
		::System::Boolean noiseTrigger; // 0x59
		::System::Byte _padding0[0x2];
		::UnityEngine::Color screenMapColor; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_screenMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_noiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_GET_NOISETEXTURE_OFFSET))(this);
		}

		::System::Boolean IsMapTextureValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGFINISHEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET))(this);
		}
	};
}
