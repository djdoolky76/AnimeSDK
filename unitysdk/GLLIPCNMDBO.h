#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOGNBKGNPFD;
namespace RPG::GameCore { class LittleGameAbilityConfig; }
namespace RPG::GameCore { class PixAirCastCondition; }

#define GLLIPCNMDBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA89910)

inline static constexpr unsigned int GLLIPCNMDBO_TypeDefinitionIndex = 44656;

	class GLLIPCNMDBO : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameAbilityConfig* IJLBBLFFADO; // 0x10
		::IOGNBKGNPFD* PFGIMMJLOHB; // 0x18
		::RPG::GameCore::PixAirCastCondition* OPJCGMMGPOF; // 0x20
		::System::Boolean EABNCCNINPP; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 BOKJJKFCFME; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLIPCNMDBO_CTOR_OFFSET))(this);
		}

	};
