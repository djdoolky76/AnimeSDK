#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class VCameraNoiseCloseForBattleDataView; }

#define KOKIBNKJGHC_CTOR_OFFSET UNITYSDK_OFFSET(0xB59A760)
#define KOKIBNKJGHC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB59A790)

inline static constexpr unsigned int KOKIBNKJGHC_TypeDefinitionIndex = 55800;

	class KOKIBNKJGHC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::VCameraNoiseCloseForBattleDataView*))((::PBYTE)hIl2Cpp + KOKIBNKJGHC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOKIBNKJGHC_ONTASKBEGIN_OFFSET))(this);
		}

	};
