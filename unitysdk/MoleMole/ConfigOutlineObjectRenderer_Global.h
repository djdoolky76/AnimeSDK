#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::DataStructures::Common { class OptionalBool; }
namespace MoleMole::DataStructures::Common { class OptionalColor; }
namespace MoleMole::DataStructures::Common { class OptionalFloat; }
namespace UnityEngine::Rendering::Universal::Internal { class OutlineObjectRenderer; }

#define MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_GLOBAL_JLIMOLHLFAK_OFFSET UNITYSDK_OFFSET(0x103E3830)
#define MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_GLOBAL__CTOR_OFFSET UNITYSDK_OFFSET(0x103E3700)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOutlineObjectRenderer_Global_TypeDefinitionIndex = 49648;

	class ConfigOutlineObjectRenderer_Global : public ::System::Object
	{
	public:
		::MoleMole::DataStructures::Common::OptionalFloat* OutlineThickness; // 0x10
		::MoleMole::DataStructures::Common::OptionalBool* DisableOutline; // 0x18
		::MoleMole::DataStructures::Common::OptionalBool* FillInner; // 0x20
		::MoleMole::DataStructures::Common::OptionalBool* FillInnerBehindScene; // 0x28
		::MoleMole::DataStructures::Common::OptionalColor* InnerColor; // 0x30
		::MoleMole::DataStructures::Common::OptionalFloat* InnerColorIntensity; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_GLOBAL__CTOR_OFFSET))(this);
		}

		::System::Void JLIMOLHLFAK(::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer* GAEIPOICOLD)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::Internal::OutlineObjectRenderer*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGOUTLINEOBJECTRENDERER_GLOBAL_JLIMOLHLFAK_OFFSET))(this, GAEIPOICOLD);
		}
	};
}
