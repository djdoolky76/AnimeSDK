#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropComponent; }
namespace RPG::GameCore { class PropSpecialVisionConfig; }
namespace RPG::GameCore { class SetPropSpecialVisionConfig; }
namespace RPG::GameCore { class TaskContext; }

#define CEOLPPINFHP_AJKBANDMGCN_OFFSET UNITYSDK_OFFSET(0x188330E0)
#define CEOLPPINFHP_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0x18832E00)
#define CEOLPPINFHP_CTOR_OFFSET UNITYSDK_OFFSET(0x18832BA0)
#define CEOLPPINFHP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18832BD0)

inline static constexpr unsigned int CEOLPPINFHP_TypeDefinitionIndex = 59836;

	class CEOLPPINFHP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetPropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetPropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + CEOLPPINFHP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOLPPINFHP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AJKBANDMGCN(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::PropSpecialVisionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::PropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + CEOLPPINFHP_AJKBANDMGCN_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PropComponent* BOLJDDJDNII(::RPG::GameCore::PropSpecialVisionConfig* a1)
		{
			return ((::RPG::GameCore::PropComponent*(*)(::PVOID, ::RPG::GameCore::PropSpecialVisionConfig*))((::PBYTE)hIl2Cpp + CEOLPPINFHP_BOLJDDJDNII_OFFSET))(this, a1);
		}

	};
