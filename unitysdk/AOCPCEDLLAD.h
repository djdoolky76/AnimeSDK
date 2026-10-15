#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/UnitStatus.h"
#include "unitysdk/System/Object.h"

#define AOCPCEDLLAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1589B3A0)

inline static constexpr unsigned int AOCPCEDLLAD_TypeDefinitionIndex = 57557;

	class AOCPCEDLLAD : public ::System::Object
	{
	public:
		::RPG::GameCore::UnitStatus LCFGGFKMJLF; // 0x10
		::System::UInt32 CEGOPEIKDLA; // 0x14
		::RPG::GameCore::UnitStatus NOBBBDBMLKE; // 0x18
		::System::Void _ctor(::RPG::GameCore::UnitStatus a1, ::RPG::GameCore::UnitStatus a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::UnitStatus, ::RPG::GameCore::UnitStatus, ::System::UInt32))((::PBYTE)hIl2Cpp + AOCPCEDLLAD_CTOR_OFFSET))(this, a1, a2, a3);
		}

	};
