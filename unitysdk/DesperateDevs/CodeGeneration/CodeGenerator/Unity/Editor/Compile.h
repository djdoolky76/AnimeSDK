#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DESPERATEDEVS_CODEGENERATION_CODEGENERATOR_UNITY_EDITOR_COMPILE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF17760)

namespace DesperateDevs::CodeGeneration::CodeGenerator::Unity::Editor
{
	class Compile : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DESPERATEDEVS_CODEGENERATION_CODEGENERATOR_UNITY_EDITOR_COMPILE_CTOR_OFFSET))(this);
		}

	};
}
