#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StateTreeCore/StateTreeRunStatus.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"
#include "unitysdk/StateTreeCore/StateTreeDataView.h"
#include "unitysdk/StateTreeCore/StateTreeExecutionContext.h"
#include "unitysdk/StateTreeCore/StateTreeTransitionResult.h"
#include "unitysdk/StateTreeGameplay/UpdateValueBoolTask.h"
#include "unitysdk/UnrealTypes/TObjectHandle_1.h"

namespace UnrealTypes { class Struct; }

#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_COMPILE_OFFSET UNITYSDK_OFFSET(0x1C680DA0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_ENTERSTATE_OFFSET UNITYSDK_OFFSET(0x1C680FB0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_EXITSTATE_OFFSET UNITYSDK_OFFSET(0x1C6810C0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x1C680EC0)
#define STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_TICK_OFFSET UNITYSDK_OFFSET(0x1C6811D0)

namespace StateTreeGameplay
{
	inline static constexpr unsigned int VirtualFunctionExtensions_UpdateValueBoolTask_TypeDefinitionIndex = 56808;

	class VirtualFunctionExtensions_UpdateValueBoolTask : public ::System::Object
	{
	public:
		static ::UnrealTypes::DataValidationResult Compile(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_COMPILE_OFFSET))(self, instanceDataView);
		}

		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::StateTreeGameplay::UpdateValueBoolTask& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::StateTreeGameplay::UpdateValueBoolTask&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_GETINSTANCEDATATYPE_OFFSET))(self);
		}

		static ::StateTreeCore::StateTreeRunStatus EnterState(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_ENTERSTATE_OFFSET))(self, context, transition);
		}

		static ::System::Void ExitState(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::StateTreeCore::StateTreeTransitionResult& transition)
		{
			return ((::System::Void(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeExecutionContext&, ::StateTreeCore::StateTreeTransitionResult&))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_EXITSTATE_OFFSET))(self, context, transition);
		}

		static ::StateTreeCore::StateTreeRunStatus Tick(::StateTreeGameplay::UpdateValueBoolTask& self, ::StateTreeCore::StateTreeExecutionContext& context, ::System::Single deltaTime)
		{
			return ((::StateTreeCore::StateTreeRunStatus(*)(::StateTreeGameplay::UpdateValueBoolTask&, ::StateTreeCore::StateTreeExecutionContext&, ::System::Single))((::PBYTE)hIl2Cpp + STATETREEGAMEPLAY_VIRTUALFUNCTIONEXTENSIONS_UPDATEVALUEBOOLTASK_TICK_OFFSET))(self, context, deltaTime);
		}
	};
}
