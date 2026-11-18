#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Object; }

#define COFFEE_UIPARTICLEEXTENSIONS_MISC_DESTROYIMMEDIATE_OFFSET UNITYSDK_OFFSET(0x1E20F130)
#define COFFEE_UIPARTICLEEXTENSIONS_MISC_DESTROY_OFFSET UNITYSDK_OFFSET(0x1E1E0310)

namespace Coffee::UIParticleExtensions
{
	inline static constexpr unsigned int Misc_TypeDefinitionIndex = 34397;

	class Misc : public ::System::Object
	{
	public:
		static ::System::Void Destroy(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MISC_DESTROY_OFFSET))(obj);
		}

		static ::System::Void DestroyImmediate(::UnityEngine::Object* obj)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEEXTENSIONS_MISC_DESTROYIMMEDIATE_OFFSET))(obj);
		}
	};
}
