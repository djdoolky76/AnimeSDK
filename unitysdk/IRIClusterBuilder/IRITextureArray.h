#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace System { class Object; }

#define IRICLUSTERBUILDER_IRITEXTUREARRAY_CTOR_OFFSET UNITYSDK_OFFSET(0x1651F030)

namespace IRIClusterBuilder
{
	inline static constexpr unsigned int IRITextureArray_TypeDefinitionIndex = 47751;

	class IRITextureArray : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Object*>* AlbedoMetalArray; // 0x18
		::Il2CppArray<::System::Object*>* NormalSmothTexArray; // 0x20
		::Il2CppArray<::System::Object*>* SpecialTexArray; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRICLUSTERBUILDER_IRITEXTUREARRAY_CTOR_OFFSET))(this);
		}

	};
}
