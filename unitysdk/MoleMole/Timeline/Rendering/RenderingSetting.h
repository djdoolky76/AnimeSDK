#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x17E78CD0)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_CFCBGEGKBFH_OFFSET UNITYSDK_OFFSET(0x17E78880)
#define MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x17E78870)

namespace MoleMole::Timeline::Rendering
{
	inline static constexpr unsigned int RenderingSetting_TypeDefinitionIndex = 41022;

	class RenderingSetting : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 hizParams; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING__CTOR_OFFSET))(this);
		}

		::System::Void CFCBGEGKBFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_CFCBGEGKBFH_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RENDERING_RENDERINGSETTING_BBOMJDBNHIC_OFFSET))(this);
		}
	};
}
