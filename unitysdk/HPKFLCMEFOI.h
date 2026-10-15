#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UITopEffectType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define HPKFLCMEFOI_CTOR_OFFSET UNITYSDK_OFFSET(0x15DD14A0)

inline static constexpr unsigned int HPKFLCMEFOI_TypeDefinitionIndex = 55769;

	class HPKFLCMEFOI : public ::System::Object
	{
	public:
		::RPG::GameCore::TurnBasedModifierInstance* EAEJGPLLGMI; // 0x10
		::RPG::GameCore::UITopEffectType DLMINHHKKMK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPKFLCMEFOI_CTOR_OFFSET))(this);
		}

	};
