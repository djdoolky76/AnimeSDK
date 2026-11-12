#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define IDDAAPNDMJC_CTOR_OFFSET UNITYSDK_OFFSET(0x16E21880)

inline static constexpr unsigned int IDDAAPNDMJC_TypeDefinitionIndex = 58984;

	class IDDAAPNDMJC : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint DJAOAPJCHBG; // 0x10
		::RPG::GameCore::FixPoint AMMJNEJLMOM; // 0x18
		::RPG::GameCore::FixPoint EGOEDONEFFI; // 0x20
		::RPG::GameCore::FixPoint FOAMMBABENE; // 0x28
		::RPG::GameCore::FixPoint HJGGJJLHJGK; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDAAPNDMJC_CTOR_OFFSET))(this);
		}

	};
