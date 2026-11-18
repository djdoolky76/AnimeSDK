#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CLJHJMDBICA.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFILTERMATERIAL__CTOR_OFFSET UNITYSDK_OFFSET(0x123F5670)

namespace Code::Logic::UI::UGUIExtensions::GalGameMaterialModifier
{
	inline static constexpr unsigned int GalGameFilterMaterial_TypeDefinitionIndex = 74900;

	class GalGameFilterMaterial : public ::System::Object
	{
	public:
		::CLJHJMDBICA filterType; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Material* material; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CODE_LOGIC_UI_UGUIEXTENSIONS_GALGAMEMATERIALMODIFIER_GALGAMEFILTERMATERIAL__CTOR_OFFSET))(this);
		}
	};
}
