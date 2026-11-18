#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }

#define UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x2005BD50)
#define UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSSTARTED_OFFSET UNITYSDK_OFFSET(0x2005BCA0)
#define UNITYENGINE_SUBSYSTEMMANAGER_REPORTSINGLESUBSYSTEMANALYTICS_OFFSET UNITYSDK_OFFSET(0x2005B130)
#define UNITYENGINE_SUBSYSTEMMANAGER_STATICCONSTRUCTSCRIPTINGCLASSMAP_OFFSET UNITYSDK_OFFSET(0x2005BC90)
#define UNITYENGINE_SUBSYSTEMMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x2005BC80)

namespace UnityEngine
{
	inline static constexpr unsigned int SubsystemManager_TypeDefinitionIndex = 18331;

	class SubsystemManager : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet_reloadSubsytemsStarted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SubsystemManager_TypeDefinitionIndex)->GetStaticField(0x86A0);
		}
		static ::System::Action** StaticGet_reloadSubsytemsCompleted()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(SubsystemManager_TypeDefinitionIndex)->GetStaticField(0x86A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void ReportSingleSubsystemAnalytics(::System::String* id)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_REPORTSINGLESUBSYSTEMANALYTICS_OFFSET))(id);
		}

		static ::System::Void StaticConstructScriptingClassMap()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_STATICCONSTRUCTSCRIPTINGCLASSMAP_OFFSET))();
		}

		static ::System::Void Internal_ReloadSubsystemsStarted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSSTARTED_OFFSET))();
		}

		static ::System::Void Internal_ReloadSubsystemsCompleted()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_SUBSYSTEMMANAGER_INTERNAL_RELOADSUBSYSTEMSCOMPLETED_OFFSET))();
		}
	};
}
