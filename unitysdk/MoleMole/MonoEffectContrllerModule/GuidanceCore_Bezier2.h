#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceCoreBase.h"

class GPMDLEDECJN;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x13EEFEC0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2__CTOR_OFFSET UNITYSDK_OFFSET(0x13EF0080)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2___BASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x13EF0090)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCore_Bezier2_TypeDefinitionIndex = 66553;

	class GuidanceCore_Bezier2 : public ::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase
	{
	public:
		::System::Single TimeToTurn; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* NoiseConfig; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2__CTOR_OFFSET))(this);
		}

		::GPMDLEDECJN* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2_GENERATEPATH_OFFSET))(this, controller);
		}

		::GPMDLEDECJN* __base_GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* P0)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER2___BASE_GENERATEPATH_OFFSET))(this, P0);
		}
	};
}
