#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAJLOCEMJNK.h"
#include "unitysdk/HMOFNJMNKIF.h"
#include "unitysdk/System/Object.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialState; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK_JBMFHAPBOOD_OFFSET UNITYSDK_OFFSET(0x12B935B0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x12B935A0)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameWeatherBlock_TypeDefinitionIndex = 75852;

	class GalGameWeatherBlock : public ::System::Object
	{
	public:
		::HMOFNJMNKIF weatherType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState*>* states; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK__CTOR_OFFSET))(this);
		}

		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState* JBMFHAPBOOD(::DAJLOCEMJNK FNIOPKPHDEH)
		{
			return ((::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState*(*)(::PVOID, ::DAJLOCEMJNK))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEWEATHERBLOCK_JBMFHAPBOOD_OFFSET))(this, FNIOPKPHDEH);
		}
	};
}
