#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHOHBHGLHHF.h"
class EGDGOMKKEJI;
namespace RPG::GameCore { class DiceCombatPredicateConfig_HasCustomValue; }

#define GLDEKCPPOLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6471F0)
#define GLDEKCPPOLF_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1C647210)

	class GLDEKCPPOLF : public ::HHOHBHGLHHF
	{
	public:
		::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* IGHAHBNLIJA; // 0x30
		::System::Void _ctor(::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue* a1, ::EGDGOMKKEJI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatPredicateConfig_HasCustomValue*, ::EGDGOMKKEJI*))((::PBYTE)hIl2Cpp + GLDEKCPPOLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean KFGJEKJHIMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLDEKCPPOLF_KFGJEKJHIMB_OFFSET))(this);
		}

	};
