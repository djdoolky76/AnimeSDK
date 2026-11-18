#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/EndShape.h"
#include "unitysdk/MoleMole/MonoEffectContrllerModule/GuidanceCoreBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class GPMDLEDECJN;
namespace MoleMole::MonoEffectContrllerModule { class MonoEffectPluginController_MGNEBGDIIEO; }
namespace MoleMole::MonoEffectContrllerModule { class PerlinNoiseConfig; }

#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x14AF93C0)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF9F90)
#define MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3___BASE_GENERATEPATH_OFFSET UNITYSDK_OFFSET(0x14AF9FB0)

namespace MoleMole::MonoEffectContrllerModule
{
	inline static constexpr unsigned int GuidanceCore_Bezier3_TypeDefinitionIndex = 42768;

	class GuidanceCore_Bezier3 : public ::MoleMole::MonoEffectContrllerModule::GuidanceCoreBase
	{
	public:
		::System::Single MininBezierAngle; // 0x10
		::System::Single ExtBezierAngle; // 0x14
		::System::Single TimeToTurn; // 0x18
		::UnityEngine::Quaternion Rotation; // 0x1C
		::System::Single OffsetLength; // 0x2C
		::System::Boolean EnableEndControlRandom; // 0x30
		::System::Byte _padding0[0x3];
		::MoleMole::MonoEffectContrllerModule::EndShape OffsetShape; // 0x34
		::MoleMole::MonoEffectContrllerModule::PerlinNoiseConfig* NoiseConfig; // 0x50
		::System::Boolean AutoRaising; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3__CTOR_OFFSET))(this);
		}

		::GPMDLEDECJN* GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* controller)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3_GENERATEPATH_OFFSET))(this, controller);
		}

		::GPMDLEDECJN* __base_GeneratePath(::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO* P0)
		{
			return ((::GPMDLEDECJN*(*)(::PVOID, ::MoleMole::MonoEffectContrllerModule::MonoEffectPluginController_MGNEBGDIIEO*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTCONTRLLERMODULE_GUIDANCECORE_BEZIER3___BASE_GENERATEPATH_OFFSET))(this, P0);
		}
	};
}
