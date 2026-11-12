#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DESPERATEDEVS_CODEGENERATION_CODEGENERATOR_UNITY_EDITOR_COMPILE_CTOR_OFFSET UNITYSDK_OFFSET(0xB578760)

namespace DesperateDevs::CodeGeneration::CodeGenerator::Unity::Editor
{
	inline static constexpr unsigned int Compile_TypeDefinitionIndex = 48060;

	class Compile : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESPERATEDEVS_CODEGENERATION_CODEGENERATOR_UNITY_EDITOR_COMPILE_CTOR_OFFSET))(this);
		}

	};
}
