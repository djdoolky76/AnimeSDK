#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class RuntimeMaterialInfo; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MFGNEMENLAB_NPOPFHPAKDP_OFFSET UNITYSDK_OFFSET(0x162F9330)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MFGNEMENLAB__CTOR_OFFSET UNITYSDK_OFFSET(0x162F9320)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialCompRecorderInfo_MFGNEMENLAB_TypeDefinitionIndex = 45104;

	class RuntimeMaterialCompRecorderInfo_MFGNEMENLAB : public ::System::Object
	{
	public:
		::UnityEngine::Material* MPHJEOLEBJH; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MFGNEMENLAB__CTOR_OFFSET))(this);
		}

		::System::Boolean NPOPFHPAKDP(::MoleMole::Timeline::RuntimeMaterialInfo* CEMICKABLND)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Timeline::RuntimeMaterialInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALCOMPRECORDERINFO_MFGNEMENLAB_NPOPFHPAKDP_OFFSET))(this, CEMICKABLND);
		}
	};
}
