#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPFGOGOLBI.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"
namespace RPG::GameCore { class GameEntity; }

#define IEBMEBKOHOL_CTOR_OFFSET UNITYSDK_OFFSET(0x15EE8340)
#define IEBMEBKOHOL_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15EE8100)
#define IEBMEBKOHOL_EFKLLLLPAJH_OFFSET UNITYSDK_OFFSET(0x15EE80F0)
#define IEBMEBKOHOL_FIEEJEENGED_OFFSET UNITYSDK_OFFSET(0x15EE8330)
#define IEBMEBKOHOL_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x15EE8280)

inline static constexpr unsigned int IEBMEBKOHOL_TypeDefinitionIndex = 53748;

	class IEBMEBKOHOL : public ::GJPFGOGOLBI
	{
	public:
		::RPG::GameCore::GameEntity* LNMHEJNFCJD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBMEBKOHOL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::RtModifierBehaviorLifeBinding EFKLLLLPAJH()
		{
			return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBMEBKOHOL_EFKLLLLPAJH_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBMEBKOHOL_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBMEBKOHOL_NLBNJGKAMII_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIEEJEENGED()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBMEBKOHOL_FIEEJEENGED_OFFSET))(this);
		}

	};
