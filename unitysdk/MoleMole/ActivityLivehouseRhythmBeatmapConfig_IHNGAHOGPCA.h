#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class EventRange; }
namespace System { class String; }

#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IHNGAHOGPCA_BJOGDADKGAP_OFFSET UNITYSDK_OFFSET(0x1274F670)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IHNGAHOGPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1274F4D0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityLivehouseRhythmBeatmapConfig_IHNGAHOGPCA_TypeDefinitionIndex = 71994;

	class ActivityLivehouseRhythmBeatmapConfig_IHNGAHOGPCA : public ::System::Object
	{
	public:
		::System::String* LDJKLFLLGPA; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IHNGAHOGPCA__CTOR_OFFSET))(this);
		}

		::System::Boolean BJOGDADKGAP(::MoleMole::EventRange* NFFNEFLKPDG)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::EventRange*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IHNGAHOGPCA_BJOGDADKGAP_OFFSET))(this, NFFNEFLKPDG);
		}
	};
}
