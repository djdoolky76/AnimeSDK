#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class HDCEBDFNFAF;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define MOLEMOLE_UITAGCOMPONENT_SETHINT_OFFSET UNITYSDK_OFFSET(0x188DE5E0)
#define MOLEMOLE_UITAGCOMPONENT_SETTAG_OFFSET UNITYSDK_OFFSET(0x188DE2E0)
#define MOLEMOLE_UITAGCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x188DE6D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITagComponent_TypeDefinitionIndex = 65098;

	class UITagComponent : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* _tagIcon; // 0x18
		::UnityEngine::UI::Text* _tagParam; // 0x20
		::UnityEngine::GameObject* lvGO; // 0x28
		::HDCEBDFNFAF* LJIDALLDGNM; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAGCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void SetTag(::System::Int32 BBOLKIABJHA, ::MoleMole::UIBaseController* JNLBPMKIFNK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAGCOMPONENT_SETTAG_OFFSET))(this, BBOLKIABJHA, JNLBPMKIFNK);
		}

		::System::Void SetHint(::System::Int32 AILNGKFDMFI, ::MoleMole::UIBaseController* JNLBPMKIFNK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITAGCOMPONENT_SETHINT_OFFSET))(this, AILNGKFDMFI, JNLBPMKIFNK);
		}
	};
}
