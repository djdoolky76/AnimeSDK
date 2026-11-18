#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CUTSCENEMATERIALSHADERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD8B300)

inline static constexpr unsigned int CutsceneMaterialShaderConfig_TypeDefinitionIndex = 32192;

class CutsceneMaterialShaderConfig : public ::UnityEngine::ScriptableObject
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* Properties; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUTSCENEMATERIALSHADERCONFIG__CTOR_OFFSET))(this);
	}
};
