#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define GLLIPCNMDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAB1C50)

	class GLLIPCNMDBO : public ::System::Object
	{
	public:
		::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x10
		::IOGNBKGNPFD* PFGIMMJLOHB; // 0x18
		::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x20
		::System::UInt32 BOKJJKFCFME; // 0x28
		::System::Boolean EABNCCNINPP; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLIPCNMDBO_CTOR_OFFSET))(this);
		}

	};
