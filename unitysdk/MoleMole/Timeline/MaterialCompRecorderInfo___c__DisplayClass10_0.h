#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class MaterialInfo; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF1A890)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__DISPLAYCLASS10_0__RELOADMESHRENDERERCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x1FF1A8A0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialCompRecorderInfo___c__DisplayClass10_0_TypeDefinitionIndex = 32255;

	class MaterialCompRecorderInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::UnityEngine::Material* sourceMaterial; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _ReloadMeshRendererChange_b__0(::MoleMole::Timeline::MaterialInfo* mInfo)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::MaterialInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__DISPLAYCLASS10_0__RELOADMESHRENDERERCHANGE_B__0_OFFSET))(this, mInfo);
		}
	};
}
