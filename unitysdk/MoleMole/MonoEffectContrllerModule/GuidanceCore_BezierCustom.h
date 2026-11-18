#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceCoreBase.h"

class GPMDLEDECJN;
namespace MoleMole { class BezierCurve; }
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIERCUSTOM_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x1A917330)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIERCUSTOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9175D0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIERCUSTOM___BASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x1A9175E0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCore_BezierCustom_TypeDefinitionIndex = 80735;

	class GuidanceCore_BezierCustom : public ::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase
	{
	public:
		::MoleMole::BezierCurve* Curve; // 0x10
		::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* NoiseConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIERCUSTOM__CTOR_OFFSET))(this);
		}

		::GPMDLEDECJN* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIERCUSTOM_GENERATEPATH_OFFSET))(this, controller);
		}

		::GPMDLEDECJN* __base_GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* P0)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIERCUSTOM___BASE_GENERATEPATH_OFFSET))(this, P0);
		}
	};
}
