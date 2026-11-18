#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Texture2D; }

#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HAHHJIPGPKM_LGBFHIOGJDC_OFFSET UNITYSDK_OFFSET(0x19CEA5A0)
#define MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HAHHJIPGPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CEA590)

namespace MoleMole
{
	inline static constexpr unsigned int ScreenPlayer_TextureSheet_HAHHJIPGPKM_TypeDefinitionIndex = 46483;

	class ScreenPlayer_TextureSheet_HAHHJIPGPKM : public ::System::Object
	{
	public:
		::System::Action_2<::UnityEngine::Texture2D*, ::Foundation::AssetRequestHandle>* IBNICCGMILF; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HAHHJIPGPKM__CTOR_OFFSET))(this);
		}

		::System::Void LGBFHIOGJDC(::UnityEngine::Object* NGLKIKLLLFL, ::Foundation::AssetRequestHandle PHHDHIBOCKA)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Object*, ::Foundation::AssetRequestHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_SCREENPLAYER_TEXTURESHEET_HAHHJIPGPKM_LGBFHIOGJDC_OFFSET))(this, NGLKIKLLLFL, PHHDHIBOCKA);
		}
	};
}
