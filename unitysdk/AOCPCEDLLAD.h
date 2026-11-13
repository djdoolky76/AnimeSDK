#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"
#include "unitysdk/System/Object.h"

#define AOCPCEDLLAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A840250)

inline static constexpr unsigned int AOCPCEDLLAD_TypeDefinitionIndex = 58785;

	class AOCPCEDLLAD : public ::System::Object
	{
	public:
		::RPG::GameCore::UnitStatus NOBBBDBMLKE; // 0x10
		::RPG::GameCore::UnitStatus LCFGGFKMJLF; // 0x14
		::System::UInt32 CEGOPEIKDLA; // 0x18
		::System::Void _ctor(::RPG::GameCore::UnitStatus a1, ::RPG::GameCore::UnitStatus a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnitStatus, ::RPG::GameCore::UnitStatus, ::System::UInt32))((::PBYTE)hIl2Cpp + AOCPCEDLLAD_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
