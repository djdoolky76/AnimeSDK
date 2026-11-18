#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJLOCEMJNK.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFogParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameLutParams; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameTextureBlendParams; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13281B10)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialState_TypeDefinitionIndex = 66343;

	class GalGameMaterialState : public ::System::Object
	{
	public:
		::DAJLOCEMJNK timeOfDay; // 0x10
		::System::Byte _padding0[0x4];
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFogParams* fog; // 0x18
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameLutParams* lut; // 0x20
		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameTextureBlendParams* textureBlend; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALSTATE__CTOR_OFFSET))(this);
		}
	};
}
