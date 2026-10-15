#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Material; }

#define RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_FNKPGGMPEGD_CTOR_OFFSET UNITYSDK_OFFSET(0xCCC6D80)

namespace RPG::Client
{
	inline static constexpr unsigned int DisableUIPostProcessBehaviour_FNKPGGMPEGD_TypeDefinitionIndex = 72761;

	class DisableUIPostProcessBehaviour_FNKPGGMPEGD : public ::System::Object
	{
	public:
		::UnityEngine::Material* IOPGBMHKHML; // 0x10
		::UnityEngine::Material* CHCCEGMKGON; // 0x18
		::System::Void _ctor(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DISABLEUIPOSTPROCESSBEHAVIOUR_FNKPGGMPEGD_CTOR_OFFSET))(this, a1);
		}

	};
}
