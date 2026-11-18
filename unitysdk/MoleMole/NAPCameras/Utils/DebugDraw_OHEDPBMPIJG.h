#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_OHEDPBMPIJG__CTOR_OFFSET UNITYSDK_OFFSET(0x162ECB90)

namespace MoleMole::NAPCameras::Utils
{
	inline static constexpr unsigned int DebugDraw_OHEDPBMPIJG_TypeDefinitionIndex = 74828;

	class DebugDraw_OHEDPBMPIJG : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* EIFONLCJOPG; // 0x10
		::System::Int32 HACJFKBLODH; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NAPCAMERAS_UTILS_DEBUGDRAW_OHEDPBMPIJG__CTOR_OFFSET))(this);
		}
	};
}
