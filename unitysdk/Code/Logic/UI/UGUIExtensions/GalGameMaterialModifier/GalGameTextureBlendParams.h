#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFCMPLCMKBH.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine { class Texture2D; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMETEXTUREBLENDPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x16890140)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameTextureBlendParams_TypeDefinitionIndex = 73992;

	class GalGameTextureBlendParams : public ::System::Object
	{
	public:
		::System::Boolean useTextureBlend; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Color textureColor; // 0x14
		::System::Byte _padding1[0x4];
		::UnityEngine::Texture2D* textureBlendTex; // 0x28
		::PFCMPLCMKBH textureBlendMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMETEXTUREBLENDPARAMS__CTOR_OFFSET))(this);
		}
	};
}
