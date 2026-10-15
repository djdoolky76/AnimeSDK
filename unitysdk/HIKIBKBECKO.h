#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/LittleGame/RoadRash/ProjectileHitEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/MonoEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/MonoSpeedEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/ProjectileAutoEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashGameSettingsConfigure_ImpactEffectConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashObstacleImpactVisualOverrideConfig.h"
#include "unitysdk/RPG/Client/RoadRash/RoadRashObstacleTriggerEffectConfig.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define HIKIBKBECKO_EHFLDBMLBPM_1_OFFSET UNITYSDK_OFFSET(0x15CF0660)
#define HIKIBKBECKO_EHFLDBMLBPM_2_OFFSET UNITYSDK_OFFSET(0x15CF0740)
#define HIKIBKBECKO_EHFLDBMLBPM_3_OFFSET UNITYSDK_OFFSET(0x15CF0880)
#define HIKIBKBECKO_EHFLDBMLBPM_4_OFFSET UNITYSDK_OFFSET(0x15CF0930)
#define HIKIBKBECKO_EHFLDBMLBPM_5_OFFSET UNITYSDK_OFFSET(0x15CF0A20)
#define HIKIBKBECKO_EHFLDBMLBPM_6_OFFSET UNITYSDK_OFFSET(0x15CF0AF0)
#define HIKIBKBECKO_EHFLDBMLBPM_7_OFFSET UNITYSDK_OFFSET(0x15CF0BD0)
#define HIKIBKBECKO_EHFLDBMLBPM_8_OFFSET UNITYSDK_OFFSET(0x15CF0CC0)
#define HIKIBKBECKO_EHFLDBMLBPM_9_OFFSET UNITYSDK_OFFSET(0x15CF0DB0)
#define HIKIBKBECKO_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0x15CF05B0)

inline static constexpr unsigned int HIKIBKBECKO_TypeDefinitionIndex = 75884;

	class HIKIBKBECKO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_1(::RPG::Client::RoadRash::MonoEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::MonoEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_1_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_2(::RPG::Client::RoadRash::MonoSpeedEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::MonoSpeedEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_2_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_3(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RoadRash::MonoEffectConfig>* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::Collections::Generic::IEnumerable_1<::RPG::Client::RoadRash::MonoEffectConfig>*))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_3_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_4(::RPG::Client::RoadRash::ProjectileAutoEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::ProjectileAutoEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_4_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_5(::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::LittleGame::RoadRash::ProjectileHitEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_5_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_6(::RPG::Client::RoadRash::RoadRashObstacleTriggerEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::RoadRashObstacleTriggerEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_6_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_7(::RPG::Client::RoadRash::RoadRashObstacleImpactVisualOverrideConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::RoadRashObstacleImpactVisualOverrideConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_7_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_8(::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_ImpactEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_8_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* EHFLDBMLBPM_9(::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig))((::PBYTE)hIl2Cpp + HIKIBKBECKO_EHFLDBMLBPM_9_OFFSET))(a1);
		}

	};
