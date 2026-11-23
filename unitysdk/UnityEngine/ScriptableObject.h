#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

namespace System { class Type; }

#define UNITYENGINE_SCRIPTABLEOBJECT_AC3D98D83D3AF3B8_OFFSET UNITYSDK_OFFSET(0x4156E50)
#define UNITYENGINE_SCRIPTABLEOBJECT_F4A64D969351E3BE_OFFSET UNITYSDK_OFFSET(0x4156EA0)
#define UNITYENGINE_SCRIPTABLEOBJECT_FB808718E6D05ACC_1_OFFSET UNITYSDK_OFFSET(0x4156E10)
#define UNITYENGINE_SCRIPTABLEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x4156EE0)

namespace UnityEngine
{
	inline static constexpr unsigned int ScriptableObject_TypeDefinitionIndex = 17417;

	class ScriptableObject : public ::UnityEngine::Object
	{
	public:
		static ::System::Void F4A64D969351E3BE(::UnityEngine::ScriptableObject* BD8273AB04C4B760)
		{
			return ((::System::Void(*)(::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_F4A64D969351E3BE_OFFSET))(BD8273AB04C4B760);
		}

		static ::UnityEngine::ScriptableObject* AC3D98D83D3AF3B8(::System::Type* A288CB28FC2A6DA3, ::System::Boolean FCBC0AD762E96555)
		{
			return ((::UnityEngine::ScriptableObject*(*)(::System::Type*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_AC3D98D83D3AF3B8_OFFSET))(A288CB28FC2A6DA3, FCBC0AD762E96555);
		}

		static ::UnityEngine::ScriptableObject* FB808718E6D05ACC_1(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::UnityEngine::ScriptableObject*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT_FB808718E6D05ACC_1_OFFSET))(A288CB28FC2A6DA3);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SCRIPTABLEOBJECT__CTOR_OFFSET))(this);
		}
	};
}
