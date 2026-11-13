#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define PLAKOLMCHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x18871680)

inline static constexpr unsigned int PLAKOLMCHCN_TypeDefinitionIndex = 58116;

	class PLAKOLMCHCN : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint KHINDEAJJHD; // 0x10
		::System::UInt32 BJDONEJOCGM; // 0x18
		::System::UInt32 MHBKJFOCPFA; // 0x1C
		::RPG::GameCore::FixPoint EJOAPDDPFLJ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLAKOLMCHCN_CTOR_OFFSET))(this);
		}

	};
