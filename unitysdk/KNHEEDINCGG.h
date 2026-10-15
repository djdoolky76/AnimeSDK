#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class EraRegion; }
namespace RPG::GameCore { class InitEraFlipperRegion; }
namespace RPG::GameCore { class TaskContext; }

#define KNHEEDINCGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB584260)
#define KNHEEDINCGG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB584290)
#define KNHEEDINCGG__ONTASKBEGIN_B__1_0_OFFSET UNITYSDK_OFFSET(0xB584520)

inline static constexpr unsigned int KNHEEDINCGG_TypeDefinitionIndex = 52765;

	class KNHEEDINCGG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitEraFlipperRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitEraFlipperRegion*))((::PBYTE)hIl2Cpp + KNHEEDINCGG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNHEEDINCGG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean _OnTaskBegin_b__1_0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + KNHEEDINCGG__ONTASKBEGIN_B__1_0_OFFSET))(this, a1);
		}

	};
