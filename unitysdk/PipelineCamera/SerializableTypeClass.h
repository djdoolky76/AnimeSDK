#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define PIPELINECAMERA_SERIALIZABLETYPECLASS_GETTYPECLASS_OFFSET UNITYSDK_OFFSET(0x1EFCF7E0)
#define PIPELINECAMERA_SERIALIZABLETYPECLASS_SETTYPECLASS_OFFSET UNITYSDK_OFFSET(0x1EFCF8D0)
#define PIPELINECAMERA_SERIALIZABLETYPECLASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFCF950)

namespace PipelineCamera
{
	inline static constexpr unsigned int SerializableTypeClass_TypeDefinitionIndex = 36367;

	class SerializableTypeClass : public ::System::Object
	{
	public:
		::System::String* assemblyQualifiedName; // 0x10
		::System::Type* _cachedType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLETYPECLASS__CTOR_OFFSET))(this);
		}

		::System::Type* GetTypeClass()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLETYPECLASS_GETTYPECLASS_OFFSET))(this);
		}

		::System::Void SetTypeClass(::System::Type* inputType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SERIALIZABLETYPECLASS_SETTYPECLASS_OFFSET))(this, inputType);
		}
	};
}
