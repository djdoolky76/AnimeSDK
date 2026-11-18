#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_SHADERGENERATECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D5D220)

namespace MoleMole
{
	inline static constexpr unsigned int ShaderGenerateConfig_TypeDefinitionIndex = 63068;

	class ShaderGenerateConfig : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ignoreKeywords; // 0x10
		::Il2CppArray<::System::String*>* ignoreShaderNames; // 0x18
		::Il2CppArray<::System::String*>* ignoreWarmupShaders; // 0x20
		::Il2CppArray<::System::String*>* ignorePipelines; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SHADERGENERATECONFIG__CTOR_OFFSET))(this);
		}
	};
}
