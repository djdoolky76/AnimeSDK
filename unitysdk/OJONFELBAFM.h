#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define OJONFELBAFM_CTOR_OFFSET UNITYSDK_OFFSET(0xBEC89B0)

inline static constexpr unsigned int OJONFELBAFM_TypeDefinitionIndex = 79396;

	class OJONFELBAFM : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* EPHECEILCCA; // 0x18
		::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x20
		::System::UInt32 BOKJJKFCFME; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJONFELBAFM_CTOR_OFFSET))(this);
		}

	};
