#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_BIGSCENETELESCOPEPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x165104E0)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneTelescopePageContext_TypeDefinitionIndex = 72743;

	class BigSceneTelescopePageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* TelescopeConfigKey; // 0x28
		::UnityEngine::Vector3 Position; // 0x30
		::System::Single FarClip; // 0x3C
		::System::Single NeraClip; // 0x40
		::UnityEngine::Quaternion Rotation; // 0x44
		::System::Int32 Fov; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENETELESCOPEPAGECONTEXT__CTOR_OFFSET))(this);
		}
	};
}
