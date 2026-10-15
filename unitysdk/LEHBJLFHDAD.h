#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/System/Object.h"

#define LEHBJLFHDAD_CTOR_OFFSET UNITYSDK_OFFSET(0xB64D0B0)

inline static constexpr unsigned int LEHBJLFHDAD_TypeDefinitionIndex = 54273;

	class LEHBJLFHDAD : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint LCLKOMCBGJO; // 0x10
		::System::UInt32 NJGKCPOOHDM; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixVec3 PECPBEOHOJC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHBJLFHDAD_CTOR_OFFSET))(this);
		}

	};
