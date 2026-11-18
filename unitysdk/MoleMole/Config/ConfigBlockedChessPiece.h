#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBlockedChessPiece_BigTVType.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET UNITYSDK_OFFSET(0x1922FFD0)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET UNITYSDK_OFFSET(0x1922FDE0)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET UNITYSDK_OFFSET(0x192301C0)
#define MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET UNITYSDK_OFFSET(0x19230320)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBlockedChessPiece_TypeDefinitionIndex = 47448;

	class ConfigBlockedChessPiece : public ::System::Object
	{
	public:
		::System::String* textureSheetConfigKey; // 0x10
		::System::String* BigTVresourse; // 0x18
		::UnityEngine::AnimationCurve* OpacityCurve; // 0x20
		::UnityEngine::Texture2D* _screenMapTexture; // 0x28
		::UnityEngine::Texture2D* _noiseTexture; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* overlayEffectPathes; // 0x38
		::System::String* screenMapTexturePath; // 0x40
		::System::String* noiseTexturePath; // 0x48
		::UnityEngine::Color screenMapColor; // 0x50
		::System::Single BrightOpacity; // 0x60
		::System::Single ShowAnimOpacity; // 0x64
		::MoleMole::Config::ConfigBlockedChessPiece_BigTVType bigTVTpye; // 0x68
		::System::Nullable_1<::System::Boolean> overrideNoiseTrigger; // 0x6C
		::System::Boolean isTextureSheet; // 0x6E
		::System::Boolean EnableMultipleDisplay; // 0x6F
		::System::Nullable_1<::System::Single> overrideOpacity; // 0x70
		::UnityEngine::Vector2 MultipleDisplayOpacityRange; // 0x78
		::UnityEngine::Color noiseColor; // 0x80
		::System::Boolean noiseTrigger; // 0x90
		::System::Boolean isDynamicBrightness; // 0x91
		::System::Byte _padding0[0x2];
		::System::Nullable_1<::System::Single> overrideBrightness; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_screenMapTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_SCREENMAPTEXTURE_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_noiseTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_GET_NOISETEXTURE_OFFSET))(this);
		}

		::System::Boolean IsMapTextureValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGBLOCKEDCHESSPIECE_ISMAPTEXTUREVALID_OFFSET))(this);
		}
	};
}
