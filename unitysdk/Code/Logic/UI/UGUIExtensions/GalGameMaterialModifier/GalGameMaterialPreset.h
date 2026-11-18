#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJHJMDBICA.h"
#include "unitysdk/DAJLOCEMJNK.h"
#include "unitysdk/HMOFNJMNKIF.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameFilterMaterial; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameMaterialState; }
namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier { class GalGameWeatherBlock; }
namespace UnityEngine { class Material; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_HGIHAPHMKDH_OFFSET UNITYSDK_OFFSET(0x1497EA10)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_JBMFHAPBOOD_OFFSET UNITYSDK_OFFSET(0x1497EA90)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_LCCLFDBJAHG_OFFSET UNITYSDK_OFFSET(0x1497EBD0)
#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET__CTOR_OFFSET UNITYSDK_OFFSET(0x1497E9B0)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameMaterialPreset_TypeDefinitionIndex = 44958;

	class GalGameMaterialPreset : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameFilterMaterial*>* filterMaterials; // 0x18
		::Il2CppArray<::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameWeatherBlock*>* weatherBlocks; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET__CTOR_OFFSET))(this);
		}

		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameWeatherBlock* HGIHAPHMKDH(::HMOFNJMNKIF GHPGIDAMMOP)
		{
			return ((::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameWeatherBlock*(*)(::PVOID, ::HMOFNJMNKIF))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_HGIHAPHMKDH_OFFSET))(this, GHPGIDAMMOP);
		}

		::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState* JBMFHAPBOOD(::HMOFNJMNKIF POOEILFGMAO, ::DAJLOCEMJNK FNIOPKPHDEH)
		{
			return ((::Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier::GalGameMaterialState*(*)(::PVOID, ::HMOFNJMNKIF, ::DAJLOCEMJNK))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_JBMFHAPBOOD_OFFSET))(this, POOEILFGMAO, FNIOPKPHDEH);
		}

		::UnityEngine::Material* LCCLFDBJAHG(::CLJHJMDBICA GKNBCPNBFLH)
		{
			return ((::UnityEngine::Material*(*)(::PVOID, ::CLJHJMDBICA))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEMATERIALPRESET_LCCLFDBJAHG_OFFSET))(this, GKNBCPNBFLH);
		}
	};
}
