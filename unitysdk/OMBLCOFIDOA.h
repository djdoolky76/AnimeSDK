#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class SetDynamicValueByBattleTargetParam; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }

#define OMBLCOFIDOA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF12620)
#define OMBLCOFIDOA_LAPFHJPBOED_OFFSET UNITYSDK_OFFSET(0xBF126F0)
#define OMBLCOFIDOA_NOICODFGEIE_OFFSET UNITYSDK_OFFSET(0xBF12830)
#define OMBLCOFIDOA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF12650)

inline static constexpr unsigned int OMBLCOFIDOA_TypeDefinitionIndex = 55413;

	class OMBLCOFIDOA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetDynamicValueByBattleTargetParam* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetDynamicValueByBattleTargetParam*))((::PBYTE)hIl2Cpp + OMBLCOFIDOA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMBLCOFIDOA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean LAPFHJPBOED(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMBLCOFIDOA_LAPFHJPBOED_OFFSET))(this, a1, a2);
		}

		::System::Void NOICODFGEIE(::System::String* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + OMBLCOFIDOA_NOICODFGEIE_OFFSET))(this, a1, a2);
		}

	};
