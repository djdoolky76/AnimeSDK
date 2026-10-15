#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HPDetailParamType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class BIEFKHPDHPI;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }

#define BDDPIDAILDC_CTOR_OFFSET UNITYSDK_OFFSET(0x162F3480)
#define BDDPIDAILDC_HFGOIJELOAF_OFFSET UNITYSDK_OFFSET(0x162F3860)
#define BDDPIDAILDC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x162F3560)

inline static constexpr unsigned int BDDPIDAILDC_TypeDefinitionIndex = 55443;

	class BDDPIDAILDC
	{
	public:
		::RPG::GameCore::StringHash DIJHOMCLPEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::BIEFKHPDHPI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::BIEFKHPDHPI*))((::PBYTE)hIl2Cpp + BDDPIDAILDC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDDPIDAILDC_ONTASKBEGIN_OFFSET))(this);
		}

		static ::RPG::GameCore::FixPoint HFGOIJELOAF(::RPG::GameCore::TurnBasedAbilityComponent* a1, ::RPG::GameCore::HPDetailParamType a2, ::System::Int32 a3)
		{
			return ((::RPG::GameCore::FixPoint(*)(::RPG::GameCore::TurnBasedAbilityComponent*, ::RPG::GameCore::HPDetailParamType, ::System::Int32))((::PBYTE)hIl2Cpp + BDDPIDAILDC_HFGOIJELOAF_OFFSET))(a1, a2, a3);
		}

	};
