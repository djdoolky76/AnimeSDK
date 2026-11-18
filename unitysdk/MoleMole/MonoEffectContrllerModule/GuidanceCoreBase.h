#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPMDLEDECJN;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x162DC270)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x162DC2C0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCoreBase_TypeDefinitionIndex = 66192;

	class GuidanceCoreBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE__CTOR_OFFSET))(this);
		}

		::GPMDLEDECJN* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECOREBASE_GENERATEPATH_OFFSET))(this, controller);
		}
	};
}
