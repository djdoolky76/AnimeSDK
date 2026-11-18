#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EIOKLKEJAME;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x12783640)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_GCHDLMPKEKM_OFFSET UNITYSDK_OFFSET(0x127838C0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_GET_INSPECTORLABEL_OFFSET UNITYSDK_OFFSET(0x12783600)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x12783970)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundActionTriggerCondition_SceneTag_TypeDefinitionIndex = 82456;

	class ConfigSoundActionTriggerCondition_SceneTag : public ::System::Object
	{
	public:
		::System::String* tag; // 0x10
		::System::Boolean invert; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG__CTOR_OFFSET))(this);
		}

		::System::String* get_InspectorLabel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_GET_INSPECTORLABEL_OFFSET))(this);
		}

		::System::Boolean Evaluate(::EIOKLKEJAME* AAOCANGHBDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIOKLKEJAME*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_EVALUATE_OFFSET))(this, AAOCANGHBDG);
		}

		static ::System::Boolean GCHDLMPKEKM(::System::Collections::Generic::HashSet_1<::System::String*>* AFLNCCHFFNI, ::System::Collections::Generic::HashSet_1<::System::String*>* LDDDCANBLBD, ::System::String* IMLLDOHDCNC)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTIONTRIGGERCONDITION_SCENETAG_GCHDLMPKEKM_OFFSET))(AFLNCCHFFNI, LDDDCANBLBD, IMLLDOHDCNC);
		}
	};
}
