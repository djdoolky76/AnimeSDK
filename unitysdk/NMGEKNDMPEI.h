#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_And; }

#define NMGEKNDMPEI_CTOR_OFFSET UNITYSDK_OFFSET(0x1C79CDC0)
#define NMGEKNDMPEI_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C79CDE0)

inline static constexpr unsigned int NMGEKNDMPEI_TypeDefinitionIndex = 36363;

	class NMGEKNDMPEI : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_And* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_And* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_And*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + NMGEKNDMPEI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGEKNDMPEI_KFGJEKJHIMB_OFFSET))(this);
		}

	};
