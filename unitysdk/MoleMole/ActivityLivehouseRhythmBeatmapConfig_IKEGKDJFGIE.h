#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class Note; }
namespace System { class String; }

#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IKEGKDJFGIE_GDHLCBOHEDB_OFFSET UNITYSDK_OFFSET(0xFA845C0)
#define MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IKEGKDJFGIE__CTOR_OFFSET UNITYSDK_OFFSET(0xFA845B0)

namespace MoleMole
{
	inline static constexpr unsigned int ActivityLivehouseRhythmBeatmapConfig_IKEGKDJFGIE_TypeDefinitionIndex = 71995;

	class ActivityLivehouseRhythmBeatmapConfig_IKEGKDJFGIE : public ::System::Object
	{
	public:
		::System::String* LDJKLFLLGPA; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IKEGKDJFGIE__CTOR_OFFSET))(this);
		}

		::System::Boolean GDHLCBOHEDB(::MoleMole::Note* KBNHAJHPKPO)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Note*))((::PBYTE)hIl2Cpp + MOLEMOLE_ACTIVITYLIVEHOUSERHYTHMBEATMAPCONFIG_IKEGKDJFGIE_GDHLCBOHEDB_OFFSET))(this, KBNHAJHPKPO);
		}
	};
}
