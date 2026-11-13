#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyShieldMax; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define DNMKKIAIIKL_AKIPEOABOEO_OFFSET UNITYSDK_OFFSET(0x19197500)
#define DNMKKIAIIKL_CTOR_OFFSET UNITYSDK_OFFSET(0x191970E0)
#define DNMKKIAIIKL_DOFALKFLIME_OFFSET UNITYSDK_OFFSET(0x191978A0)
#define DNMKKIAIIKL_JNAMCLDMIID_OFFSET UNITYSDK_OFFSET(0x19197680)
#define DNMKKIAIIKL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19197130)

inline static constexpr unsigned int DNMKKIAIIKL_TypeDefinitionIndex = 56390;

	class DNMKKIAIIKL
	{
	public:
		::RPG::GameCore::GameEntity* NAFJJEABEMI; // 0x28
		::RPG::GameCore::StringHash PBCKLHILNAD; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyShieldMax* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyShieldMax*))((::PBYTE)hIl2Cpp + DNMKKIAIIKL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNMKKIAIIKL_ONTASKBEGIN_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint AKIPEOABOEO(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::TurnBasedModifierInstance* a2)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + DNMKKIAIIKL_AKIPEOABOEO_OFFSET))(this, a1, a2);
		}

		::System::Void JNAMCLDMIID(::RPG::GameCore::TurnBasedModifierInstance* a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + DNMKKIAIIKL_JNAMCLDMIID_OFFSET))(this, a1, a2);
		}

		::System::Boolean DOFALKFLIME(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + DNMKKIAIIKL_DOFALKFLIME_OFFSET))(this, a1);
		}

	};
