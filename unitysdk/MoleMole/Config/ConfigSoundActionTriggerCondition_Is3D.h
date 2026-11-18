#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_EVALUATE_OFFSET UNITYSDK_OFFSET(0x192AAF30)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x192AAEF0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_IS3DEMITTER_OFFSET UNITYSDK_OFFSET(0x192AAF90)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D__CTOR_OFFSET UNITYSDK_OFFSET(0x192AB240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_Is3D_TypeDefinitionIndex = 47324;

	class ConfigSoundActionTriggerCondition_Is3D : public ::System::Object
	{
	public:
		::System::Boolean invert; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_EVALUATE_OFFSET))(this, context);
		}

		static ::System::Boolean Is3DEmitter(::EIOKLKEJAME* context)
		{
			return ((::System::Boolean(*)(::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_IS3D_IS3DEMITTER_OFFSET))(context);
		}
	};
}
