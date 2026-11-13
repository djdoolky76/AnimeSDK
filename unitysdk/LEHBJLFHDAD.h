#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

#define LEHBJLFHDAD_CTOR_OFFSET UNITYSDK_OFFSET(0x18C335D0)

inline static constexpr unsigned int LEHBJLFHDAD_TypeDefinitionIndex = 55437;

	class LEHBJLFHDAD : public ::System::Object
	{
	public:
		::System::UInt32 NJGKCPOOHDM; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixVec3 PECPBEOHOJC; // 0x18
		::RPG::GameCore::FixPoint LCLKOMCBGJO; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHBJLFHDAD_CTOR_OFFSET))(this);
		}

	};
