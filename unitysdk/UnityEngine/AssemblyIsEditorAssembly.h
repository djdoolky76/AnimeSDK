#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_ASSEMBLYISEDITORASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDA4570)

namespace UnityEngine
{
	inline static constexpr unsigned int AssemblyIsEditorAssembly_TypeDefinitionIndex = 5334;

	class AssemblyIsEditorAssembly : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ASSEMBLYISEDITORASSEMBLY__CTOR_OFFSET))(this);
		}
	};
}
