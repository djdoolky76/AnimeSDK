#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define GLLIPCNMDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA83800)

inline static constexpr unsigned int GLLIPCNMDBO_TypeDefinitionIndex = 43673;

	class GLLIPCNMDBO : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x10
		::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x18
		::IOGNBKGNPFD* PFGIMMJLOHB; // 0x20
		::System::UInt32 BOKJJKFCFME; // 0x28
		::System::Boolean EABNCCNINPP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLIPCNMDBO_CTOR_OFFSET))(this);
		}

	};
