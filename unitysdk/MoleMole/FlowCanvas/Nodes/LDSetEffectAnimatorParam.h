#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBJHJEAAMBP.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETEFFECTANIMATORPARAM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1356D5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETEFFECTANIMATORPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1356D8F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetEffectAnimatorParam_TypeDefinitionIndex = 42565;

	class LDSetEffectAnimatorParam
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETEFFECTANIMATORPARAM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle entity, ::FBJHJEAAMBP paramType, ::System::String* paramName, ::System::Boolean boolValue, ::System::Int32 intValue, ::System::Single floatValue)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::FBJHJEAAMBP, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETEFFECTANIMATORPARAM_INVOKE_OFFSET))(this, entity, paramType, paramName, boolValue, intValue, floatValue);
		}
	};
}
